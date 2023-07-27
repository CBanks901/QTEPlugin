// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTE_ConditionalDisplayData.h"
#include "Components/TextBlock.h"
#include "Components/VerticalBox.h"

#define LOCTEXT_NAMESPACE "ConditionalDisplayText"

void USQTE_ConditionalDisplayData::AddInputStats(bool bIsDynamic, bool bInstantFailureRef, int32 CurrentFailCounter, int32 CurrentSuccessCounter, int32 CurrentDataIndex, FConditionalQTE ConditionalQTEDataRef)
{
	if (bCreated)
		PrintStats(bIsDynamic, bInstantFailureRef, CurrentFailCounter, CurrentSuccessCounter, CurrentDataIndex, ConditionalQTEDataRef);
	else
	{
		bCreated = true;

		switch (indexCount)
		{
		case 0:
			this->RemoveFromParent();
			break;
		case 1:
			InstantFailureText->SetVisibility(ESlateVisibility::Hidden);
			FailureLimitText->SetVisibility(ESlateVisibility::Hidden);
			SuccessLimitText->SetVisibility(ESlateVisibility::Hidden);
			CurrentFailureText->SetVisibility(ESlateVisibility::Hidden);
			CurrentSuccessText->SetVisibility(ESlateVisibility::Hidden);
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 2:
			FailureLimitText->SetVisibility(ESlateVisibility::Hidden);
			SuccessLimitText->SetVisibility(ESlateVisibility::Hidden);
			CurrentFailureText->SetVisibility(ESlateVisibility::Hidden);
			CurrentSuccessText->SetVisibility(ESlateVisibility::Hidden);
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 3:
			SuccessLimitText->SetVisibility(ESlateVisibility::Hidden);
			CurrentFailureText->SetVisibility(ESlateVisibility::Hidden);
			CurrentSuccessText->SetVisibility(ESlateVisibility::Hidden);
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 4:
			CurrentFailureText->SetVisibility(ESlateVisibility::Hidden);
			CurrentSuccessText->SetVisibility(ESlateVisibility::Hidden);
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 5:
			CurrentSuccessText->SetVisibility(ESlateVisibility::Hidden);
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 6:
			FailRatioText->SetVisibility(ESlateVisibility::Hidden);
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 7:
			SuccessRatioText->SetVisibility(ESlateVisibility::Hidden);
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 8:
			CurrentDataIndexText->SetVisibility(ESlateVisibility::Hidden);
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 9:
			PlayHelperSequencesText->SetVisibility(ESlateVisibility::Hidden);
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 10:
			SuccessThresholdText->SetVisibility(ESlateVisibility::Hidden);
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		case 11:
			FailThresholdText->SetVisibility(ESlateVisibility::Hidden);
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("Input Range Exceeds Bounds."));
			break;
		}
	}
}

void USQTE_ConditionalDisplayData::PrintStats(bool bIsDynamic, bool bInstantFailureRef, int32 CurrentFailCounter, int32 CurrentSuccessCounter, int32 CurrentDataIndex, FConditionalQTE ConditionalQTEDataRef)
{
	int32 Counter = (indexCount >= 1) && (indexCount <= 12) ? indexCount : -1;

	FString DynamicMessage = bIsDynamic ? "Dynamic Sequence: True" : "Dynamic Sequence: False";
	FString InstantFailureMessage = bInstantFailureRef ? "Instant Failure Status: True" : "Instant Failure Status: False";
	FString PlayHelperSequencesMessage = ConditionalQTEDataRef.bPlayHelperSequences ? "PlayerHelper Sequences: True" : "PlayerHelperSequences: False";

	for (int32 i = 0; i < Counter; i++)
	{
		if (i == 0)
			LocalizeStringData(DynamicSettingText, "DynamicSettingText", DynamicMessage);
		else if (i == 1)
			LocalizeStringData(InstantFailureText, "InstantFailureText", InstantFailureMessage);
		else if (i == 2)
			LocalizeIntegerData(FailureLimitText, "FailureLimitText", "Failure Limit", ConditionalQTEDataRef.FailureLimit);
		else if (i == 3)
			LocalizeIntegerData(SuccessLimitText, "SuccessLimitText", "Success Limit", ConditionalQTEDataRef.SuccessLimit);
		else if (i == 4)
			LocalizeIntegerData(CurrentFailureText, "CurrentFailureText", "Current Failure", CurrentFailCounter);
		else if (i == 5)
			LocalizeIntegerData(CurrentSuccessText, "CurrentSuccessText", "Current Success", CurrentSuccessCounter);
		else if (i == 6)
			LocalizeIntegerData(FailRatioText, "FailRatioText", "Fail Ratio", ConditionalQTEDataRef.FailRatio);
		else if (i == 7)
			LocalizeIntegerData(SuccessRatioText, "SuccessRatioText", "Success Ratio", ConditionalQTEDataRef.SuccessRatio);
		else if (i == 8)
			LocalizeIntegerData(CurrentDataIndexText, "CurrentDataIndexText", "Current Data Index", CurrentDataIndex);
		else if (i == 9)
			LocalizeStringData(PlayHelperSequencesText, "PlayHelperSequencesText", PlayHelperSequencesMessage);
		else if (i == 10)
			LocalizeIntegerData(SuccessThresholdText, "SuccessThresholdText", "Success Threshold", ConditionalQTEDataRef.SuccessThreshold);
		else if (i == 11)
			LocalizeIntegerData(FailThresholdText, "FailThresholdText", "Fail Threshold", ConditionalQTEDataRef.FailThreshold);
	}
	
}

void USQTE_ConditionalDisplayData::LocalizeStringData(UTextBlock* TextRef, FString KeyString, FString Message)
{
	if (TextRef && !KeyString.IsEmpty() && !Message.IsEmpty())
	{
		FFormatNamedArguments Args;
		Args.Add(TEXT("Key"), FText::FromString(KeyString));
		Args.Add(TEXT("Value"), FText::FromString(Message));

		FText FormattedText = FText::Format(LOCTEXT("{Key}", "{Value}"), Args);
		TextRef->SetText(FormattedText);
	}
}

void USQTE_ConditionalDisplayData::LocalizeIntegerData(UTextBlock* TextRef, FString KeyString, FString PreMessage, int32 Value)
{
	if (TextRef && !KeyString.IsEmpty() && Value >= 0)
	{
		FString MessageString = FString::FromInt(Value);
		FFormatNamedArguments Args;
		Args.Add(TEXT("Key"), FText::FromString(KeyString));
		Args.Add(TEXT("Value"), FText::FromString(MessageString));

		if (!PreMessage.IsEmpty())
			Args.Add(TEXT("PreValue"), FText::FromString(PreMessage));

		FText FormattedText;
		if (!PreMessage.IsEmpty())
			FormattedText = FText::Format(LOCTEXT("{Key}", "{PreValue} : {Value}"), Args);
		else
			FormattedText = FText::Format(LOCTEXT("{Key}", "{Value}"), Args);

		TextRef->SetText(FormattedText);
	}

}

#undef LOCTEXT_NAMESPACE