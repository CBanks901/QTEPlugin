// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UQTEUtilities.h"
#include "SQTE_DisplayDataWidget.generated.h"

/**
 *
 */

class UVerticalBox;
class UTextBlock;

UCLASS()
class QTE_VER2_API USQTE_DisplayDataWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WidgetHeader", meta = (BindWidget))
		UVerticalBox* Header_VerticalBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* RegressionText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* NoInputTimeDelayText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* RegressDistanceText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* AttemptsToRegressText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* SuccessDistanceText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* InstantFailureText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* MaxAttemptToFailText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* TimedStatusText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* HoldDownKeysText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* NoInputTimeDelayCounterText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* AttemptsToRegressCounterText;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Input Text", meta = (BindWidget))
		UTextBlock* MaxAttemptToFailCounterText;

	UPROPERTY(BlueprintReadOnly, Category = "Creation")
		bool bCreated;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Creation", meta = (ToolTip = "Controls the data that is displayed on screen", UIMin = 1, ClamMin = 1, UIMax = 12, ClampMax = 12))
		int32 IndexCount = 12;

public:

	UFUNCTION(BlueprintCallable, Category = "OutputStats")
		void AddInputStats(FInputData InputRef, float NoInputTimeCounter, int32 AttemptsToRegressCounter, int32 MaxAttemptsToFailCounter);

	UFUNCTION()
		void PrintStats(FInputData InputRef, float NoInputTimeCounter, int32 AttemptsToRegressCounter, int32 MaxAttemptsToFailCounter);

	void InternalSwitchHelper(bool bCanRegress, float NoInputTimeDelayRef, float RegressDistanceRef, int32 AttemptsToRegressRef, float SuccessDistanceRef, bool bInstantFailureRef, int32 MaxAttemptsToFailRef, bool bTimedRef, bool bHoldDownKeysRef, float NoInputTimeCounterRef, int32 AttemptsToRegressCounterRef, int32 MaxAttemptsToFailCounterRef, int32 Index);

	UFUNCTION()
		void RegressionSetter(bool bCanRegress);

	UFUNCTION()
		void NoInputTimeDelaySetter(float NoInputTimeDelayRef);

	UFUNCTION()
		void RegressDistanceSetter(float RegressDistanceRef);

	UFUNCTION()
		void AttemptsToRegressSetter(int32 AttemptsToRegressRef);

	UFUNCTION()
		void SuccessDistanceSetter(float SuccessDistanceRef);

	UFUNCTION()
		void InstantFailureSetter(bool bInstantFailureRef);

	UFUNCTION()
		void MaxAttemptsToFailSetter(int32 MaxAttemptsToFailRef);

	UFUNCTION()
		void TimedStatusSetter(bool bTimedRef);

	UFUNCTION()
		void HoldDownKeysSetter(bool bHoldDownKeysRef);

	UFUNCTION()
		void NoInputTimeDelayCounterSetter(float NoInputTimeCounterRef);

	UFUNCTION()
		void AttemptsToRegressCounterSetter(int32 AttemptsToRegressCounterRef);

	UFUNCTION()
		void MaxAttemptsToFailCounterSetter(int32 MaxAttemptsToFailCounterRef);
};
