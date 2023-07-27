// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTE_KeyWidget.h"
#include "Components/HorizontalBox.h"
#include "Components/TextBlock.h"
#include "Components/Image.h"

void USQTE_KeyWidget::NativeConstruct()
{
	Super::NativeConstruct();

	InitializeData();
}

void USQTE_KeyWidget::NativePreConstruct()
{
	Super::NativePreConstruct();

	if (KeyToPress.IsValid())
	{
		if (!KeyPressText->GetText().EqualTo(KeyToPress.GetDisplayName()) )
		{
			KeyPressText->SetText(KeyToPress.GetDisplayName());
		}
	}

	FSlateFontInfo InfoRef;
	InfoRef = KeyPressText->GetFont();
	InfoRef.Size = SampleTextSize;

	KeyPressText->SetFont(InfoRef);
}

void USQTE_KeyWidget::InitializeData()
{
	FFormatNamedArguments args;
	args.Add(TEXT("Key"), FText::FromString("KeyID"));
	args.Add(TEXT("Value"), KeyToPress.GetDisplayName());

	FText FormattedText = FText::Format(NSLOCTEXT("KeyTextNamespace", "{Key}", "{Value}"), args);

	KeyPressText->SetText(FormattedText);

	ThresholdBackgroundImage->SetVisibility(ESlateVisibility::Hidden);
	BackgroundThresholdTrackerImage->SetVisibility(ESlateVisibility::Hidden);


	FSlateFontInfo Font = KeyPressText->GetFont();
	OriginalOutlineColor = Font.OutlineSettings.OutlineColor;
}

void USQTE_KeyWidget::EnableUI()
{
	ThresholdBackgroundImage->SetVisibility(ESlateVisibility::Visible);
	BackgroundThresholdTrackerImage->SetVisibility(ESlateVisibility::Visible);
}

void USQTE_KeyWidget::ChangeColor(bool bRandom, FLinearColor NewColor)
{
	FSlateColor SlateColor = bRandom ? FSlateColor(FColor::MakeRandomColor()) : NewColor;
	KeyPressText->SetColorAndOpacity(SlateColor);
}

void USQTE_KeyWidget::HeldDownKeyHighlight(bool bHolding)
{
	FSlateFontInfo FontInfo;
	FontInfo.CompositeFont = KeyPressText->GetFont().CompositeFont;
	FontInfo.FontFallback = KeyPressText->GetFont().FontFallback;
	FontInfo.FontMaterial = KeyPressText->GetFont().FontMaterial;
	FontInfo.FontObject = KeyPressText->GetFont().FontObject;
	FontInfo.LetterSpacing = KeyPressText->GetFont().LetterSpacing;
	FontInfo.Size = KeyPressText->GetFont().Size;
	FontInfo.TypefaceFontName = KeyPressText->GetFont().TypefaceFontName;
	FontInfo.OutlineSettings.bApplyOutlineToDropShadows = KeyPressText->GetFont().OutlineSettings.bApplyOutlineToDropShadows;
	FontInfo.OutlineSettings.bSeparateFillAlpha = KeyPressText->GetFont().OutlineSettings.bSeparateFillAlpha;
	FontInfo.OutlineSettings.OutlineMaterial = KeyPressText->GetFont().OutlineSettings.OutlineMaterial;
	FontInfo.OutlineSettings.NoOutline = KeyPressText->GetFont().OutlineSettings.NoOutline;

	if (bHolding)
	{
		if (!bAlreadyHolding)
		{

			FontInfo.OutlineSettings.OutlineSize = TargetOutlineSize;
			FontInfo.OutlineSettings.OutlineColor = TargetOutlineColor;
			KeyPressText->SetFont(FontInfo);

			bAlreadyHolding = true;
		}
	}
	else
	{
		if (bAlreadyHolding)
		{
			FontInfo.OutlineSettings = KeyPressText->GetFont().OutlineSettings;
			FontInfo.OutlineSettings.OutlineSize = 0;
			FontInfo.OutlineSettings.OutlineColor = OriginalOutlineColor;

			KeyPressText->SetFont(FontInfo);
			
			bAlreadyHolding = false;
		}
	}
}

void USQTE_KeyWidget::PreciseThresholdPassed()
{
	bCanPressInput = true;
}
