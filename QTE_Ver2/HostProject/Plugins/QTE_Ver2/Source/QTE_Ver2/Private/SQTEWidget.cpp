// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTEWidget.h"
#include "SQTE_KeyWidget.h"
#include "SQTEOwnerInputComponent.h"
#include "SQTEStarterComponent.h"
#include "SQTE_DisplayDataWidget.h"
#include "SQTE_ContainerWidget.h"
#include "SQTe_ConditionalDisplayData.h"
#include "Components/CanvasPanel.h"
#include "SQTEUtilityFunctionLibrary.h"
#include "Kismet/KismetMathLibrary.h"

static TAutoConsoleVariable<bool> CVarDisplayHelperWidget(TEXT("r.bShouldDisplayHelperWidget"), false, TEXT("Display Widgets to be drawn"), ECVF_Cheat);

void USQTEWidget::NativeConstruct()
{
	Super::NativeConstruct();

	if (SequenceNewKeyCounter != 5)
		SequenceNewKeyCounter = 5;

	QTEInputComp = GetOwningPlayerPawn()->FindComponentByClass<USQTEOwnerInputComponent>();
	bReinitialize = true;
	Result = KeyResultData::Incomplete;

	if (QTEInputComp)
	{
		PC = GetOwningPlayer();
		DetermineBranchingPath();

		if (ensure(GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>()))
		{
			PlayRate = GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>() ?
				GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>()->PlayRate : 1.0f;

			FQTEInputDataTable DataTableRow = GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>()->GetDataTableAsset();

			bIsDynamicRef = DataTableRow.SeqData.bDynamicScenes;
		}

	}
	else
		RemoveFromParent();
}

void USQTEWidget::NativeTick(const FGeometry& MyGeometry, float InDeltaTime)
{
	Super::NativeTick(MyGeometry, InDeltaTime);
	bShouldDisplayHelperWidget = CVarDisplayHelperWidget.GetValueOnGameThread();

	if (!bReinitialize)
	{
		if (QTEStarterComp)
		{
			if (bShouldDisplayHelperWidget)
			{
				if (QTE_ConditionalOptionalDisplay_Widget->GetVisibility() != ESlateVisibility::Visible)
					QTE_ConditionalOptionalDisplay_Widget->SetVisibility(ESlateVisibility::Visible);

				QTE_ConditionalOptionalDisplay_Widget->AddInputStats(bIsDynamicRef, bInstantFailureRef, CurrentFailCounter,
					CurrentSuccessCounter, CurrentDataIndex, LoopingQTERef);
			}
			else
			{
				if (QTE_ConditionalOptionalDisplay_Widget->GetVisibility() != ESlateVisibility::Hidden)
					QTE_ConditionalOptionalDisplay_Widget->SetVisibility(ESlateVisibility::Hidden);
			}

			if (CurrentDataIndex < DataLength)
			{
				switch (InputPath)
				{
				case (QTEInputPath::KeyPressOnly):
				{
					ConditionalKeyPressHandler();
					break;
				}

				case (QTEInputPath::SequentialKeys):
				{
					ConditionalPrecisionInput(InDeltaTime);
					break;
				}

				case (QTEInputPath::MultiSequentialKeys):
				{
					ConditionalSubSequenceHandler(InDeltaTime);
					break;
				}
				}
			}
			else
				Result = KeyResultData::Success;
		}

		else
		{
			if (bShouldDisplayHelperWidget)
			{
				if (QTE_OptionalDisplay_Widget->GetVisibility() != ESlateVisibility::Visible)
					QTE_OptionalDisplay_Widget->SetVisibility(ESlateVisibility::Visible);

				QTE_OptionalDisplay_Widget->AddInputStats(InputRef, NoInputTimeDelayCounter, AttemptsToRegressCounter, MaxAttemptsToFailCounter);
			}
			else
			{
				if (QTE_OptionalDisplay_Widget->GetVisibility() != ESlateVisibility::Hidden)
					QTE_OptionalDisplay_Widget->SetVisibility(ESlateVisibility::Hidden);
			}

			CurrentTime += InDeltaTime;

			switch (InputPath)
			{
			case (QTEInputPath::KeyPressOnly):
			{
				KeyPressHandler(InDeltaTime);
				break;
			}

			case (QTEInputPath::MultiKeys):
			{
				MultiKeyHandler(InDeltaTime);
				break;
			}
			case (QTEInputPath::SequentialKeys):
			{
				SequentialKeyHandler(InDeltaTime);
				break;
			}

			case (QTEInputPath::MultiSequentialKeys):
			{
				SubSequenceHandler(InDeltaTime);
				break;
			}

			default:
				UE_LOG(LogTemp, Warning, TEXT("Default path.."));
				break;
			}
		}
	}
	else
		UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::Tick....Reinitializing...."));
}

void USQTEWidget::DetermineBranchingPath()
{
	UE_LOG(LogTemp, Warning, TEXT("Determing Branch Path Data"));

	QTE_OptionalDisplay_Widget->SetVisibility(ESlateVisibility::Hidden);
	QTE_ConditionalOptionalDisplay_Widget->SetVisibility(ESlateVisibility::Hidden);

	if (QTEStarterComp)
	{
		CurrentDataIndex = 0;
		DataLength = LoopingQTERef.inputData.Data.Num();

		NextThreshold = DataLength > 1 ? LoopingQTERef.inputData.Data[CurrentDataIndex + 1].Threshold : -1;

		SuccessThresholdDelta = FailThresholdDelta = CurrentFailCounter = 0;

		bInstantFailureRef = LoopingQTERef.bInstantFailure;

		QTEConditionalInput InputChoiceRef = LoopingQTERef.inputData.Data[CurrentDataIndex].InputChoice;

		switch (InputChoiceRef)
		{
		case (QTEConditionalInput::KeysOnly):
		{
			CurrentKeys = LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.Keys;
			QTE_Container_Widget->SetUpKeys(CurrentKeys);

			InputPath = QTEInputPath::KeyPressOnly;
			SetUpLevelSequencerRef();

			QTE_Container_Widget->PlayNormalKeyAnimations();
			break;
		}

		case(QTEConditionalInput::Precision):
		{
			CurrentKeyIndex = 0;
			SequenceSize = LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys.Num();

			QTE_Container_Widget->SetUpKeys(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[SequenceMainCounter].Keys);

			TimeLimit = LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[SequenceMainCounter].TimeLength;

			for (int32 i = 0; i < LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys.Num(); i++)
			{
				CurrentKeys.AddUnique(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[SequenceMainCounter].Keys[i]);
				QTE_Container_Widget->PlayCountDownAnimation(i, TimeLimit);
			}

			InputPath = QTEInputPath::SequentialKeys;
			QTE_Container_Widget->EnableOuterBackground();
			SetUpLevelSequencerRef();

			break;
		}

		case (QTEConditionalInput::SubSequence):
		{
			CurrentKeyIndex = 0;
			if (LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].bHoldKey)
			{
				HoldTimeRef = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].HoldTime;
			}

			CurrentKeys = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].Keys;

			InputPath = QTEInputPath::MultiSequentialKeys;
			QTE_Container_Widget->SetUpKeys(CurrentKeys);
			SetUpLevelSequencerRef();

			/*@FIXME*/
			TimeLimit = 20.0f;
			QTE_Container_Widget->PlayNormalKeyAnimations();

			break;
		}
		}

		return;
	}
	else
	{
		if (ensure(InputRef.bValidInput))
			bInstantFailureRef = InputRef.bInstantFailure;

		if (InputRef.bHasSequence)
		{
			if (InputRef.bTimed)
			{
				if (InputRef.KeyToTimeBinder[SequenceMainCounter].bPrecision)
				{
					bHasPrecision = true;
					CurrentKeyIndex = 0;
					SetUpLevelSequencerRef();

					if (InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys.Num() == 0)
					{
						TerminateQTE();
						return;
					}

					SequenceSize = InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys.Num();

					QTE_Container_Widget->SetUpKeys(InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys);

					for (int32 i = 0; i < InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys.Num(); i++)
					{
						CurrentKeys.AddUnique(InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys[i]);
						QTE_Container_Widget->PlayCountDownAnimation(i, InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].TimeLength);
					}

					InputPath = QTEInputPath::SequentialKeys;
					QTE_Container_Widget->EnableOuterBackground();
					TimeLimit = InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].TimeLength;
				}
				else if (InputRef.KeyToTimeBinder[SequenceMainCounter].bHasSubSequence)
				{
					CurrentKeyIndex = 0;

					if (InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[0].bHoldKey)
						HoldTimeRef = InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[0].HoldTime;

					CurrentKeys = InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[0].Keys;
					InputPath = QTEInputPath::MultiSequentialKeys;
					QTE_Container_Widget->SetUpKeys(CurrentKeys);

					SetUpLevelSequencerRef();
					if (InputRef.KeyToTimeBinder[SequenceMainCounter].bShouldDelayTime)
						if (ensure(TimeLimit != 0))
							TimeLimit /= InputRef.KeyToTimeBinder[SequenceMainCounter].DelayTime;
				}
				else
				{
					bHasPrecision = false;
					InputPath = QTEInputPath::SequentialKeys;

					SetUpLevelSequencerRef();

					QTE_Container_Widget->SetUpKeys(InputRef.KeyToTimeBinder[SequenceMainCounter].Key);

					SequenceSize = InputRef.KeyToTimeBinder[SequenceMainCounter].Key.Num();

					CurrentKeyIndex = 0;
					TArray<int32> HighlightIndex;
					HighlightIndex.Add(CurrentKeyIndex);
					QTE_Container_Widget->HighlightActiveKeys(HighlightIndex);

					if (InputRef.KeyToTimeBinder[SequenceMainCounter].bShouldDelayTime)
						if (ensure(TimeLimit != 0.0f))
							TimeLimit /= InputRef.KeyToTimeBinder[SequenceMainCounter].DelayTime;
				}
			}
			else
			{
				InputPath = QTEInputPath::MultiKeys;
				SetUpLevelSequencerRef();
				CurrentKeys = InputRef.Keys;
				QTE_Container_Widget->SetUpKeys(CurrentKeys);
				return;
			}
		}
		else
		{
			InputPath = QTEInputPath::KeyPressOnly;
			SetUpLevelSequencerRef();
			TArray<FKey> TargetKey;
			TargetKey.Add(InputRef.Keys[0]);
			QTE_Container_Widget->SetUpKeys(TargetKey);
			QTE_Container_Widget->PlayNormalKeyAnimations();

			return;
		}

	}
}

void USQTEWidget::ConditionalSwitch()
{
	QTE_Container_Widget->ClearSetUp();
	QTE_Container_Widget->RemoveAllChildrenFromViewPort();

	CurrentTime = 0.0f;

	FTimerHandle ConditionalSwitchHandle;
	FTimerDelegate ConditionalSwitchDelegate;
	ConditionalSwitchDelegate.BindUObject(this, &USQTEWidget::ConditionalSwitchRemaining);

	GetOwningPlayerPawn()->GetWorld()->GetTimerManager().SetTimer(ConditionalSwitchHandle, ConditionalSwitchDelegate, 0.5, false);
}

void USQTEWidget::ConditionalSwitchRemaining()
{
	if (LoopingQTERef.inputData.Data.IsValidIndex(CurrentDataIndex))
	{
		switch (InputPath)
		{
		case (QTEInputPath::KeyPressOnly):
		{
			CurrentKeys = LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.Keys;

			if (ensure(!CurrentKeys.IsEmpty()))
				QTE_Container_Widget->SetUpKeys(CurrentKeys);

			QTE_Container_Widget->PlayNormalKeyAnimations();
			break;
		}

		case (QTEInputPath::SequentialKeys):
		{
			CurrentKeyIndex = 0;
			SequenceSize = LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys.Num();
			CurrentKeys.Empty();

			QTE_Container_Widget->SetUpKeys(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys);

			for (int32 i = 0; i < LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys.Num(); i++)
			{
				CurrentKeys.Add(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys[i]);
				QTE_Container_Widget->PlayCountDownAnimation(i, LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].TimeLength);
			}

			QTE_Container_Widget->EnableOuterBackground();
			TimeLimit = LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].TimeLength;
			break;
		}

		case (QTEInputPath::MultiSequentialKeys):
		{
			TimeLimit = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap.Num() * 10.0f;
			CurrentIndex = 0;

			if (LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].bHoldKey)
				HoldTimeRef = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].HoldTime;
			else
				HoldTimeRef = 0.0f;

			CurrentKeys = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[0].Keys;

			if (ensure(!CurrentKeys.IsEmpty()))
				QTE_Container_Widget->SetUpKeys(CurrentKeys);

			QTE_Container_Widget->PlayNormalKeyAnimations();

			break;
		}

		}

		bReinitialize = false;
	}
	else
	{
		Result = CurrentDataIndex >= LoopingQTERef.inputData.Data.Num() ? KeyResultData::Success : KeyResultData::Fail;
		return;
	}
}

void USQTEWidget::KeyPressHandler(float DeltaTimeRef)
{
	NoInputHandler(DeltaTimeRef);

	TArray<FKey> TempArray;
	TempArray.Add(InputRef.Keys[0]);

	KeyResultData CurrentKeyResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, TempArray, PC);

	if (ensure(PC))
		UE_LOG(LogTemp, Warning, TEXT("Successful Player Controller."));

	switch (CurrentKeyResult)
	{
	case (KeyResultData::Success):
	{
		bool bProceed = false;
		if (InputRef.bHoldDownKeys)
		{
			if (USQTEUtilityFunctionLibrary::GetHeldDownKeys(QTEInputComp->ActiveKeys, PC, 1.0f))
				bProceed = true;
		}
		else if (PC->GetInputKeyTimeDown(InputRef.Keys[0]) < 1.1f)
			bProceed = true;

		if (bProceed)
		{
			FMovieSceneSequencePlaybackParams Params;
			Params.Time = InputRef.SuccessDistance + LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds();
			Params.UpdateMethod = EUpdatePositionMethod::Play;
			Params.PositionType = EMovieScenePositionType::Time;

			LevelSequencerToPlayRef->SequencePlayer.Get()->PlayTo(Params, FMovieSceneSequencePlayToParams());
			break;
		}
	}

	case KeyResultData::Incomplete:
	{
		UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::KeyPressHandler... Current status is Incomplete"));
		break;
	}

	case KeyResultData::Fail:
	{
		FailLogic(DeltaTimeRef);
		break;
	}
	}
}

void USQTEWidget::MultiKeyHandler(float DeltaTimeRef)
{
	NoInputHandler(DeltaTimeRef);

	if (!QTEInputComp->ActiveKeys.IsEmpty())
	{
		KeyResultData CurrentKeyResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

		switch (CurrentKeyResult)
		{
		case KeyResultData::Success:
		{
			bool bProceed = false;
			bool bOutput = false;
			if (InputRef.bHoldDownKeys)
			{
				bOutput = USQTEUtilityFunctionLibrary::GetHeldDownKeys(QTEInputComp->ActiveKeys, PC, 1.0f);
				if (bOutput)
				{
					QTE_Container_Widget->HighlightKeysHoldDown(true);
					bProceed = true;
				}
			}
			else
			{
				bOutput = USQTEUtilityFunctionLibrary::GetPressedKeys(CurrentKeys, PC);
				bProceed = bOutput;
			}

			if (bProceed)
			{
				FMovieSceneSequencePlaybackParams PlayBackParams;
				PlayBackParams.PositionType = EMovieScenePositionType::Time;
				PlayBackParams.Time = InputRef.SuccessDistance + LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds();
				PlayBackParams.UpdateMethod = EUpdatePositionMethod::Play;

				LevelSequencerToPlayRef->SequencePlayer.Get()->PlayTo(PlayBackParams, FMovieSceneSequencePlayToParams());

			}
			break;
		}

		case KeyResultData::Incomplete:
		{
			UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::MultiKeyHandler key check in progress"));
			break;
		}

		case KeyResultData::Fail:
		{
			QTE_Container_Widget->HighlightKeysHoldDown(false);
			FailLogic(DeltaTimeRef);
			break;
		}

		}
	}
	else
		QTE_Container_Widget->HighlightKeysHoldDown(false);
}

void USQTEWidget::SequentialKeyHandler(float DeltaTimeRef)
{
	SlowDownCheck();

	if (bHasPrecision)
	{
		if (QTE_Container_Widget->QTE_WidgetKeyArray[0]->bCanPressInput)
		{
			if (TimeLimit < CurrentTime)
				TerminateQTE();
			else
			{
				PrecisionTimeRemaining = TimeLimit - CurrentTime;
				if (!QTEInputComp->ActiveKeys.IsEmpty())
				{
					KeyResultData CurrentStatus = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

					switch (CurrentStatus)
					{
					case (KeyResultData::Success):
					{
						if (USQTEUtilityFunctionLibrary::GetPressedKeys(QTEInputComp->ActiveKeys, PC))
						{
							if (CurrentKeyIndex < (SequenceSize - 1))
							{
								SetUpNextPrecisionSequence();
							}
							else
							{
								Result = KeyResultData::Success;
								LevelSequencerToPlayRef->SequencePlayer.Get()->SetPlayRate(1.0f);
								bReinitialize = true;
								QTE_Container_Widget->ClearSetUp();
								QTE_Container_Widget->QTE_WidgetKeyArray.Empty();
							}
						}

						break;
					}

					case (KeyResultData::Incomplete):
					{
						UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::SequentialKeyHandler current key press in progress."));
					}

					case (KeyResultData::Fail):
					{
						TerminateQTE();
						break;
					}
					}
				}
			}
		}
		else
		{
			if (!QTEInputComp->ActiveKeys.IsEmpty())
				TerminateQTE();
		}
	}
	else
	{
		if (CurrentTime < TimeLimit)
		{
			if (CurrentKeyIndex < SequenceSize)
			{
				if (!QTEInputComp->ActiveKeys.IsEmpty())
				{
					TArray<FKey> TargetKeys;
					TargetKeys.Add(InputRef.KeyToTimeBinder[SequenceMainCounter].Key[CurrentKeyIndex]);

					KeyResultData CurrentResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, TargetKeys, PC);

					switch (CurrentResult)
					{
					case (KeyResultData::Success):
					{
						bool bProceed = false;
						if (InputRef.KeyToTimeBinder[SequenceMainCounter].bHoldKeysDown)
						{
							float HoldTime = InputRef.KeyToTimeBinder[SequenceMainCounter].HoldDownTime;
							if (USQTEUtilityFunctionLibrary::GetHeldDownKeys(QTEInputComp->ActiveKeys, PC, HoldTime))
								bProceed = true;
						}
						else
						{
							if (USQTEUtilityFunctionLibrary::GetPressedKeys(QTEInputComp->ActiveKeys, PC))
								bProceed = true;
						}

						if (bProceed)
							SuccessfulTimePress();
					}

					case (KeyResultData::Incomplete):
					{
						UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::SequentialKeyHandler Current status:: incomplete"));
						break;
					}

					case (KeyResultData::Fail):
					{
						FailLogic(DeltaTimeRef);
						break;
					}
					}
				}
			}
			else
			{
				Result = KeyResultData::Success;
				LevelSequencerToPlayRef->SequencePlayer.Get()->SetPlayRate(1.0f);
				QTE_Container_Widget->ClearSetUp();
			}
		}
		else
			TerminateQTE();
	}
}

void USQTEWidget::SubSequenceHandler(float DeltaTimeRef)
{
	SlowDownCheck();

	if (CurrentTime <= TimeLimit)
	{
		/*@FIXME this doesn't look right*/
		CurrentTime += DeltaTimeRef;

		if (!CurrentKeys.IsEmpty())
		{
			if (!QTEInputComp->ActiveKeys.IsEmpty())
			{
				KeyResultData CurrentResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

				switch (CurrentResult)
				{
				case (KeyResultData::Success):
				{
					bool bProceed = false;
					if (HoldTimeRef > 0.0f)
					{
						QTE_Container_Widget->HighlightKeysHoldDown(true);
						if (USQTEUtilityFunctionLibrary::GetHeldDownKeys(QTEInputComp->ActiveKeys, PC, HoldTimeRef))
						{
							bProceed = true;
						}
					}
					else
					{
						if (USQTEUtilityFunctionLibrary::GetPressedKeys(CurrentKeys, PC))
							bProceed = true;
					}

					if (bProceed)
					{
						if (USQTEUtilityFunctionLibrary::IsLastTimedSubSeq(CurrentKeyIndex, InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq))
						{
							Result = KeyResultData::Success;
							LevelSequencerToPlayRef->SequencePlayer.Get()->SetPlayRate(PlayRate);
							QTE_Container_Widget->ClearSetUp();
						}
						else
						{
							CurrentKeyIndex++;
							SetUpNextKeySequence();
						}
					}
					break;
				}

				case (KeyResultData::Incomplete):
				{
					UE_LOG(LogTemp, Warning, TEXT("Incomplete status in progress."));
					break;
				}

				case (KeyResultData::Fail):
				{
					QTE_Container_Widget->HighlightKeysHoldDown(false);
					FailLogic(DeltaTimeRef);
					break;
				}
				}
			}
			else
				QTE_Container_Widget->HighlightKeysHoldDown(false);
		}
	}
	else
		TerminateQTE();
}

void USQTEWidget::NoInputHandler(float DeltaTimeRef)
{
	if (ensure(QTEInputComp))
	{
		if (QTEInputComp->ActiveKeys.IsEmpty())
		{
			if (InputRef.bCanRegress && InputRef.NoInputTimeDelay != 0.0f)
			{
				NoInputTimeDelayCounter += DeltaTimeRef;

				if (NoInputTimeDelayCounter >= InputRef.NoInputTimeDelay)
				{
					if (!LevelSequencerToPlayRef->SequencePlayer.Get()->IsReversed())
					{
						if (UKismetMathLibrary::NearlyEqual_FloatFloat(LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds(), 0.0f, 0.0000001))
							TerminateQTE();
						else
							LevelSequencerToPlayRef->SequencePlayer.Get()->PlayReverse();
					}
					else
					{
						LevelSequencerToPlayRef->SequencePlayer.Get()->StopAtCurrentTime();
						LevelSequencerToPlayRef->SequencePlayer.Get()->PlayReverse();
					}
				}
			}
		}
		else
			NoInputTimeDelayCounter = 0.0f;

	}
}

void USQTEWidget::TerminateQTE()
{
	bReinitialize = true;

	if (QTEStarterComp)
		Result = KeyResultData::Fail;
	else
	{
		USQTEStarterComponent* OwnerStartComp = GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>();

		if (ensure(OwnerStartComp))
		{
			if (InputRef.bTimed)
				Result = KeyResultData::Fail;
			else
				OwnerStartComp->FailNormalKeyPress();
		}
	}
}

void USQTEWidget::FailLogic(float DeltaTimeRef)
{
	if (bInstantFailureRef)
		TerminateQTE();
	else
	{
		if (bActivateGracePeriod)
		{
			ErrorDelay += DeltaTimeRef;

			if (ErrorDelay >= GraceWindow)
			{
				bActivateGracePeriod = false;
				ErrorDelay = 0.0f;
			}
		}
		else if (InputRef.bCanRegress)
		{
			if (InputRef.AttemptsToRegress > 0)
			{
				if (AttemptsToRegressCounter < InputRef.AttemptsToRegress)
				{
					bActivateGracePeriod = true;
					AttemptsToRegressCounter++;

					if (InputRef.MaxAttemptsToFail > 0)
					{
						if (MaxAttemptsToFailCounter < InputRef.MaxAttemptsToFail)
							MaxAttemptsToFailCounter++;
						else
							TerminateQTE();
					}
				}
				else
				{
					if (InputRef.MaxAttemptsToFail > 0)
					{
						MaxAttemptsToFailCounter++;
						if (MaxAttemptsToFailCounter > InputRef.MaxAttemptsToFail)
							TerminateQTE();
						else
						{
							bActivateGracePeriod = true;
							FMovieSceneSequencePlaybackParams PlayBackParams;
							PlayBackParams.PositionType = EMovieScenePositionType::Time;
							PlayBackParams.UpdateMethod = EUpdatePositionMethod::Play;
							PlayBackParams.Time = LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds() - FMath::Abs(InputRef.RegressDistance);

							LevelSequencerToPlayRef->SequencePlayer.Get()->PlayTo(PlayBackParams, FMovieSceneSequencePlayToParams());
							AttemptsToRegressCounter = 0;
						}
					}
					else
					{
						bActivateGracePeriod = true;
						FMovieSceneSequencePlaybackParams PlayBackParams;
						PlayBackParams.PositionType = EMovieScenePositionType::Time;
						PlayBackParams.UpdateMethod = EUpdatePositionMethod::Play;
						PlayBackParams.Time = LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds() - FMath::Abs(InputRef.RegressDistance);

						LevelSequencerToPlayRef->SequencePlayer.Get()->PlayTo(PlayBackParams, FMovieSceneSequencePlayToParams());
						AttemptsToRegressCounter = 0;
					}
				}
			}
			else
			{
				if (!MaxAttemptsToFailFunction())
				{
					FMovieSceneSequencePlaybackParams PlayBackParams;
					PlayBackParams.PositionType = EMovieScenePositionType::Time;
					PlayBackParams.UpdateMethod = EUpdatePositionMethod::Play;

					float Time = LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds() - FMath::Abs(InputRef.RegressDistance);
					PlayBackParams.Time = Time;

					LevelSequencerToPlayRef->SequencePlayer.Get()->PlayTo(PlayBackParams, FMovieSceneSequencePlayToParams());


					if (!bActivateGracePeriod)
						bActivateGracePeriod = true;
				}
			}
		}
		else
		{
			MaxAttemptsToFailFunction();
		}
	}
}

bool USQTEWidget::MaxAttemptsToFailFunction()
{
	bool bTerminating = true;

	if (InputRef.MaxAttemptsToFail > 0)
	{
		if (MaxAttemptsToFailCounter < (InputRef.MaxAttemptsToFail - 1))
		{
			bActivateGracePeriod = true;
			MaxAttemptsToFailCounter++;
			bTerminating = false;
		}
		else
			TerminateQTE();
	}
	else
		bTerminating = false;

	return bTerminating;
}

void USQTEWidget::SlowDownCheck()
{
	if (LevelSequencerToPlayRef->SequencePlayer.Get()->IsPlaying())
	{
		float CurrentSequenceTime;
		if (InputRef.KeyToTimeBinder.IsValidIndex(SequenceMainCounter + 1))
		{
			CurrentSequenceTime = LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds();

			if (UKismetMathLibrary::NearlyEqual_FloatFloat(InputRef.KeyToTimeBinder[SequenceMainCounter + 1].StartTime, CurrentSequenceTime, 0.5))
				LevelSequencerToPlayRef->SequencePlayer.Get()->Pause();
		}
		else
		{
			CurrentSequenceTime = LevelSequencerToPlayRef->SequencePlayer.Get()->GetCurrentTime().AsSeconds();
			float CurrentSequenceEndTime = LevelSequencerToPlayRef->SequencePlayer.Get()->GetEndTime().AsSeconds();

			if (UKismetMathLibrary::NearlyEqual_FloatFloat(CurrentSequenceTime, CurrentSequenceEndTime, 0.3f))
				LevelSequencerToPlayRef->SequencePlayer.Get()->Pause();
		}
	}
}

void USQTEWidget::SuccessfulTimePress()
{
	bReinitialize = true;
	QTE_Container_Widget->RemoveChild(CurrentKeyIndex);

	CurrentKeyIndex++;

	TArray<int32> Indices;
	Indices.Add(CurrentKeyIndex);

	QTE_Container_Widget->HighlightActiveKeys(Indices);
	CurrentTime = 0.0f;

	if (SequenceSize > 4)
	{
		if (InputRef.KeyToTimeBinder[SequenceMainCounter].Key.IsValidIndex(SequenceNewKeyCounter))
		{
			QTE_Container_Widget->AddNewKey(InputRef.KeyToTimeBinder[SequenceMainCounter].Key[SequenceNewKeyCounter]);
			SequenceNewKeyCounter++;
		}
	}

	FTimerHandle BasicTimerHandle;
	FTimerDelegate BasicDelegate;
	BasicDelegate.BindUObject(this, &USQTEWidget::NormalDelay);
	GetOwningPlayerPawn()->GetWorld()->GetTimerManager().SetTimer(BasicTimerHandle, BasicDelegate, 0.5f, false);
}

void USQTEWidget::NormalDelay()
{
	bReinitialize = false;
}

void USQTEWidget::SetUpNextPrecisionSequence()
{
	bReinitialize = true;

	QTE_Container_Widget->StopAllAnimations();

	for (USQTE_KeyWidget* KeyWidgets : QTE_Container_Widget->QTE_WidgetKeyArray)
		KeyWidgets->RemoveFromParent();

	QTE_Container_Widget->QTE_WidgetKeyArray.Empty();

	CurrentKeys.Empty();

	QTE_Container_Widget->ClearSetUp();

	CurrentKeyIndex++;

	FTimerHandle NextPrecisionHandle;
	FTimerDelegate NextPrecisonDelegate;
	NextPrecisonDelegate.BindUObject(this, &USQTEWidget::SetUpNextPrecisionSequenceRemaining);
	GetOwningPlayerPawn()->GetWorld()->GetTimerManager().SetTimer(NextPrecisionHandle, NextPrecisonDelegate, 1.0f, false);
}

void USQTEWidget::SetUpNextPrecisionSequenceRemaining()
{
	QTE_Container_Widget->SetUpKeys(InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys);

	TimeLimit = InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].TimeLength;

	for (int i = 0; i < InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys.Num(); i++)
	{
		CurrentKeys.AddUnique(InputRef.KeyToTimeBinder[SequenceMainCounter].PreciseKeys[CurrentKeyIndex].Keys[i]);
		QTE_Container_Widget->PlayCountDownAnimation(i, TimeLimit);
	}

	QTE_Container_Widget->EnableOuterBackground();
	CurrentTime = 0.0f;
	bReinitialize = false;
}

void USQTEWidget::SetUpNextKeySequence()
{
	bReinitialize = true;

	CurrentKeys.Empty();

	QTE_Container_Widget->ClearSetUp();

	if (ensure(InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap.IsValidIndex(CurrentKeyIndex)))
	{
		for (FKey KeyRef : InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[CurrentKeyIndex].Keys)
		{
			if (KeyRef.IsValid())
				CurrentKeys.AddUnique(KeyRef);
		}
	}

	if (InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[CurrentKeyIndex].bHoldKey)
		HoldTimeRef = InputRef.KeyToTimeBinder[SequenceMainCounter].SubSeq.KeyMap[CurrentKeyIndex].HoldTime;
	else
		HoldTimeRef = 0.0f;

	if (ensure(!CurrentKeys.IsEmpty()))
		QTE_Container_Widget->SetUpKeys(CurrentKeys);

	bReinitialize = false;
}

void USQTEWidget::ConditionalSubSequenceContinue()
{
	bReinitialize = true;

	if (LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[CurrentIndex].bHoldKey)
		HoldTimeRef = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[CurrentIndex].HoldTime;
	else
		HoldTimeRef = 0.0f;

	QTE_Container_Widget->ClearSetUp();
	QTE_Container_Widget->RemoveAllChildrenFromViewPort();
	CurrentKeys.Empty();

	FTimerHandle ConditionalSubSequenceContinueHandler;
	FTimerDelegate ConditionalSubSequenceContinueDelegate;

	ConditionalSubSequenceContinueDelegate.BindUObject(this, &USQTEWidget::ConditionalSubSequenceContinueRemaining);

	GetOwningPlayer()->GetWorld()->GetTimerManager().SetTimer(ConditionalSubSequenceContinueHandler, ConditionalSubSequenceContinueDelegate, 1.0f, false);
}

void USQTEWidget::ConditionalSubSequenceContinueRemaining()
{
	CurrentKeys = LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq.KeyMap[CurrentIndex].Keys;

	if (ensure(!CurrentKeys.IsEmpty()))
		QTE_Container_Widget->SetUpKeys(CurrentKeys);

	bReinitialize = false;
	QTE_Container_Widget->PlayNormalKeyAnimations();
}

void USQTEWidget::SetUpLevelSequencerRef()
{
	if (ensure(GetOwningPlayerPawn()))
	{
		if (ensure(GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>()))
		{
			LevelSequencerToPlayRef = GetOwningPlayerPawn()->FindComponentByClass<USQTEStarterComponent>()->LevelSequenceToPlay;
			bReinitialize = false;
			CurrentTime = 0.0f;
			bComplete = true;
		}
	}

}

void USQTEWidget::DelayInputHelper(float timeRate)
{
	QTE_Container_Widget->ToogleKeyVisibility(false);
	bReinitialize = true;

	if (ensure(timeRate > 0.0f))
	{
		FTimerHandle DelayInputHelperHandle;
		FTimerDelegate DelayInputHelperDelegate;

		DelayInputHelperDelegate.BindUObject(this, &USQTEWidget::DelayInputHelperRemaining);
		GetOwningPlayerPawn()->GetWorld()->GetTimerManager().SetTimer(DelayInputHelperHandle, DelayInputHelperDelegate, timeRate, false);
	}
}

void USQTEWidget::DelayInputHelperRemaining()
{
	bReinitialize = false;
	QTE_Container_Widget->ToogleKeyVisibility(true);
}

void USQTEWidget::SetUpNextConditionalPrecision(bool SecondHalf)
{
	if (!SecondHalf)
	{
		bReinitialize = true;
		QTE_Container_Widget->StopAllAnimations();
		QTE_Container_Widget->ClearSetUp();
		QTE_Container_Widget->RemoveAllChildrenFromViewPort();

		CurrentKeyIndex++;
		if (LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys.IsValidIndex(CurrentKeyIndex))
		{
			CurrentKeys.Empty();

			FTimerHandle SetUpNextConditionalPrecisionHandle;
			FTimerDelegate SetUpNextConditionalPrecisionDelegate;

			SetUpNextConditionalPrecisionDelegate.BindUObject(this, &USQTEWidget::SetUpNextConditionalPrecision, true);
			GetOwningPlayerPawn()->GetWorld()->GetTimerManager().SetTimer(SetUpNextConditionalPrecisionHandle, SetUpNextConditionalPrecisionDelegate, 1.0f, false);
		}
		else
		{
			ConditionalSwitch();
			return;
		}
	}
	else
	{
		QTE_Container_Widget->SetUpKeys(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys);

		TimeLimit = LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].TimeLength;
		for (int32 i = 0; i < LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys.Num(); i++)
		{
			CurrentKeys.AddUnique(LoopingQTERef.inputData.Data[CurrentDataIndex].PreciseKeys[CurrentKeyIndex].Keys[i]);
			QTE_Container_Widget->PlayCountDownAnimation(i, TimeLimit);
		}

		QTE_Container_Widget->EnableOuterBackground();
		CurrentTime = 0.0f;
		bReinitialize = false;
	}
}

void USQTEWidget::ConditionalPrecisionInput(float DeltaTimeRef)
{
	CurrentTime += DeltaTimeRef;

	if (QTE_Container_Widget->QTE_WidgetKeyArray[0]->bCanPressInput)
	{
		if (TimeLimit < CurrentTime)
		{
			ConditionalFailInput();

			if (Result == KeyResultData::Fail)
			{
				if (LoopingQTERef.bPlayHelperSequences && (FailThresholdDelta == 0))
				{
					if (LoopingQTERef.FailureLimit == 0)
					{
						CurrentTime = 0.0f;
						DelayInputHelper(1.0f);
					}

					return;
				}

				if (CurrentKeyIndex == (SequenceSize - 1))
					ConditionalSwitch();
				else
					SetUpNextConditionalPrecision(false);

				return;
			}
		}
		else
		{
			KeyResultData CurrentResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

			switch (CurrentResult)
			{
			case (KeyResultData::Success):
			{
				if (USQTEUtilityFunctionLibrary::GetPressedKeys(QTEInputComp->ActiveKeys, PC))
				{
					if (CurrentKeyIndex == (SequenceSize - 1))
					{
						bool bCompleteRef;
						bool bSpawnNewSetUpRef;
						ConditionalSuccesInput(bCompleteRef, bSpawnNewSetUpRef);

						if (!bCompleteRef && !bSpawnNewSetUpRef)
						{
							CurrentKeyIndex = -1;
							SetUpNextConditionalPrecision(false);
						}
					}
					else
						SetUpNextConditionalPrecision(false);

					return;
				}

				break;
			}

			case (KeyResultData::Incomplete):
			{
				UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::ConditionalPrecisionInput ... status incomplete"));
				break;
			}

			case (KeyResultData::Fail):
			{
				ConditionalFailInput();

				if (Result == KeyResultData::Fail)
				{
					if (LoopingQTERef.bPlayHelperSequences)
					{
						if (FailThresholdDelta == 0)
							return;
					}

					if (CurrentKeyIndex == (SequenceSize - 1))
						ConditionalSwitch();
					else
						SetUpNextConditionalPrecision(false);
				}

				break;
			}
			}
		}
	}
	else
	{
		if (!QTEInputComp->ActiveKeys.IsEmpty())
		{
			ConditionalFailInput();
			if (Result == KeyResultData::Fail)
			{
				if (LoopingQTERef.bPlayHelperSequences)
				{
					if (FailThresholdDelta == 0)
						return;
				}

				if (CurrentKeyIndex == (SequenceSize - 1))
					ConditionalSwitch();
				else
					SetUpNextConditionalPrecision(false);
			}
		}
	}
}

void USQTEWidget::ConditionalFailInput()
{
	bReinitialize = true;

	if (bInstantFailureRef)
		TerminateQTE();
	else if (CurrentFailCounter < LoopingQTERef.FailureLimit)
	{
		CurrentFailCounter += LoopingQTERef.FailRatio;

		if (CurrentFailCounter >= LoopingQTERef.FailureLimit)
		{
			TerminateQTE();
			return;
		}

		ConditionalFailPreciseRestarter();
		if (!LoopingQTERef.bPlayHelperSequences)
		{
			DelayInputHelper(1.0f);
			return;
		}

		FailThresholdDelta += LoopingQTERef.FailRatio;

		if (FailThresholdDelta > LoopingQTERef.FailThreshold)
			FailThresholdDelta = 0;
		else
		{
			DelayInputHelper(1.0f);
			return;
		}


	}
	else if (LoopingQTERef.FailureLimit == 0)
	{
		if (!LoopingQTERef.bPlayHelperSequences)
		{
			ConditionalFailPreciseRestarter();
			DelayInputHelper(1.0f);
			return;
		}
	}
	else
	{
		TerminateQTE();
		return;
	}

	if (ensure(QTEStarterComp))
		QTEStarterComp->InputSequence(false, false);
}

void USQTEWidget::ConditionalSuccesInput(bool& bCompletedQTE, bool& bSpawningNewSetUp)
{
	CurrentSuccessCounter += LoopingQTERef.SuccessRatio;
	bool bSpawnKeysOnFinish = true;

	if (CurrentSuccessCounter > LoopingQTERef.SuccessLimit)
	{
		CurrentDataIndex = LoopingQTERef.inputData.Data.Num() * 2;
		Result = KeyResultData::Success;
		bComplete = true;
		bCompletedQTE = true;
		bSpawnKeysOnFinish = false;
		bSpawningNewSetUp = bSpawnKeysOnFinish;
		return;
	}
	else
	{
		if (NextThreshold != -1)
		{
			if (CurrentSuccessCounter >= NextThreshold)
			{
				QTE_Container_Widget->ClearSetUp();
				QTE_Container_Widget->RemoveAllChildrenFromViewPort();
				CurrentDataIndex++;

				if (LoopingQTERef.inputData.Data.IsValidIndex(CurrentDataIndex + 1))
					NextThreshold = LoopingQTERef.inputData.Data[CurrentDataIndex + 1].Threshold;
				else
					NextThreshold = -1;

				if (!LoopingQTERef.inputData.Data.IsValidIndex(CurrentDataIndex))
				{
					Result = KeyResultData::Success;
					bReinitialize = true;
					bCompletedQTE = true;
					bSpawnKeysOnFinish = false;
					bSpawningNewSetUp = bSpawnKeysOnFinish;
					return;
				}
				else
				{
					switch (LoopingQTERef.inputData.Data[CurrentDataIndex].InputChoice)
					{
					case (QTEConditionalInput::KeysOnly):
					{
						InputPath = QTEInputPath::KeyPressOnly;
						break;
					}

					case (QTEConditionalInput::Precision):
					{
						InputPath = QTEInputPath::SequentialKeys;
						break;
					}

					case (QTEConditionalInput::SubSequence):
					{
						InputPath = QTEInputPath::MultiSequentialKeys;
						break;
					}
					}
				}
			}
			else
				bSpawnKeysOnFinish = false;
		}
		else
			bSpawnKeysOnFinish = false;

		if (LoopingQTERef.bPlayHelperSequences)
		{
			SuccessThresholdDelta += LoopingQTERef.SuccessRatio;

			if (SuccessThresholdDelta >= LoopingQTERef.SuccessThreshold)
			{
				SuccessThresholdDelta = 0;
				QTEStarterComp->InputSequence(true, bSpawnKeysOnFinish);
				bCompletedQTE = false;
				bSpawningNewSetUp = bSpawnKeysOnFinish;
				return;
			}
		}

		if (bSpawnKeysOnFinish)
		{
			bReinitialize = true;
			ConditionalSwitch();
			bCompletedQTE = false;
			bSpawningNewSetUp = true;
		}
		else
		{
			bCompletedQTE = false;
			bSpawningNewSetUp = false;
		}

		return;
	}
}

void USQTEWidget::ConditionalSubSequenceHandler(float DeltaTimeRef)
{
	CurrentTime += DeltaTimeRef;

	if (CurrentTime > TimeLimit)
	{
		ConditionalFailInput();
		CurrentTime = 0.0f;
	}
	else
	{
		if (!QTEInputComp->ActiveKeys.IsEmpty())
		{
			KeyResultData CurrentResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

			switch (CurrentResult)
			{
			case (KeyResultData::Success):
			{
				bool bProceed = false;
				if (HoldTimeRef > 0.0f)
				{
					QTE_Container_Widget->HighlightKeysHoldDown(true);

					if (USQTEUtilityFunctionLibrary::GetHeldDownKeys(CurrentKeys, PC, HoldTimeRef))
						bProceed = true;
				}
				else
				{
					if (USQTEUtilityFunctionLibrary::GetPressedKeys(CurrentKeys, PC))
						bProceed = true;
				}

				if (bProceed)
				{
					if (USQTEUtilityFunctionLibrary::IsLastTimedSubSeq(CurrentIndex, LoopingQTERef.inputData.Data[CurrentDataIndex].subSeq))
					{
						bool bCompletedQTERef;
						bool bSpawningNewKeysRef;
						ConditionalSuccesInput(bCompletedQTERef, bSpawningNewKeysRef);

						if (!bCompletedQTERef && !bSpawningNewKeysRef)
						{
							CurrentIndex = 0;
							CurrentTime = 0.0f;
						}
						else
							return;
					}
					else
						CurrentIndex++;

					ConditionalSubSequenceContinue();
				}
				break;
			}
			case (KeyResultData::Incomplete):
			{
				if (HoldTimeRef > 0.0f)
					QTE_Container_Widget->HighlightKeysHoldDown(false);

				UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::ConditionalSubSequenceHandler key status::Incomplete"));
				break;
			}

			case (KeyResultData::Fail):
			{
				if (HoldTimeRef > 0.0f)
					QTE_Container_Widget->HighlightKeysHoldDown(false);

				ConditionalFailInput();
				break;
			}
			}
		}
	}
}

void USQTEWidget::ConditionalKeyPressHandler()
{
	if (!QTEInputComp->ActiveKeys.IsEmpty())
	{
		KeyResultData CurrentResult = USQTEUtilityFunctionLibrary::CheckKeys(QTEInputComp->ActiveKeys, CurrentKeys, PC);

		switch (CurrentResult)
		{
		case (KeyResultData::Success):
		{
			bool bProceed = false;

			if (LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.bHoldKey)
			{
				QTE_Container_Widget->HighlightKeysHoldDown(true);
				if (USQTEUtilityFunctionLibrary::GetHeldDownKeys(LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.Keys, PC, LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.HoldTime))
					bProceed = true;
			}
			else
			{
				if (USQTEUtilityFunctionLibrary::GetPressedKeys(CurrentKeys, PC))
					bProceed = true;
			}

			if (bProceed)
			{
				bReinitialize = true;

				bool bCompletedRefTemp;
				bool bSpawningNewKeyRefTemp;
				ConditionalSuccesInput(bCompletedRefTemp, bSpawningNewKeyRefTemp);

				if (!bCompletedRefTemp && !bSpawningNewKeyRefTemp)
					DelayInputHelper(0.5f);
			}

			break;
		}

		case (KeyResultData::Incomplete):
		{
			UE_LOG(LogTemp, Warning, TEXT("USQTEWidget::ConditionalKeyPressHandler current key status is incomplete"));

			if (LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.bHoldKey)
				QTE_Container_Widget->HighlightKeysHoldDown(false);
			break;
		}

		case (KeyResultData::Fail):
		{
			if (LoopingQTERef.inputData.Data[CurrentDataIndex].Keys.bHoldKey)
				QTE_Container_Widget->HighlightKeysHoldDown(false);
			ConditionalFailInput();
			break;
		}
		}
	}
}

void USQTEWidget::ConditionalFailPreciseRestarter()
{
	if (InputPath == QTEInputPath::SequentialKeys)
	{
		QTE_Container_Widget->StopAllAnimations();
		QTE_Container_Widget->ClearSetUp();
		QTE_Container_Widget->RemoveAllChildrenFromViewPort();

		SetUpNextConditionalPrecision(true);
	}
}

