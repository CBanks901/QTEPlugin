// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTE_ContainerWidget.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTE_ContainerWidget() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FLinearColor();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ContainerWidget();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ContainerWidget_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_KeyWidget_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UHorizontalBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_USizeBox_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UWidgetAnimation_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTE_ContainerWidget::execToogleKeyVisibility)
	{
		P_GET_UBOOL(Z_Param_bVisibility);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToogleKeyVisibility(Z_Param_bVisibility);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execHighlightKeysHoldDown)
	{
		P_GET_UBOOL(Z_Param_bHolding);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightKeysHoldDown(Z_Param_bHolding);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execEnableOuterBackground)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->EnableOuterBackground();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execPlayCountDownAnimationHelper)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_GET_PROPERTY(FFloatProperty,Z_Param_SequenceLength);
		P_GET_OBJECT(UWidgetAnimation,Z_Param_AnimationToPlay);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PlayCountDownAnimationHelper(Z_Param_Index,Z_Param_SequenceLength,Z_Param_AnimationToPlay);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execHighlightActiveKeysHelper)
	{
		P_GET_TARRAY(int32,Z_Param_Indices);
		P_GET_UBOOL(Z_Param_bRandomColor);
		P_GET_STRUCT(FLinearColor,Z_Param_Color);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HighlightActiveKeysHelper(Z_Param_Indices,Z_Param_bRandomColor,Z_Param_Color);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execToogleTimedKeyVisibility)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ToogleTimedKeyVisibility(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execRemoveChild)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_Index);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveChild(Z_Param_Index);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execRemoveAllChildrenFromViewPort)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RemoveAllChildrenFromViewPort();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execClearSetUp)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ClearSetUp();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execAddNewKey)
	{
		P_GET_STRUCT(FKey,Z_Param_NewKey);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddNewKey(Z_Param_NewKey);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ContainerWidget::execSetUpKeysHelper)
	{
		P_GET_TARRAY(FKey,Z_Param_KeysRef);
		P_GET_OBJECT(UClass,Z_Param_KeyWidgetClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpKeysHelper(Z_Param_KeysRef,Z_Param_KeyWidgetClass);
		P_NATIVE_END;
	}
	struct SQTE_ContainerWidget_eventHighlightActiveKeys_Parms
	{
		TArray<int32> Indices;
	};
	struct SQTE_ContainerWidget_eventPlayCountDownAnimation_Parms
	{
		int32 Index;
		float SequenceLength;
	};
	struct SQTE_ContainerWidget_eventSetUpKeys_Parms
	{
		TArray<FKey> Values;
	};
	static FName NAME_USQTE_ContainerWidget_HighlightActiveKeys = FName(TEXT("HighlightActiveKeys"));
	void USQTE_ContainerWidget::HighlightActiveKeys(TArray<int32> const& Indices)
	{
		SQTE_ContainerWidget_eventHighlightActiveKeys_Parms Parms;
		Parms.Indices=Indices;
		ProcessEvent(FindFunctionChecked(NAME_USQTE_ContainerWidget_HighlightActiveKeys),&Parms);
	}
	static FName NAME_USQTE_ContainerWidget_PlayCountDownAnimation = FName(TEXT("PlayCountDownAnimation"));
	void USQTE_ContainerWidget::PlayCountDownAnimation(int32 Index, float SequenceLength)
	{
		SQTE_ContainerWidget_eventPlayCountDownAnimation_Parms Parms;
		Parms.Index=Index;
		Parms.SequenceLength=SequenceLength;
		ProcessEvent(FindFunctionChecked(NAME_USQTE_ContainerWidget_PlayCountDownAnimation),&Parms);
	}
	static FName NAME_USQTE_ContainerWidget_PlayNormalKeyAnimations = FName(TEXT("PlayNormalKeyAnimations"));
	void USQTE_ContainerWidget::PlayNormalKeyAnimations()
	{
		ProcessEvent(FindFunctionChecked(NAME_USQTE_ContainerWidget_PlayNormalKeyAnimations),NULL);
	}
	static FName NAME_USQTE_ContainerWidget_SetUpKeys = FName(TEXT("SetUpKeys"));
	void USQTE_ContainerWidget::SetUpKeys(TArray<FKey> const& Values)
	{
		SQTE_ContainerWidget_eventSetUpKeys_Parms Parms;
		Parms.Values=Values;
		ProcessEvent(FindFunctionChecked(NAME_USQTE_ContainerWidget_SetUpKeys),&Parms);
	}
	void USQTE_ContainerWidget::StaticRegisterNativesUSQTE_ContainerWidget()
	{
		UClass* Class = USQTE_ContainerWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddNewKey", &USQTE_ContainerWidget::execAddNewKey },
			{ "ClearSetUp", &USQTE_ContainerWidget::execClearSetUp },
			{ "EnableOuterBackground", &USQTE_ContainerWidget::execEnableOuterBackground },
			{ "HighlightActiveKeysHelper", &USQTE_ContainerWidget::execHighlightActiveKeysHelper },
			{ "HighlightKeysHoldDown", &USQTE_ContainerWidget::execHighlightKeysHoldDown },
			{ "PlayCountDownAnimationHelper", &USQTE_ContainerWidget::execPlayCountDownAnimationHelper },
			{ "RemoveAllChildrenFromViewPort", &USQTE_ContainerWidget::execRemoveAllChildrenFromViewPort },
			{ "RemoveChild", &USQTE_ContainerWidget::execRemoveChild },
			{ "SetUpKeysHelper", &USQTE_ContainerWidget::execSetUpKeysHelper },
			{ "ToogleKeyVisibility", &USQTE_ContainerWidget::execToogleKeyVisibility },
			{ "ToogleTimedKeyVisibility", &USQTE_ContainerWidget::execToogleTimedKeyVisibility },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics
	{
		struct SQTE_ContainerWidget_eventAddNewKey_Parms
		{
			FKey NewKey;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewKey;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::NewProp_NewKey = { "NewKey", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventAddNewKey_Parms, NewKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::NewProp_NewKey,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key SetUp" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "AddNewKey", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::SQTE_ContainerWidget_eventAddNewKey_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics::Function_MetaDataParams[] = {
		{ "Category", "CleanUp" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "ClearSetUp", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | Precision" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "EnableOuterBackground", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Indices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventHighlightActiveKeys_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::NewProp_Indices,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enahancers | Timed" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "HighlightActiveKeys", nullptr, nullptr, sizeof(SQTE_ContainerWidget_eventHighlightActiveKeys_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics
	{
		struct SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms
		{
			TArray<int32> Indices;
			bool bRandomColor;
			FLinearColor Color;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Indices_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Indices;
		static void NewProp_bRandomColor_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRandomColor;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Color;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Indices_Inner = { "Indices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Indices = { "Indices", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms, Indices), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_bRandomColor_SetBit(void* Obj)
	{
		((SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms*)Obj)->bRandomColor = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_bRandomColor = { "bRandomColor", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms), &Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_bRandomColor_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Color = { "Color", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms, Color), Z_Construct_UScriptStruct_FLinearColor, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Indices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Indices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_bRandomColor,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::NewProp_Color,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | Timed" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "HighlightActiveKeysHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::SQTE_ContainerWidget_eventHighlightActiveKeysHelper_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics
	{
		struct SQTE_ContainerWidget_eventHighlightKeysHoldDown_Parms
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
	void Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::NewProp_bHolding_SetBit(void* Obj)
	{
		((SQTE_ContainerWidget_eventHighlightKeysHoldDown_Parms*)Obj)->bHolding = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::NewProp_bHolding = { "bHolding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ContainerWidget_eventHighlightKeysHoldDown_Parms), &Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::NewProp_bHolding_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::NewProp_bHolding,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | Holding" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "HighlightKeysHoldDown", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::SQTE_ContainerWidget_eventHighlightKeysHoldDown_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics
	{
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventPlayCountDownAnimation_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventPlayCountDownAnimation_Parms, SequenceLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::NewProp_SequenceLength,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations | Precision Key Presses" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "PlayCountDownAnimation", nullptr, nullptr, sizeof(SQTE_ContainerWidget_eventPlayCountDownAnimation_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics
	{
		struct SQTE_ContainerWidget_eventPlayCountDownAnimationHelper_Parms
		{
			int32 Index;
			float SequenceLength;
			UWidgetAnimation* AnimationToPlay;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceLength;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AnimationToPlay;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventPlayCountDownAnimationHelper_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_SequenceLength = { "SequenceLength", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventPlayCountDownAnimationHelper_Parms, SequenceLength), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_AnimationToPlay = { "AnimationToPlay", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventPlayCountDownAnimationHelper_Parms, AnimationToPlay), Z_Construct_UClass_UWidgetAnimation_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_Index,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_SequenceLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::NewProp_AnimationToPlay,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | Precision" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "PlayCountDownAnimationHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::SQTE_ContainerWidget_eventPlayCountDownAnimationHelper_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics::Function_MetaDataParams[] = {
		{ "Category", "Animations | Normal Key Presses" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "PlayNormalKeyAnimations", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics::Function_MetaDataParams[] = {
		{ "Category", "CleanUp" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "RemoveAllChildrenFromViewPort", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics
	{
		struct SQTE_ContainerWidget_eventRemoveChild_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventRemoveChild_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | SubSequence" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "RemoveChild", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::SQTE_ContainerWidget_eventRemoveChild_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics
	{
		static const UECodeGen_Private::FStructPropertyParams NewProp_Values_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Values_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Values;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values_Inner = { "Values", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values = { "Values", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventSetUpKeys_Parms, Values), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::NewProp_Values,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key SetUp" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "SetUpKeys", nullptr, nullptr, sizeof(SQTE_ContainerWidget_eventSetUpKeys_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08420800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics
	{
		struct SQTE_ContainerWidget_eventSetUpKeysHelper_Parms
		{
			TArray<FKey> KeysRef;
			TSubclassOf<USQTE_KeyWidget>  KeyWidgetClass;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysRef;
		static const UECodeGen_Private::FClassPropertyParams NewProp_KeyWidgetClass;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeysRef_Inner = { "KeysRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeysRef = { "KeysRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventSetUpKeysHelper_Parms, KeysRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeyWidgetClass = { "KeyWidgetClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventSetUpKeysHelper_Parms, KeyWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeysRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeysRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::NewProp_KeyWidgetClass,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key SetUp | Helper" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "SetUpKeysHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::SQTE_ContainerWidget_eventSetUpKeysHelper_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics
	{
		struct SQTE_ContainerWidget_eventToogleKeyVisibility_Parms
		{
			bool bVisibility;
		};
		static void NewProp_bVisibility_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bVisibility;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::NewProp_bVisibility_SetBit(void* Obj)
	{
		((SQTE_ContainerWidget_eventToogleKeyVisibility_Parms*)Obj)->bVisibility = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::NewProp_bVisibility = { "bVisibility", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ContainerWidget_eventToogleKeyVisibility_Parms), &Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::NewProp_bVisibility_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::NewProp_bVisibility,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key SetUp" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "ToogleKeyVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::SQTE_ContainerWidget_eventToogleKeyVisibility_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics
	{
		struct SQTE_ContainerWidget_eventToogleTimedKeyVisibility_Parms
		{
			int32 Index;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_Index;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::NewProp_Index = { "Index", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ContainerWidget_eventToogleTimedKeyVisibility_Parms, Index), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::NewProp_Index,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::Function_MetaDataParams[] = {
		{ "Category", "Key Enhancers | Timed" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ContainerWidget, nullptr, "ToogleTimedKeyVisibility", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::SQTE_ContainerWidget_eventToogleTimedKeyVisibility_Parms), Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTE_ContainerWidget);
	UClass* Z_Construct_UClass_USQTE_ContainerWidget_NoRegister()
	{
		return USQTE_ContainerWidget::StaticClass();
	}
	struct Z_Construct_UClass_USQTE_ContainerWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ParentSizeBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ParentSizeBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubParentHorizontalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SubParentHorizontalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Key_Widget_1_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Key_Widget_1;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Key_Widget_2_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Key_Widget_2;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Key_Widget_3_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Key_Widget_3;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Key_Widget_4_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Key_Widget_4;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Key_Widget_5_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Key_Widget_5;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_WidgetKeyArray_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_WidgetKeyArray_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_QTE_WidgetKeyArray;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IntegerToogle_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IntegerToogle;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTE_ContainerWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTE_ContainerWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_AddNewKey, "AddNewKey" }, // 3381412666
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_ClearSetUp, "ClearSetUp" }, // 3203526169
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_EnableOuterBackground, "EnableOuterBackground" }, // 2259503653
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeys, "HighlightActiveKeys" }, // 673105841
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_HighlightActiveKeysHelper, "HighlightActiveKeysHelper" }, // 3597707665
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_HighlightKeysHoldDown, "HighlightKeysHoldDown" }, // 3332295000
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimation, "PlayCountDownAnimation" }, // 2885302100
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_PlayCountDownAnimationHelper, "PlayCountDownAnimationHelper" }, // 2584033554
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_PlayNormalKeyAnimations, "PlayNormalKeyAnimations" }, // 3000765822
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_RemoveAllChildrenFromViewPort, "RemoveAllChildrenFromViewPort" }, // 1124577140
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_RemoveChild, "RemoveChild" }, // 297969914
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeys, "SetUpKeys" }, // 490076034
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_SetUpKeysHelper, "SetUpKeysHelper" }, // 1562560373
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_ToogleKeyVisibility, "ToogleKeyVisibility" }, // 1162241726
		{ &Z_Construct_UFunction_USQTE_ContainerWidget_ToogleTimedKeyVisibility, "ToogleTimedKeyVisibility" }, // 1423071592
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTE_ContainerWidget.h" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_ParentSizeBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Header" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_ParentSizeBox = { "ParentSizeBox", nullptr, (EPropertyFlags)0x00100000000a0009, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, ParentSizeBox), Z_Construct_UClass_USizeBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_ParentSizeBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_ParentSizeBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_SubParentHorizontalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "SubHeader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_SubParentHorizontalBox = { "SubParentHorizontalBox", nullptr, (EPropertyFlags)0x001000000009000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, SubParentHorizontalBox), Z_Construct_UClass_UHorizontalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_SubParentHorizontalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_SubParentHorizontalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_1_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key Widget Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_1 = { "QTE_Key_Widget_1", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_Key_Widget_1), Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_1_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_1_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_2_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key Widget Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_2 = { "QTE_Key_Widget_2", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_Key_Widget_2), Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_2_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_2_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_3_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key Widget Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_3 = { "QTE_Key_Widget_3", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_Key_Widget_3), Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_3_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_3_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_4_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key Widget Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_4 = { "QTE_Key_Widget_4", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_Key_Widget_4), Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_4_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_4_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_5_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Key Widget Items" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_5 = { "QTE_Key_Widget_5", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_Key_Widget_5), Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_5_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_5_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray_Inner = { "QTE_WidgetKeyArray", nullptr, (EPropertyFlags)0x00000000000a0008, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_USQTE_KeyWidget_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray_MetaData[] = {
		{ "Category", "Key Widget Array" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray = { "QTE_WidgetKeyArray", nullptr, (EPropertyFlags)0x001000800002000d, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, QTE_WidgetKeyArray), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_IntegerToogle_MetaData[] = {
		{ "Category", "Preview Helper Integer" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SQTE_ContainerWidget.h" },
		{ "UIMax", "5" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_IntegerToogle = { "IntegerToogle", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ContainerWidget, IntegerToogle), METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_IntegerToogle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_IntegerToogle_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTE_ContainerWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_ParentSizeBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_SubParentHorizontalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_1,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_2,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_3,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_4,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_Key_Widget_5,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_QTE_WidgetKeyArray,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ContainerWidget_Statics::NewProp_IntegerToogle,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTE_ContainerWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTE_ContainerWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTE_ContainerWidget_Statics::ClassParams = {
		&USQTE_ContainerWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTE_ContainerWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USQTE_ContainerWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ContainerWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTE_ContainerWidget()
	{
		if (!Z_Registration_Info_UClass_USQTE_ContainerWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTE_ContainerWidget.OuterSingleton, Z_Construct_UClass_USQTE_ContainerWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTE_ContainerWidget.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTE_ContainerWidget>()
	{
		return USQTE_ContainerWidget::StaticClass();
	}
	USQTE_ContainerWidget::USQTE_ContainerWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTE_ContainerWidget);
	USQTE_ContainerWidget::~USQTE_ContainerWidget() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTE_ContainerWidget, USQTE_ContainerWidget::StaticClass, TEXT("USQTE_ContainerWidget"), &Z_Registration_Info_UClass_USQTE_ContainerWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTE_ContainerWidget), 45169426U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_1798331681(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
