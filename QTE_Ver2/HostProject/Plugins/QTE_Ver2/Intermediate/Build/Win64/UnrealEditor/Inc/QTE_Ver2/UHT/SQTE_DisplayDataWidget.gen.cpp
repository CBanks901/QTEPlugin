// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTE_DisplayDataWidget.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTE_DisplayDataWidget() {}
// Cross Module References
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_DisplayDataWidget();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_DisplayDataWidget_NoRegister();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execMaxAttemptsToFailCounterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptsToFailCounterRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MaxAttemptsToFailCounterSetter(Z_Param_MaxAttemptsToFailCounterRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execAttemptsToRegressCounterSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttemptsToRegressCounterRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttemptsToRegressCounterSetter(Z_Param_AttemptsToRegressCounterRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execNoInputTimeDelayCounterSetter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NoInputTimeCounterRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoInputTimeDelayCounterSetter(Z_Param_NoInputTimeCounterRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execHoldDownKeysSetter)
	{
		P_GET_UBOOL(Z_Param_bHoldDownKeysRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->HoldDownKeysSetter(Z_Param_bHoldDownKeysRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execTimedStatusSetter)
	{
		P_GET_UBOOL(Z_Param_bTimedRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimedStatusSetter(Z_Param_bTimedRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execMaxAttemptsToFailSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptsToFailRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MaxAttemptsToFailSetter(Z_Param_MaxAttemptsToFailRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execInstantFailureSetter)
	{
		P_GET_UBOOL(Z_Param_bInstantFailureRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InstantFailureSetter(Z_Param_bInstantFailureRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execSuccessDistanceSetter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_SuccessDistanceRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuccessDistanceSetter(Z_Param_SuccessDistanceRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execAttemptsToRegressSetter)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_AttemptsToRegressRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AttemptsToRegressSetter(Z_Param_AttemptsToRegressRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execRegressDistanceSetter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_RegressDistanceRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegressDistanceSetter(Z_Param_RegressDistanceRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execNoInputTimeDelaySetter)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_NoInputTimeDelayRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoInputTimeDelaySetter(Z_Param_NoInputTimeDelayRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execRegressionSetter)
	{
		P_GET_UBOOL(Z_Param_bCanRegress);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RegressionSetter(Z_Param_bCanRegress);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execPrintStats)
	{
		P_GET_STRUCT(FInputData,Z_Param_InputRef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NoInputTimeCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttemptsToRegressCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptsToFailCounter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintStats(Z_Param_InputRef,Z_Param_NoInputTimeCounter,Z_Param_AttemptsToRegressCounter,Z_Param_MaxAttemptsToFailCounter);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_DisplayDataWidget::execAddInputStats)
	{
		P_GET_STRUCT(FInputData,Z_Param_InputRef);
		P_GET_PROPERTY(FFloatProperty,Z_Param_NoInputTimeCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_AttemptsToRegressCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_MaxAttemptsToFailCounter);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputStats(Z_Param_InputRef,Z_Param_NoInputTimeCounter,Z_Param_AttemptsToRegressCounter,Z_Param_MaxAttemptsToFailCounter);
		P_NATIVE_END;
	}
	void USQTE_DisplayDataWidget::StaticRegisterNativesUSQTE_DisplayDataWidget()
	{
		UClass* Class = USQTE_DisplayDataWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputStats", &USQTE_DisplayDataWidget::execAddInputStats },
			{ "AttemptsToRegressCounterSetter", &USQTE_DisplayDataWidget::execAttemptsToRegressCounterSetter },
			{ "AttemptsToRegressSetter", &USQTE_DisplayDataWidget::execAttemptsToRegressSetter },
			{ "HoldDownKeysSetter", &USQTE_DisplayDataWidget::execHoldDownKeysSetter },
			{ "InstantFailureSetter", &USQTE_DisplayDataWidget::execInstantFailureSetter },
			{ "MaxAttemptsToFailCounterSetter", &USQTE_DisplayDataWidget::execMaxAttemptsToFailCounterSetter },
			{ "MaxAttemptsToFailSetter", &USQTE_DisplayDataWidget::execMaxAttemptsToFailSetter },
			{ "NoInputTimeDelayCounterSetter", &USQTE_DisplayDataWidget::execNoInputTimeDelayCounterSetter },
			{ "NoInputTimeDelaySetter", &USQTE_DisplayDataWidget::execNoInputTimeDelaySetter },
			{ "PrintStats", &USQTE_DisplayDataWidget::execPrintStats },
			{ "RegressDistanceSetter", &USQTE_DisplayDataWidget::execRegressDistanceSetter },
			{ "RegressionSetter", &USQTE_DisplayDataWidget::execRegressionSetter },
			{ "SuccessDistanceSetter", &USQTE_DisplayDataWidget::execSuccessDistanceSetter },
			{ "TimedStatusSetter", &USQTE_DisplayDataWidget::execTimedStatusSetter },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics
	{
		struct SQTE_DisplayDataWidget_eventAddInputStats_Parms
		{
			FInputData InputRef;
			float NoInputTimeCounter;
			int32 AttemptsToRegressCounter;
			int32 MaxAttemptsToFailCounter;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputRef;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegressCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFailCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_InputRef = { "InputRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAddInputStats_Parms, InputRef), Z_Construct_UScriptStruct_FInputData, METADATA_PARAMS(nullptr, 0) }; // 1017580504
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_NoInputTimeCounter = { "NoInputTimeCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAddInputStats_Parms, NoInputTimeCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_AttemptsToRegressCounter = { "AttemptsToRegressCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAddInputStats_Parms, AttemptsToRegressCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_MaxAttemptsToFailCounter = { "MaxAttemptsToFailCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAddInputStats_Parms, MaxAttemptsToFailCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_InputRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_NoInputTimeCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_AttemptsToRegressCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::NewProp_MaxAttemptsToFailCounter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "OutputStats" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "AddInputStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::SQTE_DisplayDataWidget_eventAddInputStats_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventAttemptsToRegressCounterSetter_Parms
		{
			int32 AttemptsToRegressCounterRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegressCounterRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::NewProp_AttemptsToRegressCounterRef = { "AttemptsToRegressCounterRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAttemptsToRegressCounterSetter_Parms, AttemptsToRegressCounterRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::NewProp_AttemptsToRegressCounterRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "AttemptsToRegressCounterSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::SQTE_DisplayDataWidget_eventAttemptsToRegressCounterSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventAttemptsToRegressSetter_Parms
		{
			int32 AttemptsToRegressRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegressRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::NewProp_AttemptsToRegressRef = { "AttemptsToRegressRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventAttemptsToRegressSetter_Parms, AttemptsToRegressRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::NewProp_AttemptsToRegressRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "AttemptsToRegressSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::SQTE_DisplayDataWidget_eventAttemptsToRegressSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventHoldDownKeysSetter_Parms
		{
			bool bHoldDownKeysRef;
		};
		static void NewProp_bHoldDownKeysRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldDownKeysRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::NewProp_bHoldDownKeysRef_SetBit(void* Obj)
	{
		((SQTE_DisplayDataWidget_eventHoldDownKeysSetter_Parms*)Obj)->bHoldDownKeysRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::NewProp_bHoldDownKeysRef = { "bHoldDownKeysRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_DisplayDataWidget_eventHoldDownKeysSetter_Parms), &Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::NewProp_bHoldDownKeysRef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::NewProp_bHoldDownKeysRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "HoldDownKeysSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::SQTE_DisplayDataWidget_eventHoldDownKeysSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventInstantFailureSetter_Parms
		{
			bool bInstantFailureRef;
		};
		static void NewProp_bInstantFailureRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailureRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::NewProp_bInstantFailureRef_SetBit(void* Obj)
	{
		((SQTE_DisplayDataWidget_eventInstantFailureSetter_Parms*)Obj)->bInstantFailureRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::NewProp_bInstantFailureRef = { "bInstantFailureRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_DisplayDataWidget_eventInstantFailureSetter_Parms), &Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::NewProp_bInstantFailureRef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::NewProp_bInstantFailureRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "InstantFailureSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::SQTE_DisplayDataWidget_eventInstantFailureSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventMaxAttemptsToFailCounterSetter_Parms
		{
			int32 MaxAttemptsToFailCounterRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFailCounterRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::NewProp_MaxAttemptsToFailCounterRef = { "MaxAttemptsToFailCounterRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventMaxAttemptsToFailCounterSetter_Parms, MaxAttemptsToFailCounterRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::NewProp_MaxAttemptsToFailCounterRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "MaxAttemptsToFailCounterSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::SQTE_DisplayDataWidget_eventMaxAttemptsToFailCounterSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventMaxAttemptsToFailSetter_Parms
		{
			int32 MaxAttemptsToFailRef;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFailRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::NewProp_MaxAttemptsToFailRef = { "MaxAttemptsToFailRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventMaxAttemptsToFailSetter_Parms, MaxAttemptsToFailRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::NewProp_MaxAttemptsToFailRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "MaxAttemptsToFailSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::SQTE_DisplayDataWidget_eventMaxAttemptsToFailSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventNoInputTimeDelayCounterSetter_Parms
		{
			float NoInputTimeCounterRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeCounterRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::NewProp_NoInputTimeCounterRef = { "NoInputTimeCounterRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventNoInputTimeDelayCounterSetter_Parms, NoInputTimeCounterRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::NewProp_NoInputTimeCounterRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "NoInputTimeDelayCounterSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::SQTE_DisplayDataWidget_eventNoInputTimeDelayCounterSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventNoInputTimeDelaySetter_Parms
		{
			float NoInputTimeDelayRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeDelayRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::NewProp_NoInputTimeDelayRef = { "NoInputTimeDelayRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventNoInputTimeDelaySetter_Parms, NoInputTimeDelayRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::NewProp_NoInputTimeDelayRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "NoInputTimeDelaySetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::SQTE_DisplayDataWidget_eventNoInputTimeDelaySetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics
	{
		struct SQTE_DisplayDataWidget_eventPrintStats_Parms
		{
			FInputData InputRef;
			float NoInputTimeCounter;
			int32 AttemptsToRegressCounter;
			int32 MaxAttemptsToFailCounter;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputRef;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegressCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFailCounter;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_InputRef = { "InputRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventPrintStats_Parms, InputRef), Z_Construct_UScriptStruct_FInputData, METADATA_PARAMS(nullptr, 0) }; // 1017580504
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_NoInputTimeCounter = { "NoInputTimeCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventPrintStats_Parms, NoInputTimeCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_AttemptsToRegressCounter = { "AttemptsToRegressCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventPrintStats_Parms, AttemptsToRegressCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_MaxAttemptsToFailCounter = { "MaxAttemptsToFailCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventPrintStats_Parms, MaxAttemptsToFailCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_InputRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_NoInputTimeCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_AttemptsToRegressCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::NewProp_MaxAttemptsToFailCounter,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "PrintStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::SQTE_DisplayDataWidget_eventPrintStats_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventRegressDistanceSetter_Parms
		{
			float RegressDistanceRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegressDistanceRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::NewProp_RegressDistanceRef = { "RegressDistanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventRegressDistanceSetter_Parms, RegressDistanceRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::NewProp_RegressDistanceRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "RegressDistanceSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::SQTE_DisplayDataWidget_eventRegressDistanceSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventRegressionSetter_Parms
		{
			bool bCanRegress;
		};
		static void NewProp_bCanRegress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegress;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::NewProp_bCanRegress_SetBit(void* Obj)
	{
		((SQTE_DisplayDataWidget_eventRegressionSetter_Parms*)Obj)->bCanRegress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::NewProp_bCanRegress = { "bCanRegress", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_DisplayDataWidget_eventRegressionSetter_Parms), &Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::NewProp_bCanRegress_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::NewProp_bCanRegress,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "RegressionSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::SQTE_DisplayDataWidget_eventRegressionSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventSuccessDistanceSetter_Parms
		{
			float SuccessDistanceRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuccessDistanceRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::NewProp_SuccessDistanceRef = { "SuccessDistanceRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_DisplayDataWidget_eventSuccessDistanceSetter_Parms, SuccessDistanceRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::NewProp_SuccessDistanceRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "SuccessDistanceSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::SQTE_DisplayDataWidget_eventSuccessDistanceSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics
	{
		struct SQTE_DisplayDataWidget_eventTimedStatusSetter_Parms
		{
			bool bTimedRef;
		};
		static void NewProp_bTimedRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimedRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::NewProp_bTimedRef_SetBit(void* Obj)
	{
		((SQTE_DisplayDataWidget_eventTimedStatusSetter_Parms*)Obj)->bTimedRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::NewProp_bTimedRef = { "bTimedRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_DisplayDataWidget_eventTimedStatusSetter_Parms), &Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::NewProp_bTimedRef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::NewProp_bTimedRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_DisplayDataWidget, nullptr, "TimedStatusSetter", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::SQTE_DisplayDataWidget_eventTimedStatusSetter_Parms), Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTE_DisplayDataWidget);
	UClass* Z_Construct_UClass_USQTE_DisplayDataWidget_NoRegister()
	{
		return USQTE_DisplayDataWidget::StaticClass();
	}
	struct Z_Construct_UClass_USQTE_DisplayDataWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_VerticalBox_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Header_VerticalBox;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegressionText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RegressionText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoInputTimeDelayText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoInputTimeDelayText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegressDistanceText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RegressDistanceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsToRegressText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttemptsToRegressText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessDistanceText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuccessDistanceText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantFailureText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantFailureText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttemptToFailText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxAttemptToFailText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimedStatusText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TimedStatusText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldDownKeysText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_HoldDownKeysText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoInputTimeDelayCounterText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NoInputTimeDelayCounterText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsToRegressCounterText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_AttemptsToRegressCounterText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttemptToFailCounterText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_MaxAttemptToFailCounterText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[];
#endif
		static void NewProp_bCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_IndexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_AddInputStats, "AddInputStats" }, // 886581519
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressCounterSetter, "AttemptsToRegressCounterSetter" }, // 554605925
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_AttemptsToRegressSetter, "AttemptsToRegressSetter" }, // 2518466281
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_HoldDownKeysSetter, "HoldDownKeysSetter" }, // 3224073212
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_InstantFailureSetter, "InstantFailureSetter" }, // 2362068614
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailCounterSetter, "MaxAttemptsToFailCounterSetter" }, // 3293427651
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_MaxAttemptsToFailSetter, "MaxAttemptsToFailSetter" }, // 739185660
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelayCounterSetter, "NoInputTimeDelayCounterSetter" }, // 1559429861
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_NoInputTimeDelaySetter, "NoInputTimeDelaySetter" }, // 961274317
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_PrintStats, "PrintStats" }, // 2333534877
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressDistanceSetter, "RegressDistanceSetter" }, // 3191386765
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_RegressionSetter, "RegressionSetter" }, // 609164838
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_SuccessDistanceSetter, "SuccessDistanceSetter" }, // 3356888649
		{ &Z_Construct_UFunction_USQTE_DisplayDataWidget_TimedStatusSetter, "TimedStatusSetter" }, // 1143710794
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTE_DisplayDataWidget.h" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_Header_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetHeader" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_Header_VerticalBox = { "Header_VerticalBox", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, Header_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_Header_VerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_Header_VerticalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressionText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressionText = { "RegressionText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, RegressionText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressionText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressionText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayText = { "NoInputTimeDelayText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, NoInputTimeDelayText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressDistanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressDistanceText = { "RegressDistanceText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, RegressDistanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressDistanceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressDistanceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressText = { "AttemptsToRegressText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, AttemptsToRegressText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_SuccessDistanceText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_SuccessDistanceText = { "SuccessDistanceText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, SuccessDistanceText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_SuccessDistanceText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_SuccessDistanceText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_InstantFailureText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_InstantFailureText = { "InstantFailureText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, InstantFailureText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_InstantFailureText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_InstantFailureText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailText = { "MaxAttemptToFailText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, MaxAttemptToFailText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_TimedStatusText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_TimedStatusText = { "TimedStatusText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, TimedStatusText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_TimedStatusText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_TimedStatusText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_HoldDownKeysText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_HoldDownKeysText = { "HoldDownKeysText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, HoldDownKeysText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_HoldDownKeysText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_HoldDownKeysText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayCounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayCounterText = { "NoInputTimeDelayCounterText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, NoInputTimeDelayCounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayCounterText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayCounterText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressCounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressCounterText = { "AttemptsToRegressCounterText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, AttemptsToRegressCounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressCounterText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressCounterText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailCounterText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "Input Text" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailCounterText = { "MaxAttemptToFailCounterText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, MaxAttemptToFailCounterText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailCounterText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailCounterText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated_MetaData[] = {
		{ "Category", "Creation" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated_SetBit(void* Obj)
	{
		((USQTE_DisplayDataWidget*)Obj)->bCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTE_DisplayDataWidget), &Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_IndexCount_MetaData[] = {
		{ "Category", "Creation" },
		{ "ClamMin", "1" },
		{ "ClampMax", "12" },
		{ "ModuleRelativePath", "Public/SQTE_DisplayDataWidget.h" },
		{ "ToolTip", "Controls the data that is displayed on screen" },
		{ "UIMax", "12" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_IndexCount = { "IndexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_DisplayDataWidget, IndexCount), METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_IndexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_IndexCount_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_Header_VerticalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressionText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_RegressDistanceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_SuccessDistanceText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_InstantFailureText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_TimedStatusText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_HoldDownKeysText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_NoInputTimeDelayCounterText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_AttemptsToRegressCounterText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_MaxAttemptToFailCounterText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_bCreated,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::NewProp_IndexCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTE_DisplayDataWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::ClassParams = {
		&USQTE_DisplayDataWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTE_DisplayDataWidget()
	{
		if (!Z_Registration_Info_UClass_USQTE_DisplayDataWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTE_DisplayDataWidget.OuterSingleton, Z_Construct_UClass_USQTE_DisplayDataWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTE_DisplayDataWidget.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTE_DisplayDataWidget>()
	{
		return USQTE_DisplayDataWidget::StaticClass();
	}
	USQTE_DisplayDataWidget::USQTE_DisplayDataWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTE_DisplayDataWidget);
	USQTE_DisplayDataWidget::~USQTE_DisplayDataWidget() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_DisplayDataWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_DisplayDataWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTE_DisplayDataWidget, USQTE_DisplayDataWidget::StaticClass, TEXT("USQTE_DisplayDataWidget"), &Z_Registration_Info_UClass_USQTE_DisplayDataWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTE_DisplayDataWidget), 547164149U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_DisplayDataWidget_h_579210384(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_DisplayDataWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_DisplayDataWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
