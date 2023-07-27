// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTE_ContainerWidget.h"
#include "UQTEUtilities.h"
#include "SQTE_KeyWidget.h"
#include "Components/SizeBox.h"
#include "Components/HorizontalBox.h"
#include "Animation/WidgetAnimation.h"

void USQTE_ContainerWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	switch (IntegerToogle)
	{
	case 1:
	{
		if (QTE_Key_Widget_1)
			QTE_Key_Widget_1->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_2)
			QTE_Key_Widget_2->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_3)
			QTE_Key_Widget_3->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_4)
			QTE_Key_Widget_4->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_5)
			QTE_Key_Widget_5->SetVisibility(ESlateVisibility::Collapsed);
		break;
	}

	case 2:
	{
		if (QTE_Key_Widget_1)
			QTE_Key_Widget_1->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_2)
			QTE_Key_Widget_2->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_3)
			QTE_Key_Widget_3->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_4)
			QTE_Key_Widget_4->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_5)
			QTE_Key_Widget_5->SetVisibility(ESlateVisibility::Collapsed);
		break;
	}

	case 3:
	{
		if (QTE_Key_Widget_1)
			QTE_Key_Widget_1->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_2)
			QTE_Key_Widget_2->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_3)
			QTE_Key_Widget_3->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_4)
			QTE_Key_Widget_4->SetVisibility(ESlateVisibility::Collapsed);
		if (QTE_Key_Widget_5)
			QTE_Key_Widget_5->SetVisibility(ESlateVisibility::Collapsed);
		break;
	}

	case 4:
	{
		if (QTE_Key_Widget_1)
			QTE_Key_Widget_1->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_2)
			QTE_Key_Widget_2->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_3)
			QTE_Key_Widget_3->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_4)
			QTE_Key_Widget_4->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_5)
			QTE_Key_Widget_5->SetVisibility(ESlateVisibility::Collapsed);
		break;
	}

	case 5:
	{
		if (QTE_Key_Widget_1)
			QTE_Key_Widget_1->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_2)
			QTE_Key_Widget_2->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_3)
			QTE_Key_Widget_3->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_4)
			QTE_Key_Widget_4->SetVisibility(ESlateVisibility::Visible);
		if (QTE_Key_Widget_5)
			QTE_Key_Widget_5->SetVisibility(ESlateVisibility::Visible);
		break;
	}
	}
}

void USQTE_ContainerWidget::NativeConstruct()
{
	Super::NativeConstruct();

	SubParentHorizontalBox->ClearChildren();
}

void USQTE_ContainerWidget::SetUpKeysHelper(TArray<FKey> KeysRef, TSubclassOf<USQTE_KeyWidget> KeyWidgetClass)
{
	if (KeysRef.Num() > 0)
	{
		if (KeyWidgetClass)
		{
			for (int32 i = 0; i < KeysRef.Num(); i++)
			{
				if (i < 5)
				{
					USQTE_KeyWidget* KeyWidget = CreateWidget<USQTE_KeyWidget>(GetOwningPlayer(), KeyWidgetClass);

					if (ensure(KeyWidget))
					{
						KeyWidget->KeyToPress = KeysRef[i];

						SubParentHorizontalBox->AddChild(KeyWidget);
						QTE_WidgetKeyArray.Add(KeyWidget);
					}
				}
			}
		}
	}
}

void USQTE_ContainerWidget::AddNewKey(FKey NewKey)
{
	if (NewKey.IsValid())
	{
		if (ensure(GetOwningPlayer()))
		{
			USQTE_KeyWidget* KeyWidget = CreateWidget<USQTE_KeyWidget>(GetOwningPlayer(), QTE_Key_Widget_1->GetClass());

			if (ensure(KeyWidget))
				KeyWidget->KeyToPress = NewKey;

			SubParentHorizontalBox->AddChild(KeyWidget);

			QTE_WidgetKeyArray.Add(KeyWidget);
		}
	}
}

void USQTE_ContainerWidget::ClearSetUp()
{
	SubParentHorizontalBox->ClearChildren();
}

void USQTE_ContainerWidget::RemoveAllChildrenFromViewPort()
{
	if (QTE_WidgetKeyArray.Num() > 0)
	{
		for (int32 i = 0; i < QTE_WidgetKeyArray.Num(); i++)
		{
			QTE_WidgetKeyArray[i]->RemoveFromParent();
		}

		QTE_WidgetKeyArray.Empty();
	}
}

void USQTE_ContainerWidget::RemoveChild(int32 Index)
{
	if (QTE_WidgetKeyArray.IsValidIndex(Index))
	{
		QTE_WidgetKeyArray[Index]->SetVisibility(ESlateVisibility::Collapsed);
	}
}

void USQTE_ContainerWidget::ToogleTimedKeyVisibility(int32 Index)
{
	if (QTE_WidgetKeyArray.IsValidIndex(Index))
	{
		QTE_WidgetKeyArray[Index]->SetVisibility(ESlateVisibility::Hidden);
	}
}

void USQTE_ContainerWidget::HighlightActiveKeysHelper(TArray<int32> Indices, bool bRandomColor, FLinearColor Color)
{
	if (Indices.Num() > 0)
	{
		for (int32 i = 0; i < Indices.Num(); i++)
		{
			if (QTE_WidgetKeyArray.IsValidIndex(Indices[i]))
			{
				QTE_WidgetKeyArray[Indices[i]]->ChangeColor(bRandomColor, Color);
			}
		}
	}
}

void USQTE_ContainerWidget::PlayCountDownAnimationHelper(int32 Index, float SequenceLength, UWidgetAnimation* AnimationToPlay)
{
	if (QTE_WidgetKeyArray.IsValidIndex(Index))
	{
		if (AnimationToPlay)
		{
			if (QTE_WidgetKeyArray[Index]->IsAnimationPlaying(AnimationToPlay))
			{
				QTE_WidgetKeyArray[Index]->StopAnimation(AnimationToPlay);
			}

			float PlayBackSpeed = 1.0f;

			if (SequenceLength != 0.0f)
				PlayBackSpeed = AnimationToPlay->GetEndTime() / SequenceLength;

			QTE_WidgetKeyArray[Index]->PlayAnimation(AnimationToPlay, 0.0f, 0, EUMGSequencePlayMode::Forward, PlayBackSpeed);
		}
	}
}

void USQTE_ContainerWidget::EnableOuterBackground()
{
	for (USQTE_KeyWidget* KeyWidget : QTE_WidgetKeyArray)
	{
		if (KeyWidget)
			KeyWidget->EnableUI();
	}
}

void USQTE_ContainerWidget::HighlightKeysHoldDown(bool bHolding)
{
	for (int32 i = 0; i < QTE_WidgetKeyArray.Num(); i++)
	{
		if (QTE_WidgetKeyArray[i])
			QTE_WidgetKeyArray[i]->HeldDownKeyHighlight(bHolding);
	}
}

void USQTE_ContainerWidget::ToogleKeyVisibility(bool bVisibility)
{
	if (bVisibility)
	{
		if (!QTE_WidgetKeyArray[0]->IsVisible())
		{
			for (USQTE_KeyWidget* KeyWidget : QTE_WidgetKeyArray)
			{
				KeyWidget->SetVisibility(ESlateVisibility::Visible);
			}
		}
	}
	else
	{
		if (QTE_WidgetKeyArray[0]->IsVisible())
		{
			for (USQTE_KeyWidget* KeyWidget : QTE_WidgetKeyArray)
			{
				KeyWidget->SetVisibility(ESlateVisibility::Hidden);
			}
		}
	}
}
