// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UQTEUtilities.h"
#include "SQTEStarterComponent.generated.h"

class UCameraComponent;
class USQTEWidget;
class USQTEActorBinder;

DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEFinishedDelegate, bool, bFinishedQTE);
DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FOnQTEStartedDelegate, bool, bStartedQTE);

UCLASS(Abstract, Blueprintable, ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class QTE_VER2_API USQTEStarterComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USQTEStarterComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, BlueprintNativeEvent, Category = "Input Widget | Conditional", meta = (ReturnDisplayName = "KeyResult"))
		KeyResultData ConditionalQTEEvent();

	UFUNCTION(BlueprintImplementableEvent, Category = "Wrap Up", meta = (ReturnDisplayName = "EndOfQTE?"))
		void CompletedSequence();

public:

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner Info")
		UCameraComponent* OwnerCam;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner Info")
		FTransform RelativeCameraTransform;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Owner Info")
		APlayerController* OwnerController;

	UPROPERTY(BlueprintReadOnly, Category = "Owner Info")
		bool bOriginalControllerDesiredRotaton;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "CameraReset")
		bool bRestoreCameraSequence;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CameraReset")
		float RestoreCameraCounter;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CameraReset")
		float CameraResetTimeLimit;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CameraReset")
		float InterpSpeedToCamera;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CameraReset")
		FTransform StartingCamPoint;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "QTE Initialization")
		bool bQTEBegun;

	UPROPERTY(BlueprintReadOnly, Category = "Play Data")
		float PlayRate = 1.0f;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "QTE Widget")
		USQTEWidget* InputHandlerWidget;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table")
		UDataTable* CurrentRefTable;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info")
		FName CurrentRowName;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info")
		TMap<FName, FInputData> NormalQTEInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info")
		TMap<FName, FConditionalQTE> RowLoopData;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info")
		TMap<FName, ALevelSequenceActor*> RowSeqPlayerChart;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info")
		TMap<FName, bool>DynamicRowHelper;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Data Table Info | Helper")
		TArray<FTimeSequenceHelper> SequenceTimesRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Sequence Data")
		double CurrentSequenceEndTime;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Sequence Transistion")
		bool bSuccessfulSequence;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Sequence Transistion")
		bool bPause;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Sequence Transistion | Opening")
		bool bHasPlayedOpening;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Current QTE Scene")
		ALevelSequenceActor* LevelSequenceToPlay;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Living Status")
		bool bIsPlayerDying;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Bindng")
		TMap<FName, AActor*>ActorsToBindRef;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Processing | Normal")
		FTimerHandle SequenceEventHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Processing | Normal")
		FTimerHandle SequenceTimedTimeHandler;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Processing | Conditional")
		FTimerHandle ConditionalQTEHandle;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Scene Binding")
		USQTEActorBinder* ActorSequenceBinder;

	UPROPERTY(VisibleAnywhere, BlueprintAssignable, Category = "QTE Signals")
		FOnQTEStartedDelegate QTEStarted;

	UPROPERTY(VisibleAnywhere, BlueprintAssignable, Category = "QTE Signals")
		FOnQTEFinishedDelegate QTEFinished;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Normal | Timed")
		int32 SequenceItemIndex;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Data | Normal | Timed")
		int32 TimeSequenceCounter;

	bool bDoOnce;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Setting Required")
		TSubclassOf<USQTEWidget> QTEWidgetClass;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "QTE Subsequence Data")
		bool bStartKeySpawnRef;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "QTE Initialization | Key Press")
		FKey BeginKey;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Miscellaneous")
		bool bFinishedQTEInitialization;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Miscellaneous")
		float SequenceTimer;

	UPROPERTY()
		bool bInternalBlocker = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "FailureHelper")
		FString BlockerReasoning;

public:

	UFUNCTION()
		void ResetCameraLocation(float Timer);

	UFUNCTION()
		void RecordRelativeTransform(FTransform NewTransform);

	UFUNCTION(BlueprintCallable, Category = "Input Widget | Conditional", meta = (ReturnDisplayName = "KeyResult"))
		KeyResultData ConditionalQTEEventHelper();

	UFUNCTION()
		void ConditionalQTESuccess();

	UFUNCTION()
		void ConditionalQTEFailure();

	UFUNCTION(BlueprintCallable, Category = "Wrap Up", meta = (ReturnDisplayName = "CinematicOnly", ToolTip = "If yes this is an end to the QTE"))
		bool CompletedSequenceHelper();

	UFUNCTION()
		void ExecutionHandler();

	UFUNCTION()
		void BranchToNewPath(FName Fail, FName Success);

	UFUNCTION()
		void SetInitialSequenceData();

	UFUNCTION()
		void FinshedOpening();

	UFUNCTION()
		void TimedSequenceEvent();

	UFUNCTION()
		void SequenceTimerEvent();

	UFUNCTION()
		void SuccessSequence();

	UFUNCTION()
		void FailSequence();

	UFUNCTION()
		void KeyEventNormal();

	UFUNCTION()
		void FailNormalKeyPress();

	UFUNCTION()
		void SuccessNormalKeyPress();

	UFUNCTION()
		void BindAllSequenceActors();

	UFUNCTION()
		void InputSequence(bool bSuccess, bool bStartKeySpawn);

	UFUNCTION()
		void FinishedInputBranch();

	UFUNCTION(BlueprintCallable, Category = "QTE Initialization | Prerequisites", meta = (ReturnDisplayName = "Initialized?"))
		bool InitializeQTE(bool bAutomatic);

	UFUNCTION(BlueprintCallable, Category = "QTE Initialization | Start", meta = (ReturnDisplayName = "Success"))
		bool StartQTE(UDataTable* RefTable, FName StartingRow, TMap<FName, AActor*>ActorsToBind, TSubclassOf<USQTEActorBinder> ActorBinderClass);

	UFUNCTION()
		bool CheckDataTable(UDataTable* DataTableToCheck);

	UFUNCTION()
		bool FailedDataTableRecord(UDataTable* DataTableToCheck);

	UFUNCTION()
		bool BindOpeningData();

	UFUNCTION(BlueprintCallable, Category = "Data Table Assist", meta = (ReturnDisplayName = "QTEData", ToolTip = "Current Row Name should be set to something before this is called"))
		FQTEInputDataTable GetDataTableAsset();
};
