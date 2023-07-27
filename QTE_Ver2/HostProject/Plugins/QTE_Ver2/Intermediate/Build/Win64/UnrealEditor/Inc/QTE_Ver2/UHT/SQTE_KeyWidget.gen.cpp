// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTE_KeyWidget.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTE_KeyWidget() {}
// Cross Module References
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_KeyWidget();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_KeyWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UImage_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTE_KeyWidget::execPreciseThresholdPassed)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PreciseThresholdPassed();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_KeyWidget::execHeldDownKeyHighlight)
	{
		P_GET_UBOOL(Z_Param_bHolding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HeldDownKeyHighlight(Z_Param_bHolding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_KeyWidget::execChangeColor)
	{
		P_GET_UBOOL(Z_Param_bRandom);
		P_GET_STRUCT(FLinearColor,Z_Param_NewColor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ChangeColor(Z_Param_bRandom,Z_Param_NewColor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_KeyWidget::execEnableUI)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableUI();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_KeyWidget::execInitializeData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InitializeData();
		P_NATIVE_END;
	}
	static FName NAME_USQTE_KeyWidget_KeyPressAnimation = FName(TEXT("KeyPressAnimation"));
	void USQTE_KeyWidget::KeyPressAnimation()
	{
		ProcessEvent(FindFunctionChecked(NAME_USQTE_KeyWidget_KeyPressAnimation),NULL);
	}
	void USQTE_KeyWidget::StaticRegisterNativesUSQTE_KeyWidget()
	{
		UClass* Class = USQTE_KeyWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ChangeColor", &USQTE_KeyWidget::execChangeColor },
			{ "EnableUI", &USQTE_KeyWidget::execEnableUI },
			{ "HeldDownKeyHighlight", &USQTE_KeyWidget::execHeldDownKeyHighlight },
			{ "InitializeData", &USQTE_KeyWidget::execInitializeData },
			{ "PreciseThresholdPassed", &USQTE_KeyWidget::execPreciseThresholdPassed },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics
	{
		struct SQTE_KeyWidget_eventChangeColor_Parms
		{
			bool bRandom;
			FLinearColor NewColor;
		};
		static void NewProp_bRandom_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandom;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewColor;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_bRandom_SetBit(void* Obj)
	{
		((SQTE_KeyWidget_eventChangeColor_Parms*)Obj)->bRandom = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_bRandom = { "bRandom", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_KeyWidget_eventChangeColor_Parms), &Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_bRandom_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_NewColor = { "NewColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_KeyWidget_eventChangeColor_Parms, NewColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_bRandom,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::NewProp_NewColor,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyData" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "ChangeColor", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::SQTE_KeyWidget_eventChangeColor_Parms), Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialize" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "EnableUI", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_EnableUI()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_EnableUI_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics
	{
		struct SQTE_KeyWidget_eventHeldDownKeyHighlight_Parms
		{
			bool bHolding;
		};
		static void NewProp_bHolding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHolding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::NewProp_bHolding_SetBit(void* Obj)
	{
		((SQTE_KeyWidget_eventHeldDownKeyHighlight_Parms*)Obj)->bHolding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::NewProp_bHolding = { "bHolding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_KeyWidget_eventHeldDownKeyHighlight_Parms), &Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::NewProp_bHolding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::NewProp_bHolding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyData" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "HeldDownKeyHighlight", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::SQTE_KeyWidget_eventHeldDownKeyHighlight_Parms), Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics::Function_MetaDataParams[] = {
		{ "Category", "Construct Helper" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "InitializeData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_InitializeData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_InitializeData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyPressAnimation" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "KeyPressAnimation", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics::Function_MetaDataParams[] = {
		{ "Category", "Precise QTE Helper Function" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_KeyWidget, nullptr, "PreciseThresholdPassed", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTE_KeyWidget);
	UClass* Z_Construct_UClass_USQTE_KeyWidget_NoRegister()
	{
		return USQTE_KeyWidget::StaticClass();
	}
	struct Z_Construct_UClass_USQTE_KeyWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentHorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentHorizontalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyPressText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_KeyPressText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ThresholdBackgroundImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ThresholdBackgroundImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BackgroundThresholdTrackerImage_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_BackgroundThresholdTrackerImage;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseKeyAnimation_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PreciseKeyAnimation;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAlreadyHolding_MetaData[];
#endif
		static void NewProp_bAlreadyHolding_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAlreadyHolding;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanPressInput_MetaData[];
#endif
		static void NewProp_bCanPressInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanPressInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToPress_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToPress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalOutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OriginalOutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SampleTextSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SampleTextSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OriginalTextSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_OriginalTextSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOutlineColor_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_TargetOutlineColor;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TargetOutlineSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TargetOutlineSize;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTE_KeyWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTE_KeyWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTE_KeyWidget_ChangeColor, "ChangeColor" }, // 1924627384
		{ &Z_Construct_UFunction_USQTE_KeyWidget_EnableUI, "EnableUI" }, // 680458013
		{ &Z_Construct_UFunction_USQTE_KeyWidget_HeldDownKeyHighlight, "HeldDownKeyHighlight" }, // 917879699
		{ &Z_Construct_UFunction_USQTE_KeyWidget_InitializeData, "InitializeData" }, // 3834376027
		{ &Z_Construct_UFunction_USQTE_KeyWidget_KeyPressAnimation, "KeyPressAnimation" }, // 831964329
		{ &Z_Construct_UFunction_USQTE_KeyWidget_PreciseThresholdPassed, "PreciseThresholdPassed" }, // 246386827
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTE_KeyWidget.h" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ParentHorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HorizontalBox" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ParentHorizontalBox = { "ParentHorizontalBox", nullptr, (EPropertyFlags)0x0010000000090009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, ParentHorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ParentHorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ParentHorizontalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyPressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HorizontalBox|KeyText" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyPressText = { "KeyPressText", nullptr, (EPropertyFlags)0x001000000008000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, KeyPressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyPressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyPressText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ThresholdBackgroundImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HorizontalBox|Images" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "ToolTip", "Once this limit is passed then you can press keys during precise qtes only" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ThresholdBackgroundImage = { "ThresholdBackgroundImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, ThresholdBackgroundImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ThresholdBackgroundImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ThresholdBackgroundImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_BackgroundThresholdTrackerImage_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "HorizontalBox|Images" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "ToolTip", "The Threshold which constantly decreases/shrinks when playing precision qtes. It's the outer image" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_BackgroundThresholdTrackerImage = { "BackgroundThresholdTrackerImage", nullptr, (EPropertyFlags)0x001000000008000c, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, BackgroundThresholdTrackerImage), Z_Construct_UClass_UImage_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_BackgroundThresholdTrackerImage_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_BackgroundThresholdTrackerImage_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_PreciseKeyAnimation_MetaData[] = {
		{ "BindWidgetAnim", "" },
		{ "Category", "Animations" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "ToolTip", "For precise keys only." },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_PreciseKeyAnimation = { "PreciseKeyAnimation", nullptr, (EPropertyFlags)0x0010000000002005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, PreciseKeyAnimation), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_PreciseKeyAnimation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_PreciseKeyAnimation_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding_MetaData[] = {
		{ "Category", "HoldingKeySettings" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding_SetBit(void* Obj)
	{
		((USQTE_KeyWidget*)Obj)->bAlreadyHolding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding = { "bAlreadyHolding", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTE_KeyWidget), &Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput_MetaData[] = {
		{ "Category", "PreciseKeySettings" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "ToolTip", "After a certain point in the animation this variable will be changed. The ThresholdPassedFunction will handle its change" },
	};
#endif
	void Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput_SetBit(void* Obj)
	{
		((USQTE_KeyWidget*)Obj)->bCanPressInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput = { "bCanPressInput", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTE_KeyWidget), &Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyToPress_MetaData[] = {
		{ "Category", "KeyInput" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyToPress = { "KeyToPress", nullptr, (EPropertyFlags)0x0011000000020005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, KeyToPress), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyToPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyToPress_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalOutlineColor_MetaData[] = {
		{ "Category", "KeyData" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalOutlineColor = { "OriginalOutlineColor", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, OriginalOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalOutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalOutlineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_SampleTextSize_MetaData[] = {
		{ "Category", "Miscellaneous  | EditorOnly" },
		{ "ClampMax", "200" },
		{ "ClampMin", "10" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "ToolTip", "Has no bearing in the final game... used for editor only" },
		{ "UIMax", "200" },
		{ "UIMin", "10" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_SampleTextSize = { "SampleTextSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, SampleTextSize), METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_SampleTextSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_SampleTextSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalTextSize_MetaData[] = {
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalTextSize = { "OriginalTextSize", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, OriginalTextSize), METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalTextSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalTextSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineColor_MetaData[] = {
		{ "Category", "HoldingKeySettings" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineColor = { "TargetOutlineColor", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, TargetOutlineColor), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineColor_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineColor_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineSize_MetaData[] = {
		{ "Category", "HoldingKeySettings" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SQTE_KeyWidget.h" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineSize = { "TargetOutlineSize", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_KeyWidget, TargetOutlineSize), METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineSize_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTE_KeyWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ParentHorizontalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyPressText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_ThresholdBackgroundImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_BackgroundThresholdTrackerImage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_PreciseKeyAnimation,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bAlreadyHolding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_bCanPressInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_KeyToPress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalOutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_SampleTextSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_OriginalTextSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_KeyWidget_Statics::NewProp_TargetOutlineSize,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTE_KeyWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTE_KeyWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTE_KeyWidget_Statics::ClassParams = {
		&USQTE_KeyWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTE_KeyWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USQTE_KeyWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_KeyWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTE_KeyWidget()
	{
		if (!Z_Registration_Info_UClass_USQTE_KeyWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTE_KeyWidget.OuterSingleton, Z_Construct_UClass_USQTE_KeyWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTE_KeyWidget.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTE_KeyWidget>()
	{
		return USQTE_KeyWidget::StaticClass();
	}
	USQTE_KeyWidget::USQTE_KeyWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTE_KeyWidget);
	USQTE_KeyWidget::~USQTE_KeyWidget() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_KeyWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_KeyWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTE_KeyWidget, USQTE_KeyWidget::StaticClass, TEXT("USQTE_KeyWidget"), &Z_Registration_Info_UClass_USQTE_KeyWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTE_KeyWidget), 2498193496U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_KeyWidget_h_1343727481(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_KeyWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_KeyWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
