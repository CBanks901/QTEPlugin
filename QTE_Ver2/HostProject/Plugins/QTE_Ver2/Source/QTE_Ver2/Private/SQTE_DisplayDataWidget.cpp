// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTE_DisplayDataWidget.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"

void USQTE_DisplayDataWidget::AddInputStats(FInputData InputRef, float NoInputTimeCounter, int32 AttemptsToRegressCounter, int32 MaxAttemptsToFailCounter)
{
	if (bCreated)
	{
		PrintStats(InputRef, NoInputTimeCounter, AttemptsToRegressCounter, MaxAttemptsToFailCounter);
	}
	else
	{
		bCreated = true;

		int32 Counter = IndexCount >= 1 ? IndexCount : -1;

		switch (Counter)
		{
		case 1:
		{
			NoInputTimeDelayText->SetVisibility(ESlateVisibility::Hidden);

			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}

		case 2:
		{
			RegressDistanceText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}

		case 3:
		{
			AttemptsToRegressText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 4:
		{
			SuccessDistanceText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 5:
		{
			InstantFailureText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 6:
		{
			MaxAttemptToFailText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 7:
		{
			TimedStatusText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 8:
		{
			HoldDownKeysText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 9:
		{
			NoInputTimeDelayCounterText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}

		case 10:
		{
			AttemptsToRegressCounterText->SetVisibility(ESlateVisibility::Hidden);
			if (Counter != IndexCount)
				Counter++;
			else
				break;
		}
		case 11:
		{
			MaxAttemptToFailCounterText->SetVisibility(ESlateVisibility::Hidden);
			break;
		}
		case -1:
			RemoveFromParent();
			break;
		}
	}
}

void USQTE_DisplayDataWidget::PrintStats(FInputData InputRef, float NoInputTimeCounter, int32 AttemptsToRegressCounter, int32 MaxAttemptsToFailCounter)
{
	int32 Counter = IndexCount >= 1 ? IndexCount : -1;

	InternalSwitchHelper(InputRef.bCanRegress, InputRef.NoInputTimeDelay, InputRef.RegressDistance, InputRef.AttemptsToRegress,
		InputRef.SuccessDistance, InputRef.bInstantFailure, InputRef.MaxAttemptsToFail, InputRef.bTimed, InputRef.bHoldDownKeys,
		NoInputTimeCounter, AttemptsToRegressCounter, MaxAttemptsToFailCounter, Counter);
}

void USQTE_DisplayDataWidget::InternalSwitchHelper(bool bCanRegress, float NoInputTimeDelayRef, float RegressDistanceRef, int32 AttemptsToRegressRef, float SuccessDistanceRef, bool bInstantFailureRef, int32 MaxAttemptsToFailRef, bool bTimedRef, bool bHoldDownKeysRef, float NoInputTimeCounterRef, int32 AttemptsToRegressCounterRef, int32 MaxAttemptsToFailCounterRef, int32 Index)
{
	if (Index <= 12 && Index > 0)
	{
		switch (Index)
		{
		case 1:
		{
			RegressionSetter(bCanRegress);
			break;
		}

		case 2:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			break;
		}

		case 3:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			break;
		}

		case 4:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			break;
		}

		case 5:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			break;
		}

		case 6:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			break;
		}
		case 7:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			break;
		}

		case 8:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			TimedStatusSetter(bTimedRef);
			break;
		}

		case 9:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			TimedStatusSetter(bTimedRef);
			HoldDownKeysSetter(bHoldDownKeysRef);
			break;
		}

		case 10:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			TimedStatusSetter(bTimedRef);
			HoldDownKeysSetter(bHoldDownKeysRef);
			NoInputTimeDelayCounterSetter(NoInputTimeCounterRef);
			break;
		}
		case 11:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			TimedStatusSetter(bTimedRef);
			HoldDownKeysSetter(bHoldDownKeysRef);
			NoInputTimeDelayCounterSetter(NoInputTimeCounterRef);
			AttemptsToRegressCounterSetter(AttemptsToRegressCounterRef);

			break;
		}
		case 12:
		{
			RegressionSetter(bCanRegress);
			NoInputTimeDelaySetter(NoInputTimeDelayRef);
			RegressDistanceSetter(RegressDistanceRef);
			AttemptsToRegressSetter(AttemptsToRegressRef);
			SuccessDistanceSetter(SuccessDistanceRef);
			InstantFailureSetter(bInstantFailureRef);
			MaxAttemptsToFailSetter(MaxAttemptsToFailRef);
			TimedStatusSetter(bTimedRef);
			HoldDownKeysSetter(bHoldDownKeysRef);
			NoInputTimeDelayCounterSetter(NoInputTimeCounterRef);
			AttemptsToRegressCounterSetter(AttemptsToRegressCounterRef);
			MaxAttemptsToFailCounterSetter(MaxAttemptsToFailCounterRef);
			break;
		}
		}
	}
}

void USQTE_DisplayDataWidget::RegressionSetter(bool bCanRegress)
{
	FString Message = bCanRegress ? "Regression : True" : "Regression : False";
	RegressionText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::NoInputTimeDelaySetter(float NoInputTimeDelayRef)
{
	FString Message = "No Input Time Delay : ";
	Message.Append(FString::SanitizeFloat(NoInputTimeDelayRef, 0));

	NoInputTimeDelayText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::RegressDistanceSetter(float RegressDistanceRef)
{
	FString Message = "Regress Distance : ";
	Message.Append(FString::SanitizeFloat(RegressDistanceRef));

	RegressDistanceText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::AttemptsToRegressSetter(int32 AttemptsToRegressRef)
{
	FString Message = "Attempts To Regress : ";
	Message.Append(FString::FromInt(AttemptsToRegressRef));

	AttemptsToRegressText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::SuccessDistanceSetter(float SuccessDistanceRef)
{
	FString Message = "Success Distance : ";
	Message.Append(FString::SanitizeFloat(SuccessDistanceRef));

	SuccessDistanceText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::InstantFailureSetter(bool bInstantFailureRef)
{
	FString Message = bInstantFailureRef ? "Instant Failure Status : True" : "Instant Failure Status : False";

	InstantFailureText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::MaxAttemptsToFailSetter(int32 MaxAttemptsToFailRef)
{
	FString Message = "Max Attempts To Fail : ";
	Message.Append(FString::FromInt(MaxAttemptsToFailRef));

	MaxAttemptToFailText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::TimedStatusSetter(bool bTimedRef)
{
	FString Message = bTimedRef ? "TimedStatus : True" : "TimedStatus : False";

	TimedStatusText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::HoldDownKeysSetter(bool bHoldDownKeysRef)
{
	FString Message = bHoldDownKeysRef ? "Hold Down Keys: True" : "Hold Down Keys : False";

	HoldDownKeysText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::NoInputTimeDelayCounterSetter(float NoInputTimeCounterRef)
{
	FString Message = "No Input Time Delay Counter : ";
	Message.Append(FString::SanitizeFloat(NoInputTimeCounterRef));

	NoInputTimeDelayCounterText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::AttemptsToRegressCounterSetter(int32 AttemptsToRegressCounterRef)
{
	FString Message = "Attempts To Regress Counter : ";
	Message.Append(FString::FromInt(AttemptsToRegressCounterRef));

	AttemptsToRegressCounterText->SetText(FText::FromString(Message));
}

void USQTE_DisplayDataWidget::MaxAttemptsToFailCounterSetter(int32 MaxAttemptsToFailCounterRef)
{
	FString Message = FString("Max Attempts To Fail Counter:");
	Message.Append(FString::FromInt(MaxAttemptsToFailCounterRef));

	MaxAttemptToFailCounterText->SetText(FText::FromString(Message));
}