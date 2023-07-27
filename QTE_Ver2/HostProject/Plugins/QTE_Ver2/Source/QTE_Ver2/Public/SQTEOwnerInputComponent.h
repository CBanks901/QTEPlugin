// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "GameFramework/Character.h"
#include "SQTEOwnerInputComponent.generated.h"


UCLASS(ClassGroup = (Custom), meta = (BlueprintSpawnableComponent))
class QTE_VER2_API USQTEOwnerInputComponent : public UActorComponent
{
	GENERATED_BODY()

public:
	// Sets default values for this component's properties
	USQTEOwnerInputComponent();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:

	UPROPERTY(EditDefaultsOnly, meta = (ToolTip = "Used by the QTE system to determine which keys are allowed to be pressed. "), Category = "InputSettings")
		TArray<FKey> KeysToUse;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!bAnalogOnly && !bKeyBoardOnly"), Category = "InputSettings")
		bool bGamepadOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!bGamepadOnly && !bKeyBoardOnly"), Category = "InputSettings")
		bool bAnalogOnly;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (EditCondition = "!bGamepadOnly && !bAnalogOnly"), Category = "InputSettings")
		bool bKeyBoardOnly;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, meta = (ToolTip = "This variable tracks the keys that are currently active and are constantly updated. Their input list corresponds with the KeysToUse Array which should be set immediately"), Category = "InputTracker")
		TArray<FKey> ActiveKeys;

	FTimerHandle TimerHandler;

	FTimerDelegate TimerDelegate;
public:
	UFUNCTION()
		void KeyPressed(FKey Ref);

	UFUNCTION()
		void KeyReleased(FKey Ref);

	UFUNCTION()
		void OwnerPawnChanged(APawn* NewPawn, APawn* OldPawn);

	UFUNCTION()
		void ResetData();

	UFUNCTION(BlueprintCallable, Category = "InputData")
		const FString GetActiveKeyData();
};
