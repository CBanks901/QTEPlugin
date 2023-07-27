// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SQTE_KeyWidget.generated.h"

/**
 *
 */

class UHorizontalBox;
class UTextBlock;
class UImage;

UCLASS(Abstract)
class QTE_VER2_API USQTE_KeyWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, Category = "HorizontalBox", meta = (BindWidget))
		UHorizontalBox* ParentHorizontalBox;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HorizontalBox|KeyText", meta = (BindWidget))
		UTextBlock* KeyPressText;

	UPROPERTY(BlueprintReadWrite, Category = "HorizontalBox|Images", meta = (BindWidget, ToolTip = "Once this limit is passed then you can press keys during precise qtes only"))
		UImage* ThresholdBackgroundImage;

	UPROPERTY(BlueprintReadWrite, Category = "HorizontalBox|Images", meta = (BindWidget, ToolTip = "The Threshold which constantly decreases/shrinks when playing precision qtes. It's the outer image"))
		UImage* BackgroundThresholdTrackerImage;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Transient, Category = "Animations", meta = (BindWidgetAnim, ToolTip = "For precise keys only."))
		UWidgetAnimation* PreciseKeyAnimation;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "HoldingKeySettings")
		bool bAlreadyHolding;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "PreciseKeySettings", meta = (ToolTip = "After a certain point in the animation this variable will be changed. The ThresholdPassedFunction will handle its change"))
		bool bCanPressInput;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "KeyInput", meta = (ExposeOnSpawn))
		FKey KeyToPress;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "KeyData")
		FLinearColor OriginalOutlineColor;

	UPROPERTY(EditAnywhere, Category = "Miscellaneous  | EditorOnly", meta = (ToolTip = "Has no bearing in the final game... used for editor only", UIMin = 10, UIMax = 200, ClampMin = 10, ClampMax = 200))
		float SampleTextSize = 10.0f;

	UPROPERTY()
		float OriginalTextSize = 10.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HoldingKeySettings")
		FLinearColor TargetOutlineColor;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HoldingKeySettings", meta = (UIMin = 1, ClampMin = 1))
		int32 TargetOutlineSize = 1;

public:

	virtual void NativeConstruct() override;

	virtual void NativePreConstruct() override;

public:

	UFUNCTION(BlueprintCallable, Category = "Construct Helper")
		void InitializeData();

	UFUNCTION(BlueprintCallable, Category = "Initialize ")
		void EnableUI();

	UFUNCTION(BlueprintCallable, Category = "KeyData")
		void ChangeColor(bool bRandom, FLinearColor NewColor);

	UFUNCTION(BlueprintCallable, Category = "KeyData")
		void HeldDownKeyHighlight(bool bHolding);

	UFUNCTION(BlueprintImplementableEvent, BlueprintCallable, Category = "KeyPressAnimation")
		void KeyPressAnimation();

	UFUNCTION(BlueprintCallable, Category = "Precise QTE Helper Function")
		void PreciseThresholdPassed();
};
