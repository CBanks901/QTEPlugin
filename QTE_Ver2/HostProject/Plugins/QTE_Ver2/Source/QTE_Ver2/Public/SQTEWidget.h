// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "UQTEUtilities.h"
#include "SQTEWidget.generated.h"

/**
 *
 */

class USQTEOwnerInputComponent;
class USQTEStarterComponent;
class USQTE_ContainerWidget;
class UCanvasPanel;
class USQTE_DisplayDataWidget;
class USQTE_ConditionalDisplayData;


UCLASS(Abstract)
class QTE_VER2_API USQTEWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WidgetLayout", meta = (BindWidget))
		UCanvasPanel* Header_Canvas;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WidgetLayout", meta = (BindWidget))
		USQTE_ContainerWidget* QTE_Container_Widget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WidgetLayout", meta = (BindWidget))
		USQTE_DisplayDataWidget* QTE_OptionalDisplay_Widget;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "WidgetLayout", meta = (BindWidget))
		USQTE_ConditionalDisplayData* QTE_ConditionalOptionalDisplay_Widget;

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "PC")
		APlayerController* PC;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "OwnerInput")
		USQTEOwnerInputComponent* QTEInputComp;


	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Sequence Play Rate", meta = (UIMin = 0.1f, ClampMin = 0.1f))
		float PlayRate = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Reinitialize", meta = (ToolTip = "Used to pause Tick temporarily. Should be changed back to false when ready to enable tick."))
		bool bReinitialize = true;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Enable Helper widget UI", meta = (ToolTip = "This can only be changed via console commands. Type 'r.bShouldDisplayHelperWidget = true'"))
	bool bShouldDisplayHelperWidget = false;

	UPROPERTY(BlueprintReadOnly, Category = "Time")
		float CurrentTime = 0.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Exposed Variables | Sequence QTE Data", meta = (ExposeOnSpawn))
		float TimeLimit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Exposed Variables | Sequence QTE Data", meta = (ExposeOnSpawn))
		int32 SequenceMainCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Exposed Variables | QTE Start Component", meta = (ExposeOnSpawn))
		USQTEStarterComponent* QTEStarterComp;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Exposed Variables | Normal QTE Data", meta = (ExposeOnSpawn))
		FInputData InputRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Exposed Variables | Looping QTE Data", meta = (ExposeOnSpawn))
		FConditionalQTE LoopingQTERef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Normal QTE Data")
		float NoInputTimeDelayCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Normal QTE Data")
		int32 AttemptsToRegressCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Normal QTE Data")
		int32 MaxAttemptsToFailCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data")
		int32 CurrentFailCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data")
		int32 CurrentSuccessCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data", meta = (ToolTip = "Total number of input sections within a looping qte"))
		int32 DataLength;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data", meta = (ToolTip = "The threshold of the next input section within a list"))
		int32 NextThreshold;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data")
		int32 SuccessThresholdDelta;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Looping QTE Data")
		int32 FailThresholdDelta;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data")
		int32 CurrentDataIndex;

	UPROPERTY(BlueprintReadOnly, Category = "Widget Status")
		KeyResultData Result;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Widget Status")
		bool bComplete;

	UPROPERTY()
		bool bIsDynamicRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data")
		bool bInstantFailureRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Path")
		QTEInputPath InputPath;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Level Sequence Actor")
		ALevelSequenceActor* LevelSequencerToPlayRef;

	UPROPERTY()
		bool bActivateGracePeriod;

	UPROPERTY()
		float ErrorDelay;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "QTE Input | Grace", meta = (ToolTip = "The longer this is the more time you have as a buffer until input is recognized again", UIMin = 0.25f, ClampMin = 0.25f))
		float GraceWindow = 0.25f;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Input | Current Key Presses")
		TArray<FKey> CurrentKeys;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Precision")
		bool bHasPrecision;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Sequential")
		int32 CurrentKeyIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Sequential")
		int32 SequenceSize;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Sequential", meta = (ToolTip = "Once keys go beyond this number, this acts as a counter that adds new keys slowly"))
		int32 SequenceNewKeyCounter = 5;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Sequntial")
		float PrecisionTimeRemaining;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Subsequence")
		float HoldTimeRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Subsequence")
		int32 CurrentIndex;



public:

	virtual void NativeConstruct() override;

	virtual void NativeTick(const FGeometry& MyGeometry, float InDeltaTime) override;

public:

	UFUNCTION()
		void DetermineBranchingPath();

	UFUNCTION()
		void ConditionalSwitch();

	UFUNCTION()
		void ConditionalSwitchRemaining();

	UFUNCTION()
		void KeyPressHandler(float DeltaTimeRef);

	UFUNCTION()
		void MultiKeyHandler(float DeltaTimeRef);

	UFUNCTION()
		void SequentialKeyHandler(float DeltaTimeRef);

	UFUNCTION()
		void SubSequenceHandler(float DeltaTimeRef);

	UFUNCTION()
		void NoInputHandler(float DeltaTimeRef);

	UFUNCTION(BlueprintCallable, Category = "QTE Termination")
		void TerminateQTE();

	UFUNCTION()
		void FailLogic(float DeltaTimeRef);

	UFUNCTION()
		bool MaxAttemptsToFailFunction();

	UFUNCTION()
		void SlowDownCheck();

	UFUNCTION()
		void SuccessfulTimePress();

	UFUNCTION()
		void NormalDelay();

	UFUNCTION()
		void SetUpNextPrecisionSequence();

	UFUNCTION()
		void SetUpNextPrecisionSequenceRemaining();

	UFUNCTION()
		void SetUpNextKeySequence();

	UFUNCTION()
		void ConditionalSubSequenceContinue();

	UFUNCTION()
		void ConditionalSubSequenceContinueRemaining();

	UFUNCTION()
		void SetUpLevelSequencerRef();

	UFUNCTION()
		void DelayInputHelper(float timeRate);

	UFUNCTION()
		void DelayInputHelperRemaining();

	UFUNCTION()
		void SetUpNextConditionalPrecision(bool SecondHalf);

	UFUNCTION()
		void ConditionalPrecisionInput(float DeltaTimeRef);

	UFUNCTION()
		void ConditionalFailInput();

	UFUNCTION()
		void ConditionalSuccesInput(bool& bCompletedQTE, bool& bSpawningNewSetUp);

	UFUNCTION()
		void ConditionalSubSequenceHandler(float DeltaTimeRef);

	UFUNCTION()
		void ConditionalKeyPressHandler();

	UFUNCTION()
		void ConditionalFailPreciseRestarter();
};
