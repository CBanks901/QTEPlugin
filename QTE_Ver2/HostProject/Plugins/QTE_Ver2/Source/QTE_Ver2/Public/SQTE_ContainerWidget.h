// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Blueprint/UserWidget.h"
#include "SQTE_ContainerWidget.generated.h"

/**
 *
 */
class USQTE_KeyWidget;
class USizeBox;
class UHorizontalBox;
class UWidgetAnimation;

UCLASS(Abstract)
class QTE_VER2_API USQTE_ContainerWidget : public UUserWidget
{
	GENERATED_BODY()

public:

	UPROPERTY(VisibleAnywhere, Category = "Header", meta = (BindWidget))
		USizeBox* ParentSizeBox;

	UPROPERTY(EditDefaultsOnly, BlueprintReadWrite, Category = "SubHeader", meta = (BindWidget))
		UHorizontalBox* SubParentHorizontalBox;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Key Widget Items", meta = (BindWidget))
		USQTE_KeyWidget* QTE_Key_Widget_1;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Key Widget Items", meta = (BindWidget))
		USQTE_KeyWidget* QTE_Key_Widget_2;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Key Widget Items", meta = (BindWidget))
		USQTE_KeyWidget* QTE_Key_Widget_3;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Key Widget Items", meta = (BindWidget))
		USQTE_KeyWidget* QTE_Key_Widget_4;

	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Key Widget Items", meta = (BindWidget))
		USQTE_KeyWidget* QTE_Key_Widget_5;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Key Widget Array")
		TArray<USQTE_KeyWidget*> QTE_WidgetKeyArray;

	UPROPERTY(EditAnywhere, BlueprintReadOnly, Category = "Preview Helper Integer", meta = (UIMin = 1, ClampMin = 1, UIMax = 5, UIMax = 5))
		int32 IntegerToogle = 1;

public:
	virtual void NativePreConstruct() override;

	virtual void NativeConstruct() override;

	UFUNCTION(BlueprintCallable, Category = "Key SetUp | Helper")
		void SetUpKeysHelper(TArray<FKey> KeysRef, TSubclassOf<USQTE_KeyWidget> KeyWidgetClass);

	UFUNCTION(BlueprintCallable, Category = "Key SetUp")
		void AddNewKey(FKey NewKey);

	UFUNCTION(BlueprintCallable, Category = "CleanUp")
		void ClearSetUp();

	UFUNCTION(BlueprintCallable, Category = "CleanUp")
		void RemoveAllChildrenFromViewPort();

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | SubSequence")
		void RemoveChild(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | Timed")
		void ToogleTimedKeyVisibility(int32 Index);

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | Timed")
		void HighlightActiveKeysHelper(TArray<int32> Indices, bool bRandomColor, FLinearColor Color);

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | Precision")
		void PlayCountDownAnimationHelper(int32 Index, float SequenceLength, UWidgetAnimation* AnimationToPlay);

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | Precision")
		void EnableOuterBackground();

	UFUNCTION(BlueprintCallable, Category = "Key Enhancers | Holding")
		void HighlightKeysHoldDown(bool bHolding);

	UFUNCTION(BlueprintCallable, Category = "Key SetUp")
		void ToogleKeyVisibility(bool bVisibility);

public:

	UFUNCTION(BlueprintImplementableEvent, Category = "Key SetUp")
		void SetUpKeys(const TArray<FKey>& Values);

	UFUNCTION(BlueprintImplementableEvent, Category = "Key Enahancers | Timed")
		void HighlightActiveKeys(const TArray<int32>& Indices);

	UFUNCTION(BlueprintImplementableEvent, Category = "Animations | Precision Key Presses")
		void PlayCountDownAnimation(int32 Index, float SequenceLength);

	UFUNCTION(BlueprintImplementableEvent, Category = "Animations | Normal Key Presses")
		void PlayNormalKeyAnimations();
};
