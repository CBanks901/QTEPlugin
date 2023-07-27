// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UQTEUtilities.h"
#include "SQTE_ConditionalDisplayData.generated.h"

/**
 *
 */

class UTextBlock;
class UVerticalBox;


UCLASS()
class QTE_VER2_API USQTE_ConditionalDisplayData : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "MainOverlay", meta = (BindWidget))
		UVerticalBox* Header_VerticalBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* DynamicSettingText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* InstantFailureText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* FailureLimitText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* SuccessLimitText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* CurrentFailureText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* CurrentSuccessText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* FailRatioText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* SuccessRatioText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* CurrentDataIndexText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* PlayHelperSequencesText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* SuccessThresholdText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "InputValues", meta = (BindWidget))
		UTextBlock* FailThresholdText;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "PreStart", meta = (UIMin = 1, UIMax = 12, ClampMin = 1, ClampMax = 12, ToolTip = "Change this value to visualize in real time how the data is filtered"))
		int32 indexCount = 12;

	UPROPERTY(BlueprintReadOnly, Category = "Start")
		bool bCreated;

public:

	UFUNCTION(BlueprintCallable, Category = "Stats")
		void AddInputStats(bool bIsDynamic, bool bInstantFailureRef, int32 CurrentFailCounter, int32 CurrentSuccessCounter, int32 CurrentDataIndex, FConditionalQTE ConditionalQTEDataRef);

	UFUNCTION()
		void PrintStats(bool bIsDynamic, bool bInstantFailureRef, int32 CurrentFailCounter, int32 CurrentSuccessCounter, int32 CurrentDataIndex, FConditionalQTE ConditionalQTEDataRef);

	UFUNCTION()
		void LocalizeStringData(UTextBlock* TextRef, FString KeyString, FString Message);

	UFUNCTION()
		void LocalizeIntegerData(UTextBlock* TextRef, FString KeyString, FString PreMessage, int32 Value);
};
