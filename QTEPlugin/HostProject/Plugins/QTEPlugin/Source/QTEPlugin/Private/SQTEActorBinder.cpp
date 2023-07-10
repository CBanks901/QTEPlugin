

#include "SQTEActorBinder.h"
#include "LevelSequenceActor.h"
#include "EngineUtils.h"

void USQTEActorBinder::Initialize(UDataTable* InDataTable, AActor* Owner, const TMap<FName, ALevelSequenceActor*> RowSequence, TMap<FName, AActor*> ActorsList)
{
	if (InDataTable)
		this->CurrentTableRef = InDataTable;

	if (Owner)
	{
		OwnerRef = Owner;
		OwnerTransform = Owner->GetActorTransform();
	}

	if (RowSequence.Num() > 0)
	{
		for (TPair<FName, ALevelSequenceActor*> RowPair : RowSequence)
		{
			if (!RowPair.Key.IsNone() && RowPair.Value)
			{
				DynamicRowSequence.Add(RowPair.Key, RowPair.Value);
			}
		}
	}

	if (ActorsList.Num() > 0)
	{
		for (auto it = ActorsList.CreateConstIterator(); it; ++it)
		{
			if (it)
			{
				if (!it.Key().IsNone() && it.Value())
				{
					ActorsListRef.Add(*it);
					//GEngine->AddOnScreenDebugMessage(-1, 10, FColor::Green, FString::Printf(TEXT("Actor %s added."), *it.Key().ToString()
					//));
				}
			}
		}
	}


}

void USQTEActorBinder::SetUpRoot(FMovieSceneObjectBindingID IDRef, ALevelSequenceActor* LevelSeqActorRef)
{
	if (IDRef.IsValid())
	{
		RootBinding = IDRef;
		AActor* ActorRef = Cast<AActor>(LevelSeqActorRef->SequencePlayer.Get()->GetBoundObjects(IDRef)[0]);

		if (ActorRef)
			ActorRef->SetActorLocationAndRotation(OwnerTransform.GetLocation(), OwnerTransform.GetRotation());
		else
			UE_LOG(LogTemp, Warning, TEXT("Unable to get root actor from LevelSeqActorRef"));
	}
}

void USQTEActorBinder::ValidOpeningSequence(const FName CurrentRow, ALevelSequenceActor* OpeningLevelSeqRef, bool& result)
{
	result = true;

	if (CurrentRow.IsNone() || !CurrentTableRef || !OpeningLevelSeqRef)
		result = false;
	

	FQTEInputDataTable* SeqTable = CurrentTableRef->FindRow<FQTEInputDataTable>(CurrentRow, "");
	if (SeqTable)
	{
		if (SeqTable->SeqData.bDynamicScenes)
		{
			if (SeqTable->SeqData.OpeningSeq)
			{
				if (SeqTable->SeqData.OpeningSeq == OpeningLevelSeqRef->GetSequence())
				{
					UE_LOG(LogTemp, Warning, TEXT("Matching Opening Detected..."));
				}
				else
					result = false;
			}
			else
				result = false;
		}
		else
			result = false;
	}
	else
		result = false;
		
}

bool USQTEActorBinder::BindAllActors(ALevelSequenceActor* LevelSeqRef, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID OwnerBinding, FMovieSceneObjectBindingID RootBindingRef)
{
	if (!LevelSeqRef)
	{
		UE_LOG(LogTemp, Warning, TEXT("Level Sequence Actor is not valid"));
		return false;
	}

	if (!OwnerBinding.IsValid() || !RootBindingRef.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Either the root or the owner isn't valid USQTEActorBinder::BindAllActors."));
		return false;
	}

	if (!BindingData.IsEmpty())
	{
		for (TPair<FName, FMovieSceneObjectBindingID> BindingPair : BindingData)
		{
			if (BindingPair.Key.IsNone() || !BindingPair.Value.IsValid())
				continue;

			bool exists = ActorsListRef.Contains(BindingPair.Key);

			if (exists)
			{
				TArray<AActor*> ActorsToAdd;
				ActorsToAdd.Add(*ActorsListRef.Find(BindingPair.Key));

				LevelSeqRef->SetBinding(BindingPair.Value, ActorsToAdd);
			}
			else
				return false;
		}
	}

	if (!OwnerRef)
		return false;

	TArray<AActor*> OwnerActors;
	OwnerActors.Add(OwnerRef);

	LevelSeqRef->SetBinding(OwnerBinding, OwnerActors);
	SetUpRoot(RootBindingRef, LevelSeqRef);

	return true;
}

FName USQTEActorBinder::DynamicHelperScenesSupport(const FName CurrentRow, int32 IndexToFind, bool bFailedInput)
{
	if (!CurrentTableRef || CurrentRow.IsNone() || IndexToFind == -1)
		return FName();

	FQTEInputDataTable* SeqTable = CurrentTableRef->FindRow<FQTEInputDataTable>(CurrentRow, "");
	FSequenceNode* SeqNodeRef = &SeqTable->SeqData;

	if (bFailedInput)
	{
		if (SeqNodeRef != NULL)
		{
			auto FailIt = SeqNodeRef->conditionalQTE.FailInput.Sequences.CreateConstIterator();

			int32 indexLocation = 0;
			if (indexLocation != IndexToFind)
			{
				while (indexLocation != IndexToFind)
				{
					++FailIt;
					indexLocation++;
				}
			}

			return SeqNodeRef->conditionalQTE.FailInput.IsValidConditionalSequence(FailIt.Key()) ? FailIt.Key() : FName();
		}
	}
	else
	{
		if (SeqNodeRef != NULL)
		{
			auto ItSuccess = SeqNodeRef->conditionalQTE.SuccessInput.Sequences.CreateConstIterator();

			int32 indexLocation = 0;
			if (indexLocation != IndexToFind)
			{
				while (indexLocation != IndexToFind)
				{
					++ItSuccess;
					indexLocation++;
				}
			}

			return SeqNodeRef->conditionalQTE.SuccessInput.IsValidConditionalSequence(ItSuccess.Key()) ? ItSuccess.Key() : FName();
		}
	}

	UE_LOG(LogTemp, Warning, TEXT("Something went wrong. Default string passed in.") );
	return FName();
}

bool USQTEActorBinder::DynamicMainScenesSupport(const FName CurrentRow, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID OwnerBinding, FMovieSceneObjectBindingID RootBindingRef)
{
	if (CurrentRow.IsNone() || !OwnerBinding.IsValid() || !RootBindingRef.IsValid())
	{
		UE_LOG(LogTemp, Warning, TEXT("Unable to bind main sequences due to bad parameters... USQTEActorBinder::DynamicMainScenesSupport"));
		return false;
	}


	if (DynamicRowSequence.Contains(CurrentRow))
	{
		UE_LOG(LogTemp, Warning, TEXT("Successfully binding All data for main scene. USQTEActorBinder::DynamicMainScenesSupport"));
		return BindAllActors(*DynamicRowSequence.Find(CurrentRow), BindingData, OwnerBinding, RootBindingRef);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failure. Unable to bind actors via USQTEActorBinder::DynamicMainScenesSupport. The current row doesn't exist inside the DynamicRowSequences Map."));
		return false;
	}
}

bool USQTEActorBinder::NormalSceneBindingSupport(const FName CurrentRow, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID RootBind)
{
	if (CurrentRow.IsNone() || !RootBind.IsValid())
		return false;

	if (DynamicRowSequence.Contains(CurrentRow))
	{
		UE_LOG(LogTemp, Warning, TEXT("Successfully binding All data for main scene. USQTEActorBinder::NormalSceneBindingSupport"));
		return NormalActorBinding(*DynamicRowSequence.Find(CurrentRow), BindingData, RootBind);
	}
	else
	{
		UE_LOG(LogTemp, Warning, TEXT("Failure. Unable to bind actors via USQTEActorBinder::NormalBindingSupport. The current row doesn't exists inside the DynamicRowSequences Map."))
		return false;
	}
	
}


FName USQTEActorBinder::NormalHelperSceneGetTargetID(const FName CurrentRow, bool Success, int32 IndexToFind)
{
	if (!CurrentRow.IsNone())
	{
		FQTEInputDataTable* DataRow = CurrentTableRef->FindRow<FQTEInputDataTable>(CurrentRow, "");

		if (DataRow)
		{
			TArray<FConditionalSequencesSupport> SequenceArray;
			TArray<FName> NameKeys;

			if (Success)
			{
				DataRow->SeqData.conditionalQTE.SuccessInput.Sequences.GenerateValueArray(SequenceArray);
				DataRow->SeqData.conditionalQTE.SuccessInput.Sequences.GetKeys(NameKeys);
			}
			else
			{
				DataRow->SeqData.conditionalQTE.FailInput.Sequences.GenerateValueArray(SequenceArray);
				DataRow->SeqData.conditionalQTE.FailInput.Sequences.GetKeys(NameKeys);
			}

			if (SequenceArray.Num() > 0 && SequenceArray.IsValidIndex(IndexToFind) )
			{
				if (SequenceArray[IndexToFind].PlayRate > 0.0f && SequenceArray[IndexToFind].LevelSequenceRef && !NameKeys[IndexToFind].IsNone())
					return NameKeys[IndexToFind];
			}
		}
	}

	return FName();
}

bool USQTEActorBinder::NormalActorBinding(ALevelSequenceActor* LevelSeqRef, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID RootBind)
{
	if (!LevelSeqRef || !RootBind.IsValid())
		return false;
	
	if (!BindingData.IsEmpty())
	{
		for (TPair<FName, FMovieSceneObjectBindingID> BindPair : BindingData)
		{
			if (BindPair.Key.IsNone() || !BindPair.Value.IsValid())
				continue;

			if (!ActorsListRef.IsEmpty())
			{
				bool exists = ActorsListRef.Contains(BindPair.Key);

				if (exists)
				{
					TArray<AActor*> ActorsToAdd;
					ActorsToAdd.Add(*ActorsListRef.Find(BindPair.Key));

					LevelSeqRef->SetBinding(BindPair.Value, ActorsToAdd);
				}
				else
					return false;
			}
			else
				return false;
		}
	}

	if (!OwnerRef)
		return false;

	TArray<AActor*> OwnerActors;
	OwnerActors.Add(OwnerRef);

	LevelSeqRef->SetBinding(RootBind, OwnerActors);

	return true;
}
