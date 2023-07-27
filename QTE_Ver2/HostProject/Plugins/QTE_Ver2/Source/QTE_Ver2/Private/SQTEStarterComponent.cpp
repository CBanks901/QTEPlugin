// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTEStarterComponent.h"
#include "SQTEUtilityFunctionLibrary.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/Character.h"
#include "Kismet/KismetMathLibrary.h"
#include "SQTEWidget.h"
#include "GameFramework/CharacterMovementComponent.h"
#include "SQTEActorBinder.h"

// Sets default values for this component's properties
USQTEStarterComponent::USQTEStarterComponent()
{
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void USQTEStarterComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	OwnerCam = GetOwner()->FindComponentByClass<UCameraComponent>();

	if (OwnerCam)
	{
		RelativeCameraTransform = OwnerCam->GetRelativeTransform();

		AController* BaseController = Cast<ACharacter>(GetOwner())->Controller;

		if (BaseController)
		{
			OwnerController = CastChecked<APlayerController>(BaseController);
			UE_LOG(LogTemp, Warning, TEXT("Begin Play Initiated!!!!"));
		}
	}

}

void USQTEStarterComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	if (bRestoreCameraSequence)
	{
		if (RestoreCameraCounter < CameraResetTimeLimit)
		{
			RestoreCameraCounter += DeltaTime;

			InterpSpeedToCamera = UKismetMathLibrary::MapRangeClamped(RestoreCameraCounter, 0.0f, CameraResetTimeLimit, 0.0f, 1.0f);

			FTransform LerpingTransform = UKismetMathLibrary::TLerp(StartingCamPoint, RelativeCameraTransform, InterpSpeedToCamera, ELerpInterpolationMode::DualQuatInterp);

			OwnerCam->SetRelativeTransform(LerpingTransform);

			UE_LOG(LogTemp, Warning, TEXT("USQTEStarterComponent::Tick bRestoreCameraSequence = true"));
			UE_LOG(LogTemp, Warning, TEXT("Current Distance to 1: %s"), *FString::SanitizeFloat(InterpSpeedToCamera));
			UE_LOG(LogTemp, Warning, TEXT("Camera Position: %s"), *OwnerCam->GetRelativeTransform().ToString());
		}
		else
		{
			bRestoreCameraSequence = false;
			SetComponentTickEnabled(false);

			RestoreCameraCounter = 0.0f;

			if (OwnerController)
			{
				GetOwner()->EnableInput(OwnerController);
				bQTEBegun = false;
			}
		}
	}
	else
	{
		if (!bQTEBegun)
		{
			SetComponentTickEnabled(false);

			if (OwnerController)
			{
				GetOwner()->EnableInput(OwnerController);
			}
		}
	}

}

KeyResultData USQTEStarterComponent::ConditionalQTEEvent_Implementation()
{
	return ConditionalQTEEventHelper();
}

void USQTEStarterComponent::ResetCameraLocation(float Timer)
{
	if (OwnerCam)
	{
		if (Timer > 0.0f)
		{
			CameraResetTimeLimit = Timer;
			RestoreCameraCounter = 0.0f;

			SetComponentTickEnabled(true);

			StartingCamPoint = OwnerCam->GetRelativeTransform();

			bRestoreCameraSequence = true;

			if (OwnerController)
				GetOwner()->DisableInput(OwnerController);
		}
	}
}

void USQTEStarterComponent::RecordRelativeTransform(FTransform NewTransform)
{
	RelativeCameraTransform = NewTransform;
}

KeyResultData USQTEStarterComponent::ConditionalQTEEventHelper()
{
	if (InputHandlerWidget)
	{
		if (InputHandlerWidget->bComplete)
		{
			switch (InputHandlerWidget->Result)
			{
			case (KeyResultData::Success):
			{
				UE_LOG(LogTemp, Warning, TEXT("ConditionalQTE success!!!"));
				ConditionalQTESuccess();
				break;
			}

			case (KeyResultData::Incomplete):
			{
				UE_LOG(LogTemp, Warning, TEXT("ConditionalQTE event still incomplete..."));
				break;
			}

			case (KeyResultData::Fail):
			{
				UE_LOG(LogTemp, Warning, TEXT("ConditionalQTE failure imminent.."));
				ConditionalQTEFailure();
				break;
			}
			}
		}
	}
	else
	{
		InputHandlerWidget = CreateWidget<USQTEWidget>(OwnerController, QTEWidgetClass);
		InputHandlerWidget->TimeLimit = 0.0f;
		InputHandlerWidget->SequenceMainCounter = 0;
		InputHandlerWidget->QTEStarterComp = this;

		if (ensureMsgf(RowLoopData.Contains(CurrentRowName), TEXT("Current Row Name '%s' does not exists within conditonal row structure"), *CurrentRowName.ToString()))
		{
			InputHandlerWidget->LoopingQTERef = *RowLoopData.Find(CurrentRowName);
		}

		InputHandlerWidget->bShouldDisplayHelperWidget = false;

		InputHandlerWidget->AddToViewport();
	}

	if (InputHandlerWidget)
		return InputHandlerWidget->Result;
	else
		return KeyResultData::Incomplete;
}

void USQTEStarterComponent::ConditionalQTESuccess()
{
	bSuccessfulSequence = true;

	GetWorld()->GetTimerManager().ClearTimer(ConditionalQTEHandle);

	if (LevelSequenceToPlay)
	{
		if (LevelSequenceToPlay->SequencePlayer->IsPlaying() || LevelSequenceToPlay->SequencePlayer->IsPaused())
			LevelSequenceToPlay->SequencePlayer->Stop();
	}

	CompletedSequence();

	if (InputHandlerWidget && InputHandlerWidget->IsInViewport())
	{
		InputHandlerWidget->RemoveFromParent();
		InputHandlerWidget = NULL;
	}


}

void USQTEStarterComponent::ConditionalQTEFailure()
{
	bSuccessfulSequence = false;

	GetWorld()->GetTimerManager().ClearTimer(ConditionalQTEHandle);

	if (LevelSequenceToPlay)
	{
		if (LevelSequenceToPlay->SequencePlayer->IsPlaying() || LevelSequenceToPlay->SequencePlayer->IsPaused())
			LevelSequenceToPlay->SequencePlayer->Stop();
	}

	CompletedSequence();

	if (InputHandlerWidget && InputHandlerWidget->IsInViewport())
	{
		InputHandlerWidget->RemoveFromParent();
		InputHandlerWidget = NULL;
	}

}

bool USQTEStarterComponent::CompletedSequenceHelper()
{
	FQTEInputDataTable DataRowRef = GetDataTableAsset();

	if (DataRowRef.SeqData.bCinematicOnly)
	{
		GetWorld()->GetTimerManager().ClearTimer(SequenceEventHandler);

		ExecutionHandler();
		UCharacterMovementComponent* CharMovement = GetOwner()->FindComponentByClass<UCharacterMovementComponent>();

		if (ensure(CharMovement))
		{
			CharMovement->bUseControllerDesiredRotation = bOriginalControllerDesiredRotaton;
			CharMovement->SetMovementMode(EMovementMode::MOVE_Walking);

			if (OwnerController)
			{
				FDetachmentTransformRules DetachRules(EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, EDetachmentRule::KeepWorld, true);
				GetOwner()->DetachFromActor(DetachRules);

				//FMinimalViewInfo InfoView = OwnerController->PlayerCameraManager.Get()->GetCameraCachePOV();
				FMinimalViewInfo InfoView = OwnerController->PlayerCameraManager.Get()->GetCameraCacheView();

				FVector CamLocation = InfoView.Location;
				FRotator CamRotation = InfoView.Rotation;

				/*@FIXME*/
				UCameraComponent* RefOwnerCam = GetOwner()->FindComponentByClass<UCameraComponent>();

				if (ensureMsgf(RefOwnerCam, TEXT("Error.. Owner of SQTEStartComponent doesn't have a camera attached")))
					RefOwnerCam->SetWorldLocationAndRotation(CamLocation, CamRotation);

				if (bIsPlayerDying)
					ResetCameraLocation(GetOwner()->GetLifeSpan() / 2);
				else
					ResetCameraLocation(5.0f);

				ActorSequenceBinder = NULL;


				QTEFinished.Broadcast(true);
			}
		}
	}
	else
	{
		BranchToNewPath(DataRowRef.SeqData.FailName, DataRowRef.SeqData.SuccessName);
	}

	return DataRowRef.SeqData.bCinematicOnly;
}

void USQTEStarterComponent::ExecutionHandler()
{
	FQTEInputDataTable DataRowRef = GetDataTableAsset();


	if (DataRowRef.SeqData.bExecution)
	{
		float LifeSpan = 1.0f;
		if (DataRowRef.SeqData.DestroyTime > 0.0f)
			LifeSpan = DataRowRef.SeqData.DestroyTime;

		if (DataRowRef.SeqData.bAll)
		{
			TArray<AActor*> ActorArray;
			ActorsToBindRef.GenerateValueArray(ActorArray);

			for (AActor* ActorRef : ActorArray)
			{
				ActorRef->SetLifeSpan(LifeSpan);

				ACharacter* TargetChar = Cast<ACharacter>(ActorRef);

				if (TargetChar)
				{
					TargetChar->GetMesh()->SetCollisionProfileName("Ragdoll");
					TargetChar->GetMesh()->SetSimulatePhysics(true);
				}
			}

			ACharacter* CharOwner = Cast<ACharacter>(GetOwner());
			if (CharOwner)
			{
				CharOwner->SetLifeSpan(LifeSpan);
				CharOwner->GetMesh()->SetCollisionProfileName("Ragdoll");
				CharOwner->GetMesh()->SetSimulatePhysics(true);
				bIsPlayerDying = true;
			}
		}
		else if (DataRowRef.SeqData.bOwner)
		{
			ACharacter* CharOwner = Cast<ACharacter>(GetOwner());
			if (CharOwner)
			{
				CharOwner->SetLifeSpan(LifeSpan);
				CharOwner->GetMesh()->SetCollisionProfileName("Ragdoll");
				CharOwner->GetMesh()->SetSimulatePhysics(true);
			}

			if (DataRowRef.SeqData.bUseIndex)
			{
				if (!DataRowRef.SeqData.ActorIndices.IsEmpty())
				{
					TArray<AActor*> ActorsList;
					ActorsToBindRef.GenerateValueArray(ActorsList);

					for (int32 IndexElement : DataRowRef.SeqData.ActorIndices)
					{
						if (ActorsList.IsValidIndex(IndexElement))
						{
							ActorsList[IndexElement]->SetLifeSpan(LifeSpan);

							ACharacter* EnemyChar = Cast<ACharacter>(ActorsList[IndexElement]);

							if (CharOwner)
							{
								EnemyChar->GetMesh()->SetCollisionProfileName("Ragdoll");
								EnemyChar->GetMesh()->SetSimulatePhysics(true);
							}
						}
					}
				}
			}
			else if (!DataRowRef.SeqData.ActorToExecute.IsEmpty())
			{
				for (FName ActorID : DataRowRef.SeqData.ActorToExecute)
				{
					if (ActorsToBindRef.Contains(ActorID))
					{
						AActor* ActorRef = *ActorsToBindRef.Find(ActorID);
						ActorRef->SetLifeSpan(LifeSpan);

						ACharacter* CharCast = Cast<ACharacter>(ActorRef);
						if (CharCast)
						{
							CharCast->GetMesh()->SetCollisionProfileName("Ragdoll");
							CharCast->GetMesh()->SetSimulatePhysics(true);
						}
					}
				}
			}

			bIsPlayerDying = true;
		}
		else if (DataRowRef.SeqData.bAllExeceptOwner)
		{
			TArray<AActor*> Targets;
			ActorsToBindRef.GenerateValueArray(Targets);

			if (!Targets.IsEmpty())
			{
				for (AActor* TargetRef : Targets)
				{
					TargetRef->SetLifeSpan(LifeSpan);

					ACharacter* TargetChar = Cast<ACharacter>(TargetRef);

					if (TargetChar)
					{
						TargetChar->GetMesh()->SetCollisionProfileName("Ragdoll");
						TargetChar->GetMesh()->SetSimulatePhysics(true);
					}
				}
			}

			bIsPlayerDying = false;
		}

		else if (DataRowRef.SeqData.bUseIndex)
		{
			TArray<AActor*> Targets;
			ActorsToBindRef.GenerateValueArray(Targets);

			if (!Targets.IsEmpty())
			{
				for (int32 IndexElem : DataRowRef.SeqData.ActorIndices)
				{
					if (Targets.IsValidIndex(IndexElem))
					{
						Targets[IndexElem]->SetLifeSpan(LifeSpan);

						ACharacter* TargetChar = Cast<ACharacter>(Targets[IndexElem]);

						if (TargetChar)
						{
							TargetChar->GetMesh()->SetCollisionProfileName("Ragdoll");
							TargetChar->GetMesh()->SetSimulatePhysics(true);
						}
					}
				}
			}

			bIsPlayerDying = false;
		}
		else
		{
			for (FName ActorID : DataRowRef.SeqData.ActorToExecute)
			{
				if (!ActorID.IsNone())
				{
					if (ActorsToBindRef.Contains(ActorID))
					{
						AActor* ActorRef = *ActorsToBindRef.Find(ActorID);
						ActorRef->SetLifeSpan(LifeSpan);

						ACharacter* EnemyChar = Cast<ACharacter>(ActorRef);

						if (EnemyChar)
						{
							EnemyChar->GetMesh()->SetCollisionProfileName("Ragdoll");
							EnemyChar->GetMesh()->SetSimulatePhysics(true);
						}
					}
				}
			}
			bIsPlayerDying = false;
		}
	}
	else
		bIsPlayerDying = false;
}

void USQTEStarterComponent::BranchToNewPath(FName Fail, FName Success)
{
	if (ensure(!Fail.IsNone()) && ensure(!Success.IsNone()))
	{
		CurrentRowName = bSuccessfulSequence ? Success : Fail;

		GetWorld()->GetTimerManager().ClearTimer(SequenceEventHandler);

		if (InputHandlerWidget)
		{
			if (InputHandlerWidget->IsInViewport())
				InputHandlerWidget->RemoveFromParent();

			InputHandlerWidget = NULL;
		}

		bPause = true;
		bHasPlayedOpening = false;

		SetInitialSequenceData();
	}
}

void USQTEStarterComponent::SetInitialSequenceData()
{
	FQTEInputDataTable CurrentDataTableRow = GetDataTableAsset();

	bDoOnce = false;
	PlayRate = CurrentDataTableRow.SeqData.SceneRate > 0.0f ? CurrentDataTableRow.SeqData.SceneRate : 1.0f;

	if (ensure(!CurrentRowName.IsNone() && ActorSequenceBinder))
	{
		if (CurrentDataTableRow.SeqData.bCinematicOnly)
		{
			if (ensureMsgf(RowSeqPlayerChart.Contains(CurrentRowName), TEXT("Error. Current Row Name '%s' doesn't exist in player chart"), *CurrentRowName.ToString()))
			{
				LevelSequenceToPlay = *RowSeqPlayerChart.Find(CurrentRowName);
				LevelSequenceToPlay->SequencePlayer.Get()->Play();
				LevelSequenceToPlay->SequencePlayer.Get()->SetPlayRate(PlayRate);

				if (ensureMsgf(DynamicRowHelper.Contains(CurrentRowName), TEXT("Somehow.. dynamic row helper map doesn't contain the following row name '%s'"), *CurrentRowName.ToString()))
				{
					if (*DynamicRowHelper.Find(CurrentRowName) == true)
						ActorSequenceBinder->DynamicMainScenes(CurrentRowName);
				}
			}
		}
		else if (CurrentDataTableRow.SeqData.bIsConditionalQTE)
		{
			if (ensure(RowLoopData.Contains(CurrentRowName)))
			{
				if (RowLoopData.Find(CurrentRowName)->bHasOpeningSequence)
				{
					if (!bHasPlayedOpening && ensure(CurrentDataTableRow.SeqData.OpeningSeq))
					{
						ALevelSequenceActor* OpeningCinematicActor;
						FMovieSceneSequencePlaybackSettings PlayBackSettings;

						PlayBackSettings.bDisableLookAtInput = true;
						ULevelSequencePlayer::CreateLevelSequencePlayer(GetOwner()->GetWorld(), CurrentDataTableRow.SeqData.OpeningSeq, PlayBackSettings, OpeningCinematicActor);

						OpeningCinematicActor->SequencePlayer.Get()->SetPlayRate(PlayRate);
						OpeningCinematicActor->SequencePlayer.Get()->Play();

						if (ensure(OpeningCinematicActor))
						{
							if (*DynamicRowHelper.Find(CurrentRowName) == true)
								ActorSequenceBinder->DynamicOpeningScenes(CurrentRowName, OpeningCinematicActor);
							else
								ActorSequenceBinder->NormalOpeningSceneBinding(CurrentRowName, OpeningCinematicActor);


							OpeningCinematicActor->SequencePlayer.Get()->OnFinished.AddDynamic(this, &USQTEStarterComponent::FinshedOpening);
						}

						return;
					}
				}

				if (ensure(RowSeqPlayerChart.Contains(CurrentRowName)))
				{
					if (InputHandlerWidget)
					{
						if (InputHandlerWidget->IsInViewport())
							InputHandlerWidget->RemoveFromParent();

						InputHandlerWidget = NULL;
					}

					if (ensure(*RowSeqPlayerChart.Find(CurrentRowName)))
						LevelSequenceToPlay = *RowSeqPlayerChart.Find(CurrentRowName);

					LevelSequenceToPlay->SequencePlayer.Get()->PlayLooping();
					LevelSequenceToPlay->SequencePlayer.Get()->SetPlayRate(PlayRate);

					if (*DynamicRowHelper.Find(CurrentRowName) == true)
						ActorSequenceBinder->DynamicMainScenes(CurrentRowName);

					FTimerDelegate ConditionalQTEEventDelegate;
					ConditionalQTEEventDelegate.BindUFunction(this, "ConditionalQTEEvent");
					GetWorld()->GetTimerManager().SetTimer(ConditionalQTEHandle, ConditionalQTEEventDelegate, 0.1, true);
				}
			}
		}
		else if (NormalQTEInput.Contains(CurrentRowName))
		{
			if (NormalQTEInput.Find(CurrentRowName)->bHasOpeningSequence)
			{
				if (!bHasPlayedOpening)
				{
					ALevelSequenceActor* LevelSequenceActor;
					FMovieSceneSequencePlaybackSettings PlayBackSettings;
					PlayBackSettings.PlayRate = PlayRate;
					PlayBackSettings.bAutoPlay = true;
					PlayBackSettings.bDisableMovementInput = true;

					ULevelSequencePlayer::CreateLevelSequencePlayer(GetOwner()->GetWorld(), CurrentDataTableRow.SeqData.OpeningSeq, PlayBackSettings, LevelSequenceActor);

					if (ensure(LevelSequenceActor))
					{
						if (!LevelSequenceActor->SequencePlayer.Get()->IsPlaying())
						{
							LevelSequenceActor->SequencePlayer.Get()->Play();
							LevelSequenceActor->SequencePlayer.Get()->SetPlayRate(PlayRate);
						}
						if (ensure(DynamicRowHelper.Contains(CurrentRowName)))
						{
							if (*DynamicRowHelper.Find(CurrentRowName) == true)
								ActorSequenceBinder->DynamicOpeningScenes(CurrentRowName, LevelSequenceActor);
							else
								ActorSequenceBinder->NormalOpeningSceneBinding(CurrentRowName, LevelSequenceActor);

							LevelSequenceActor->SequencePlayer.Get()->OnFinished.AddDynamic(this, &USQTEStarterComponent::FinshedOpening);
							return;
						}
					}
				}
			}

			float LocalStartDelay = 0.0f;
			if (NormalQTEInput.Find(CurrentRowName)->SuccessDistance < 2.0f)
				LocalStartDelay = 2.0f;

			if (ensureMsgf(RowSeqPlayerChart.Contains(CurrentRowName), TEXT("Current Row Name '%s' doesn't exist in Row Seq Player Chart Variable"), *CurrentRowName.ToString()))
			{
				ALevelSequenceActor* Temp = *RowSeqPlayerChart.Find(CurrentRowName);
				if (ensure(Temp))
				{
					CurrentSequenceEndTime = Temp->SequencePlayer.Get()->GetEndTime().AsSeconds();
				}

				LevelSequenceToPlay = *RowSeqPlayerChart.Find(CurrentRowName);
				LevelSequenceToPlay->SequencePlayer.Get()->Play();

				if (*DynamicRowHelper.Find(CurrentRowName) == true)
					ActorSequenceBinder->DynamicMainScenes(CurrentRowName);

				LevelSequenceToPlay->SequencePlayer.Get()->Pause();
				LevelSequenceToPlay->SequencePlayer.Get()->SetPlayRate(PlayRate);

				SequenceTimesRef.Empty();

				if (NormalQTEInput.Find(CurrentRowName)->bHasSequence)
				{
					if (NormalQTEInput.Find(CurrentRowName)->bTimed)
					{
						FTimerDelegate TimedSequenceEventDelegate;
						TimedSequenceEventDelegate.BindUObject(this, &USQTEStarterComponent::TimedSequenceEvent);
						GetWorld()->GetTimerManager().SetTimer(SequenceEventHandler, TimedSequenceEventDelegate, 0.1f, true);
						SequenceTimer = 0.0f;
						bPause = true;

						float DelayTimeRef = 0.0f;
						FTimeSequenceHelper HelperCopy;
						for (const FKeyToTimeBindHelper KeyBindRef : NormalQTEInput.Find(CurrentRowName)->KeyToTimeBinder)
						{
							DelayTimeRef = KeyBindRef.DelayTime == 0.0f ? 1.0f : KeyBindRef.DelayTime;

							HelperCopy.StartTimeCopy = KeyBindRef.StartTime;
							HelperCopy.HoldDownKeyTimeCopy = KeyBindRef.HoldDownTime;
							HelperCopy.TimeDelayCopy = DelayTimeRef;
							HelperCopy.TimeWindowCopy = KeyBindRef.TimeWindow;

							SequenceTimesRef.Add(HelperCopy);
						}

						if (ensure(!SequenceTimesRef.IsEmpty()))
						{
							SequenceItemIndex = 0;
							LevelSequenceToPlay->SequencePlayer.Get()->Play();

							if (*DynamicRowHelper.Find(CurrentRowName) == true)
								ActorSequenceBinder->DynamicMainScenes(CurrentRowName);
						}

						bFinishedQTEInitialization = true;
						return;
					}
				}

				FTimerDelegate KeyEventNormalDelegate;
				KeyEventNormalDelegate.BindUObject(this, &USQTEStarterComponent::KeyEventNormal);
				GetWorld()->GetTimerManager().SetTimer(SequenceEventHandler, KeyEventNormalDelegate, 0.1f, true, LocalStartDelay);

				if (ensure(NormalQTEInput.Contains(CurrentRowName)))
				{
					FTimeSequenceHelper TimeSequenceHelperTemp;
					TimeSequenceHelperTemp.TimeWindowCopy = NormalQTEInput.Find(CurrentRowName)->NoInputTimeDelay;
					SequenceTimesRef.Add(TimeSequenceHelperTemp);
				}

				InputHandlerWidget = CreateWidget<USQTEWidget>(OwnerController, QTEWidgetClass);
				InputHandlerWidget->InputRef = *NormalQTEInput.Find(CurrentRowName);
				InputHandlerWidget->bShouldDisplayHelperWidget = false;

				if (ensure(InputHandlerWidget))
					InputHandlerWidget->AddToViewport();

				bPause = false;
				bFinishedQTEInitialization = true;
			}
		}
	}
}

void USQTEStarterComponent::FinshedOpening()
{
	UE_LOG(LogTemp, Warning, TEXT("Opening has finished playing... USQTEStarterComponent::FinishedOpening"));
	bHasPlayedOpening = true;
	SetInitialSequenceData();
}

void USQTEStarterComponent::TimedSequenceEvent()
{
	if (LevelSequenceToPlay)
	{
		if (UKismetMathLibrary::NearlyEqual_FloatFloat(LevelSequenceToPlay->SequencePlayer.Get()->GetCurrentTime().AsSeconds(), CurrentSequenceEndTime, 0.25f))
		{
			bSuccessfulSequence = true;
		}
		else
		{
			if (SequenceTimesRef.IsValidIndex(SequenceItemIndex))
			{
				if (LevelSequenceToPlay->SequencePlayer.Get()->GetCurrentTime().AsSeconds() >= SequenceTimesRef[SequenceItemIndex].StartTimeCopy)
				{
					if (bDoOnce)
					{
						LevelSequenceToPlay->SequencePlayer.Get()->SetPlayRate(0.02f);
						GetWorld()->GetTimerManager().PauseTimer(SequenceEventHandler);

						TimeSequenceCounter = 0;

						FTimerDelegate SequenceTimerEventDelegate;
						SequenceTimerEventDelegate.BindUObject(this, &USQTEStarterComponent::SequenceTimerEvent);
						GetWorld()->GetTimerManager().SetTimer(SequenceTimedTimeHandler, SequenceTimerEventDelegate, 0.1f, true);
						bDoOnce = false;
					}
					else
						bDoOnce = true;
				}
			}
			else if (SequenceItemIndex > 0)
			{
				UE_LOG(LogTemp, Warning, TEXT("Successful.. just waiting for completiton now."));
				bSuccessfulSequence = true;
			}
		}
	}
}

void USQTEStarterComponent::SequenceTimerEvent()
{
	if (SequenceTimesRef.IsValidIndex(SequenceItemIndex))
	{
		if (InputHandlerWidget)
		{
			if (InputHandlerWidget->bComplete)
			{
				switch (InputHandlerWidget->Result)
				{
				case KeyResultData::Success:
				{
					SuccessSequence();
					break;
				}

				case KeyResultData::Incomplete:
				{
					UE_LOG(LogTemp, Warning, TEXT("SequenceTimerEvent... Incomplete status"));
					break;
				}

				case KeyResultData::Fail:
				{
					FailSequence();
					break;
				}
				}
			}
		}
		else
		{
			TArray<FInputData> NormalValues;
			TArray<FName> NormalKeys;

			NormalQTEInput.GenerateKeyArray(NormalKeys);
			NormalQTEInput.GenerateValueArray(NormalValues);

			if (ensure(NormalValues.Num() > 0 && NormalKeys.Num() > 0))
			{
				if (ensure(NormalKeys.Contains(CurrentRowName)))
				{
					int32 ElementID = NormalKeys.Find(CurrentRowName);
					if (ensure(ElementID != -1))
					{
						if (ensureMsgf(QTEWidgetClass, TEXT("Error.. QTEWidgetClass hasn't been set.")))
						{
							InputHandlerWidget = CreateWidget<USQTEWidget>(OwnerController, QTEWidgetClass);
							InputHandlerWidget->TimeLimit = SequenceTimesRef[SequenceItemIndex].TimeWindowCopy;
							InputHandlerWidget->SequenceMainCounter = SequenceItemIndex;
							InputHandlerWidget->InputRef = NormalValues[ElementID];
							InputHandlerWidget->bShouldDisplayHelperWidget = false;

							InputHandlerWidget->AddToViewport();
						}
					}
				}
			}
		}
	}
}

void USQTEStarterComponent::SuccessSequence()
{
	GetWorld()->GetTimerManager().ClearTimer(SequenceTimedTimeHandler);
	SequenceItemIndex++;
	GetWorld()->GetTimerManager().UnPauseTimer(SequenceEventHandler);

	LevelSequenceToPlay->SequencePlayer.Get()->Play();

	if (InputHandlerWidget)
	{
		if (InputHandlerWidget->IsInViewport())
			InputHandlerWidget->RemoveFromParent();

		InputHandlerWidget = NULL;
	}
}

void USQTEStarterComponent::FailSequence()
{
	bSuccessfulSequence = false;

	GetWorld()->GetTimerManager().ClearTimer(SequenceTimedTimeHandler);
	GetWorld()->GetTimerManager().ClearTimer(SequenceEventHandler);

	LevelSequenceToPlay->SequencePlayer.Get()->Stop();

	CompletedSequence();

	if (InputHandlerWidget)
	{
		if (InputHandlerWidget->IsInViewport())
			InputHandlerWidget->RemoveFromParent();

		InputHandlerWidget = NULL;
	}

}

void USQTEStarterComponent::KeyEventNormal()
{
	if (InputHandlerWidget)
	{
		if (LevelSequenceToPlay)
		{
			if (LevelSequenceToPlay->SequencePlayer.Get()->GetCurrentTime().AsSeconds() < 0.0f)
			{
				FailNormalKeyPress();
			}
			else
			{
				if (UKismetMathLibrary::NearlyEqual_FloatFloat(LevelSequenceToPlay->SequencePlayer.Get()->GetCurrentTime().AsSeconds(), CurrentSequenceEndTime, 0.5f))
				{
					SuccessNormalKeyPress();
				}
			}
		}
	}
	else
	{
		if (ensure(QTEWidgetClass) && ensure(!CurrentRowName.IsNone()) && ensure(NormalQTEInput.Contains(CurrentRowName)))
		{
			InputHandlerWidget = CreateWidget<USQTEWidget>(OwnerController, QTEWidgetClass);
			InputHandlerWidget->InputRef = *NormalQTEInput.Find(CurrentRowName);
			InputHandlerWidget->bShouldDisplayHelperWidget = false;

			if (InputHandlerWidget)
				InputHandlerWidget->AddToViewport();
		}
	}
}

void USQTEStarterComponent::FailNormalKeyPress()
{
	UE_LOG(LogTemp, Warning, TEXT("Failed Normal Key Press.."));
	bSuccessfulSequence = false;

	GetWorld()->GetTimerManager().ClearTimer(SequenceEventHandler);

	if (LevelSequenceToPlay->SequencePlayer.Get()->IsPlaying() || LevelSequenceToPlay->SequencePlayer.Get()->IsPaused())
	{
		LevelSequenceToPlay->SequencePlayer.Get()->StopAtCurrentTime();
		CompletedSequence();
	}

	if (InputHandlerWidget)
	{
		if (InputHandlerWidget->IsInViewport())
			InputHandlerWidget->RemoveFromParent();

		InputHandlerWidget = NULL;
	}
}

void USQTEStarterComponent::SuccessNormalKeyPress()
{
	UE_LOG(LogTemp, Warning, TEXT("Success Normal Key Press.."));
	bSuccessfulSequence = true;

	GetWorld()->GetTimerManager().ClearTimer(SequenceEventHandler);

	if (LevelSequenceToPlay->SequencePlayer.Get()->IsPlaying() || LevelSequenceToPlay->SequencePlayer.Get()->IsPaused())
	{
		LevelSequenceToPlay->SequencePlayer.Get()->Stop();
		CompletedSequence();
	}

	if (InputHandlerWidget)
	{
		if (InputHandlerWidget->IsInViewport())
			InputHandlerWidget->RemoveFromParent();

		InputHandlerWidget = NULL;
	}
}

void USQTEStarterComponent::BindAllSequenceActors()
{
	TArray<ALevelSequenceActor*> LevelSeqActorsArray;
	RowSeqPlayerChart.GenerateValueArray(LevelSeqActorsArray);

	for (ALevelSequenceActor* LevelSeqActorCopy : LevelSeqActorsArray)
	{
		if (LevelSeqActorCopy)
			LevelSeqActorCopy->SequencePlayer.Get()->OnFinished.AddDynamic(this, &USQTEStarterComponent::CompletedSequence);
	}

	SetInitialSequenceData();
	QTEStarted.Broadcast(true);
}

void USQTEStarterComponent::InputSequence(bool bSuccess, bool bStartKeySpawn)
{
	bStartKeySpawnRef = bStartKeySpawn;

	if (ensure(!CurrentRowName.IsNone()) && ensure(RowLoopData.Contains(CurrentRowName)))
	{
		if (bSuccess)
		{
			if (RowLoopData.Find(CurrentRowName)->bPlayHelperSequences == true && RowLoopData.Find(CurrentRowName)->SuccessInput.Sequences.Num() > 0)
			{
				LevelSequenceToPlay->SequencePlayer.Get()->StopAtCurrentTime();
				GetWorld()->GetTimerManager().PauseTimer(ConditionalQTEHandle);

				if (ensure(InputHandlerWidget))
				{
					InputHandlerWidget->SetVisibility(ESlateVisibility::Hidden);
					InputHandlerWidget->bReinitialize = true;
				}

				TArray<FConditionalSequencesSupport> ValueArray;
				RowLoopData.Find(CurrentRowName)->SuccessInput.Sequences.GenerateValueArray(ValueArray);

				int32 RandomIndex = 0;

				if (ValueArray.Num() > 1)
					RandomIndex = UKismetMathLibrary::RandomIntegerInRange(0, ValueArray.Num() - 1);

				if (ensure(ValueArray.IsValidIndex(RandomIndex)))
				{
					FMovieSceneSequencePlaybackSettings PlayBackSettings;
					PlayBackSettings.bAutoPlay = true;

					PlayBackSettings.PlayRate = ValueArray[RandomIndex].PlayRate >= 0.01f ? ValueArray[RandomIndex].PlayRate : 1.0f;
					PlayBackSettings.bDisableLookAtInput = true;

					ALevelSequenceActor* HelperLevelSequence;
					ULevelSequencePlayer::CreateLevelSequencePlayer(GetOwner()->GetWorld(), ValueArray[RandomIndex].LevelSequenceRef, PlayBackSettings, HelperLevelSequence);

					if (*DynamicRowHelper.Find(CurrentRowName) == true)
						ActorSequenceBinder->DynamicHelperScenes(CurrentRowName, HelperLevelSequence, RandomIndex, false);
					else
						ActorSequenceBinder->NormalHelperSceneBinding(CurrentRowName, true, RandomIndex, HelperLevelSequence);

					HelperLevelSequence->SequencePlayer.Get()->OnFinished.AddDynamic(this, &USQTEStarterComponent::FinishedInputBranch);
				}
			}
			else
			{
				FinishedInputBranch();
				if (ensure(InputHandlerWidget))
					InputHandlerWidget->bReinitialize = false;
				return;
			}
		}
		else
		{
			if (RowLoopData.Find(CurrentRowName)->bPlayHelperSequences == true && RowLoopData.Find(CurrentRowName)->FailInput.Sequences.Num() > 0)
			{
				LevelSequenceToPlay->SequencePlayer.Get()->StopAtCurrentTime();
				GetWorld()->GetTimerManager().PauseTimer(ConditionalQTEHandle);

				if (ensure(InputHandlerWidget))
				{
					InputHandlerWidget->SetVisibility(ESlateVisibility::Hidden);
					InputHandlerWidget->bReinitialize = true;
				}

				TArray<FConditionalSequencesSupport> ValueArray;
				RowLoopData.Find(CurrentRowName)->FailInput.Sequences.GenerateValueArray(ValueArray);

				int32 RandomIndex = 0;

				if (ValueArray.Num() > 1)
					RandomIndex = UKismetMathLibrary::RandomIntegerInRange(0, ValueArray.Num() - 1);

				if (ensure(ValueArray.IsValidIndex(RandomIndex)))
				{
					FMovieSceneSequencePlaybackSettings PlayBackSettings;
					PlayBackSettings.bAutoPlay = true;
					PlayBackSettings.bDisableLookAtInput = true;

					PlayBackSettings.PlayRate = ValueArray[RandomIndex].PlayRate >= 0.01f ? ValueArray[RandomIndex].PlayRate : 1.0f;

					ALevelSequenceActor* HelperLevelSequence;
					ULevelSequencePlayer::CreateLevelSequencePlayer(GetOwner()->GetWorld(), ValueArray[RandomIndex].LevelSequenceRef, PlayBackSettings, HelperLevelSequence);

					if (*DynamicRowHelper.Find(CurrentRowName) == true)
						ActorSequenceBinder->DynamicHelperScenes(CurrentRowName, HelperLevelSequence, RandomIndex, true);
					else
						ActorSequenceBinder->NormalHelperSceneBinding(CurrentRowName, false, RandomIndex, HelperLevelSequence);

					HelperLevelSequence->SequencePlayer.Get()->OnFinished.AddDynamic(this, &USQTEStarterComponent::FinishedInputBranch);
				}
			}
			else
			{
				FinishedInputBranch();
				if (ensure(InputHandlerWidget))
					InputHandlerWidget->bReinitialize = false;
				return;
			}
		}
	}
}

void USQTEStarterComponent::FinishedInputBranch()
{
	if (ensure(InputHandlerWidget))
	{
		InputHandlerWidget->SetVisibility(ESlateVisibility::Visible);

		if (bStartKeySpawnRef)
			InputHandlerWidget->ConditionalSwitch();
		else
			InputHandlerWidget->bReinitialize = false;

		if (ensure(LevelSequenceToPlay))
		{
			LevelSequenceToPlay->SequencePlayer.Get()->PlayLooping(-1);

			if (ensure(!CurrentRowName.IsNone()) && ensure(DynamicRowHelper.Contains(CurrentRowName)))
			{
				if (*DynamicRowHelper.Find(CurrentRowName) == true)
					ActorSequenceBinder->DynamicMainScenes(CurrentRowName);

				GetWorld()->GetTimerManager().UnPauseTimer(ConditionalQTEHandle);
			}
		}
	}
}

bool USQTEStarterComponent::InitializeQTE(bool bAutomatic)
{
	if (bQTEBegun)
		return false;
	else
	{
		if (bAutomatic)
		{
			bQTEBegun = true;
			return bAutomatic;
		}
		else
		{
			if (!BeginKey.IsValid())
				return false;

			RecordRelativeTransform(OwnerCam->GetRelativeTransform());

			if (!OwnerController)
				return false;
			else
			{
				bQTEBegun = (OwnerController->WasInputKeyJustPressed(BeginKey));

				return bQTEBegun;
			}
		}
	}
}

bool USQTEStarterComponent::StartQTE(UDataTable* RefTable, FName StartingRow, TMap<FName, AActor*>ActorsToBind, TSubclassOf<USQTEActorBinder> ActorBinderClass)
{
	if (bInternalBlocker)
		return false;
	else
	{
		if (!ActorBinderClass)
		{
			bInternalBlocker = true;

			if (BlockerReasoning.IsEmpty())
				BlockerReasoning = FString("ActorBinderClass reference isn't valid\n");
			else
				BlockerReasoning.Append(FString("ActorBinderClass reference isn't valid\n"));

			return false;
		}

		if (!ActorsToBind.IsEmpty())
		{
			for (const TPair<FName, AActor*>& ActorPairCopy : ActorsToBind)
			{
				if (!ActorPairCopy.Key.IsNone() && ActorPairCopy.Value)
					ActorsToBindRef.Add(ActorPairCopy);
			}
		}

		if (RefTable)
		{
			CurrentRefTable = RefTable;

			if (!CheckDataTable(CurrentRefTable))
			{
				UE_LOG(LogTemp, Warning, TEXT("(USEQTEStartComponent::StartQTE)Something wrong with data table info."));
				bInternalBlocker = true;
				if (BlockerReasoning.IsEmpty())
					BlockerReasoning = FString("Error with basic data in data table '");
				else
					BlockerReasoning.Append("Error with basic data in data table '");

				BlockerReasoning.Append(*GetNameSafe(CurrentRefTable));
				BlockerReasoning.Append("'\n");
				return false;
			}

			if (FailedDataTableRecord(CurrentRefTable))
			{
				UE_LOG(LogTemp, Warning, TEXT("USQTEStartComponent::StartQTE. Something failed with data table recording."));

				if (BlockerReasoning.IsEmpty())
					BlockerReasoning = FString("Error recording data from data table '");
				else
					BlockerReasoning.Append("Error recording data from data table '");

				BlockerReasoning.Append(*GetNameSafe(CurrentRefTable));
				BlockerReasoning.Append("'\n");

				if (!ActorsToBindRef.IsEmpty())
				{
					if (!ActorsToBindRef.IsEmpty())
						ActorsToBindRef.Empty();
				}

				if (!RowSeqPlayerChart.IsEmpty())
				{
					if (!RowSeqPlayerChart.IsEmpty())
						RowSeqPlayerChart.Empty();
				}

				if (!RowLoopData.IsEmpty())
				{
					TArray<FName> RowLoopDataNames;
					RowLoopData.GenerateKeyArray(RowLoopDataNames);

					if (!RowLoopDataNames.IsEmpty())
					{
						for (FName LoopDataNames : RowLoopDataNames)
						{
							if (!LoopDataNames.IsNone() && RowLoopData.Contains(LoopDataNames))
								RowLoopData.Remove(LoopDataNames);
						}
					}

					RowLoopDataNames.Empty();
					if (!RowLoopData.IsEmpty())
						RowLoopData.Empty();
				}

				if (!NormalQTEInput.IsEmpty())
				{
					TArray<FName> NormalKeyNames;
					NormalQTEInput.GetKeys(NormalKeyNames);

					if (!NormalKeyNames.IsEmpty())
					{
						for (FName KeyNameRef : NormalKeyNames)
						{
							if (!KeyNameRef.IsNone() && NormalQTEInput.Contains(KeyNameRef))
							{
								NormalQTEInput.Remove(KeyNameRef);
							}
						}

						NormalKeyNames.Empty();

						if (!NormalQTEInput.IsEmpty())
							NormalQTEInput.Empty();
					}
				}

				bInternalBlocker = true;
				return false;
			}

			ACharacter* CharOwner = CastChecked<ACharacter>(GetOwner());
			if (ensure(CharOwner->IsPlayerControlled()))
			{
				ActorSequenceBinder = NewObject<USQTEActorBinder>(GetOwner(), ActorBinderClass);

				if (ensure(ActorSequenceBinder))
					ActorSequenceBinder->Initialize(CurrentRefTable, GetOwner(), RowSeqPlayerChart, ActorsToBindRef);
			}

			if (StartingRow.IsNone())
			{
				TArray<FName> RowSeqChartNames;
				RowSeqPlayerChart.GenerateKeyArray(RowSeqChartNames);

				CurrentRowName = RowSeqChartNames[0];
			}
			else
			{
				CurrentRowName = CurrentRefTable->GetRowNames().Contains(StartingRow) ? StartingRow : CurrentRefTable->GetRowNames()[0];
			}

			if (!BindOpeningData())
			{
				bInternalBlocker = true;
				return false;
			}

			bOriginalControllerDesiredRotaton = GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->bUseControllerDesiredRotation;
			GetOwner()->FindComponentByClass<UCharacterMovementComponent>()->SetMovementMode(EMovementMode::MOVE_None);
			BindAllSequenceActors();
			return true;
		}
		else
		{
			//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("USQTEStarterComponent::StartQTE... Incoming Ref table is not valid")));
			bInternalBlocker = true;
			if (BlockerReasoning.IsEmpty())
				BlockerReasoning = FString("Ref table in parameter call StartQTE isn't valid\n");
			else
				BlockerReasoning.Append("Ref table in parameter call StartQTE isn't valid.\n");
			return false;
		}
	}
}

bool USQTEStarterComponent::CheckDataTable(UDataTable* DataTableToCheck)
{
	bool result = true;

	TArray<FSequenceNode*> DataTableRows;

	TArray<FQTEInputDataTable*> DataTableInfo;
	DataTableToCheck->GetAllRows<FQTEInputDataTable>("", DataTableInfo);

	for (int k = 0; k < DataTableInfo.Num(); k++)
		DataTableRows.Add(&DataTableInfo[k]->SeqData);

	TArray<FName> RowNames = DataTableToCheck->GetRowNames();

	for (int32 i = 0; i < RowNames.Num(); i++)
	{
		if (RowNames.IsValidIndex(i) && !RowNames[i].IsNone() && DataTableRows.IsValidIndex(i) && DataTableRows[i])
		{
			DynamicRowHelper.Add(RowNames[i], DataTableRows[i]->bDynamicScenes);

			if (!DataTableRows[i]->CurrentSeq)
			{
				UE_LOG(LogTemp, Warning, TEXT("Error. Row '%s' does not have a valid Current Sequence Set."), *RowNames[i].ToString());
				//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Row '%s' doesn't have it's current sequence set"), *RowNames[i].ToString() ));
				result = false;

				if (BlockerReasoning.IsEmpty())
					BlockerReasoning = FString("Error. Row Name '");
				else
					BlockerReasoning.Append("Error. Row Name '");
				BlockerReasoning.Append(*RowNames[i].ToString());
				BlockerReasoning.Append("' does not have a valid Current Sequence Set in data table '");
				BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
				BlockerReasoning.Append("'\n");
			}
			else
			{
				ALevelSequenceActor* DataTableLevelSequenceCopy;
				FMovieSceneSequencePlaybackSettings PlayBackSettings;
				PlayBackSettings.bDisableLookAtInput = true;

				ULevelSequencePlayer::CreateLevelSequencePlayer(GetOwner()->GetWorld(), DataTableRows[i]->CurrentSeq, PlayBackSettings, DataTableLevelSequenceCopy);

				RowSeqPlayerChart.Add(RowNames[i], DataTableLevelSequenceCopy);
			}

			if (!DataTableRows[i]->bCinematicOnly)
			{
				if (RowNames.Contains(DataTableRows[i]->FailName))
				{
					if (DataTableRows[i]->FailName.IsNone())
					{
						result = false;
						if (BlockerReasoning.IsEmpty())
							BlockerReasoning = FString("Error.. Row '");
						else
							BlockerReasoning.Append("Error.. Row '");
						BlockerReasoning.Append(*RowNames[i].ToString());
						BlockerReasoning.Append("' doesn't have a fail name set from data table '");
						BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
						BlockerReasoning.Append("' \n");
					}
				}
				else
				{

					result = false;

					if (BlockerReasoning.IsEmpty())
						BlockerReasoning = FString("Error. Fail Name: '");
					else
						BlockerReasoning.Append("Error. Fail Name: '");
					BlockerReasoning.Append(*DataTableRows[i]->FailName.ToString());
					BlockerReasoning.Append("' from row '");
					BlockerReasoning.Append(*RowNames[i].ToString());
					BlockerReasoning.Append("' does not exist in table '");
					BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
					BlockerReasoning.Append("'\n");
				}

				if (RowNames.Contains(DataTableRows[i]->SuccessName))
				{
					if (DataTableRows[i]->SuccessName.IsNone())
					{
						result = false;

						if (BlockerReasoning.IsEmpty())
							BlockerReasoning = FString("Row '");
						else
							BlockerReasoning.Append("Row '");
						BlockerReasoning.Append(*RowNames[i].ToString());
						BlockerReasoning.Append("' does not have a success name set from data table '");
						BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
						BlockerReasoning.Append("'\n");
					}
				}
				else
				{

					result = false;

					if (BlockerReasoning.IsEmpty())
						BlockerReasoning = FString("Error. Success Name: \n");
					else
						BlockerReasoning.Append("Error. Success Name: '");
					BlockerReasoning.Append(*DataTableRows[i]->SuccessName.ToString());
					BlockerReasoning.Append("' from row '");
					BlockerReasoning.Append(*RowNames[i].ToString());
					BlockerReasoning.Append("' does not exist in table '");
					BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
					BlockerReasoning.Append("'\n");

				}
			}
		}
	}

	RowNames.Empty();
	return result;
}

bool USQTEStarterComponent::FailedDataTableRecord(UDataTable* DataTableToCheck)
{
	bool bFailedBinding = false;

	if (DataTableToCheck)
	{
		TArray<FName> DataTableRowNames = DataTableToCheck->GetRowNames();
		TArray<FSequenceNode*> DataTableRows;

		TArray<FQTEInputDataTable*> DataTableAsset;
		DataTableToCheck->GetAllRows<FQTEInputDataTable>("", DataTableAsset);

		for (int i = 0; i < DataTableAsset.Num(); i++)
			DataTableRows.Add(&DataTableAsset[i]->SeqData);

		for (int32 i = 0; i < DataTableRowNames.Num(); i++)
		{
			if (DataTableRows[i]->bCinematicOnly)
			{
				if (!DataTableRows[i]->CurrentSeq)
				{
					bFailedBinding = true;
					//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Error. Current row '%s' does not have current seq set"),
						//	*DataTableRowNames[i].ToString()));
					if (BlockerReasoning.IsEmpty())
						BlockerReasoning = FString("Error. Current row: ");
					else
						BlockerReasoning.Append("Error. Current row: ");

					BlockerReasoning.Append(DataTableRowNames[i].ToString());
					BlockerReasoning.Append(" does not have current seq variable set in data table '");
					BlockerReasoning.Append(*GetNameSafe(DataTableToCheck));
					BlockerReasoning.Append("'\n");
				}
			}
			else
			{
				bool bHasOpening = false;

				if (DataTableRows[i]->bIsConditionalQTE)
				{
					if (DataTableRows[i]->OpeningSeq)
						bHasOpening = true;

					FConditionalQTE OutputRef;
					bool bIsValid = false;
					USQTEUtilityFunctionLibrary::GetConditionalParameters(DataTableRows[i]->conditionalQTE, bHasOpening, OutputRef, bIsValid);

					if (bIsValid)
					{
						RowLoopData.Add(DataTableRowNames[i], OutputRef);
					}
					else
					{
						bFailedBinding = true;
						//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, 
						//	FString::Printf(TEXT("Error. Something is wrong with CondtionalQTE data. Please check logs..")));

						if (BlockerReasoning.IsEmpty())
							BlockerReasoning = FString("Error. Something is wrong with ConditionalQTE data. Please check logs by searching GetConditionalParameters\n");
						else
							BlockerReasoning.Append("Error. Something is worng with ConditionalQTE data. Please check logs by searching GetConditionalParameters\n");
					}
				}
				else
				{
					if (!RowSeqPlayerChart.Contains(DataTableRowNames[i]))
					{
						bFailedBinding = true;
						if (BlockerReasoning.IsEmpty())
							BlockerReasoning = FString("Error. RowSeqPlayerChart does not contain: ");
						else
							BlockerReasoning.Append("Error. RowSeqPlayerChart does not contain: ");

						BlockerReasoning.Append(*DataTableRowNames[i].ToString());
						BlockerReasoning.Append("\n");
					}
					else
					{
						if (DataTableRows[i]->OpeningSeq)
							bHasOpening = true;

						float EndTime = USQTEUtilityFunctionLibrary::GetSequenceEndTime(*RowSeqPlayerChart.Find(DataTableRowNames[i]));

						FInputData OutDataRef = USQTEUtilityFunctionLibrary::GetInputParameters(EndTime, bHasOpening, DataTableRows[i]->SequenceInput);

						if (OutDataRef.bValidInput)
							NormalQTEInput.Add(DataTableRowNames[i], OutDataRef);
						else
						{
							bFailedBinding = true;
							//	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Red, FString::Printf(TEXT("Error. Something is wrong with FInputStruct data. Please check logs..")));

							if (BlockerReasoning.IsEmpty())
								BlockerReasoning = FString("Error. Something is wrong with FInputStruct data. Please check logs by searching GetInputParameters\n");
							else
								BlockerReasoning.Append("Error. Something is wrong with FInputStruct data. Please check logs by searching GetInputParameters\n");
						}
					}
				}
			}
		}

	}

	return bFailedBinding;
}

bool USQTEStarterComponent::BindOpeningData()
{
	bool result = true;
	TArray<FName> DataTableRowNames;

	if (CurrentRefTable)
		DataTableRowNames = CurrentRefTable->GetRowNames();
	else
		return false;

	TArray<FSequenceNode*> DataTableRows;

	TArray<FQTEInputDataTable*> DataTableInfo;
	CurrentRefTable->GetAllRows<FQTEInputDataTable>("", DataTableInfo);

	for (FQTEInputDataTable* DataRef : DataTableInfo)
	{
		DataTableRows.Add(&DataRef->SeqData);
	}

	for (int32 i = 0; i < DataTableRows.Num(); i++)
	{
		if (!DataTableRows[i]->bDynamicScenes)
		{
			if (!RowSeqPlayerChart.Contains(DataTableRowNames[i]))
			{
				result = false;
				if (BlockerReasoning.IsEmpty())
					BlockerReasoning = FString("RowSeqPayChart does not contain the following row: ");
				else
					BlockerReasoning.Append("RowSeqPlayChart does not contain the following row: ");
				BlockerReasoning.Append(DataTableRowNames[i].ToString());
				BlockerReasoning.Append(" from data table: ");
				BlockerReasoning.Append(*GetNameSafe(CurrentRefTable));
				BlockerReasoning.Append("\n");
				break;
			}
			else
			{
				if (ActorSequenceBinder)
					ActorSequenceBinder->NormalSceneBinding(DataTableRowNames[i]);
				else
				{
					result = false;
					UE_LOG(LogTemp, Warning, TEXT("USQTEStarterComponent::BindOpeningData.....Actor sequence binder isn't valid."));
					if (BlockerReasoning.IsEmpty())
						BlockerReasoning = FString("ActorSequenceBinder is not valid\n");
					else
						BlockerReasoning.Append("ActorSequenceBinder is not valid.\n");
				}
			}
		}
	}

	return result;
}

FQTEInputDataTable USQTEStarterComponent::GetDataTableAsset()
{
	FQTEInputDataTable* DataRowRef = CurrentRefTable->FindRow<FQTEInputDataTable>(CurrentRowName, "");

	if (ensure(DataRowRef))
		return *DataRowRef;

	UE_LOG(LogTemp, Warning, TEXT("Something is wrong internally if this strng is printed. (USQTEStarterComponent::GetDataTableAsset)"));
	return FQTEInputDataTable();
}