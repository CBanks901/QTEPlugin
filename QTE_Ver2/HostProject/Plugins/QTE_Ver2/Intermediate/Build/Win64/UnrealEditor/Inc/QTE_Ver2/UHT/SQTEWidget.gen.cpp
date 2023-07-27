// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTEWidget.h"
#include "InputCoreTypes.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEWidget() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ConditionalDisplayData_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ContainerWidget_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_DisplayDataWidget_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEOwnerInputComponent_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEStarterComponent_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEWidget();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEWidget_NoRegister();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_KeyResultData();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_QTEInputPath();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	UMG_API UClass* Z_Construct_UClass_UCanvasPanel_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTEWidget::execConditionalFailPreciseRestarter)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalFailPreciseRestarter();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalKeyPressHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalKeyPressHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSubSequenceHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSubSequenceHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSuccesInput)
	{
		P_GET_UBOOL_REF(Z_Param_Out_bCompletedQTE);
		P_GET_UBOOL_REF(Z_Param_Out_bSpawningNewSetUp);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSuccesInput(Z_Param_Out_bCompletedQTE,Z_Param_Out_bSpawningNewSetUp);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalFailInput)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalFailInput();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalPrecisionInput)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalPrecisionInput(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSetUpNextConditionalPrecision)
	{
		P_GET_UBOOL(Z_Param_SecondHalf);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpNextConditionalPrecision(Z_Param_SecondHalf);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execDelayInputHelperRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayInputHelperRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execDelayInputHelper)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_timeRate);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DelayInputHelper(Z_Param_timeRate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSetUpLevelSequencerRef)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpLevelSequencerRef();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSubSequenceContinueRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSubSequenceContinueRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSubSequenceContinue)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSubSequenceContinue();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSetUpNextKeySequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpNextKeySequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSetUpNextPrecisionSequenceRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpNextPrecisionSequenceRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSetUpNextPrecisionSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpNextPrecisionSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execNormalDelay)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NormalDelay();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSuccessfulTimePress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuccessfulTimePress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSlowDownCheck)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SlowDownCheck();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execMaxAttemptsToFailFunction)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->MaxAttemptsToFailFunction();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execFailLogic)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailLogic(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execTerminateQTE)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TerminateQTE();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execNoInputHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->NoInputHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSubSequenceHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SubSequenceHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execSequentialKeyHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SequentialKeyHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execMultiKeyHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->MultiKeyHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execKeyPressHandler)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_DeltaTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyPressHandler(Z_Param_DeltaTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSwitchRemaining)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSwitchRemaining();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execConditionalSwitch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalSwitch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEWidget::execDetermineBranchingPath)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->DetermineBranchingPath();
		P_NATIVE_END;
	}
	void USQTEWidget::StaticRegisterNativesUSQTEWidget()
	{
		UClass* Class = USQTEWidget::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ConditionalFailInput", &USQTEWidget::execConditionalFailInput },
			{ "ConditionalFailPreciseRestarter", &USQTEWidget::execConditionalFailPreciseRestarter },
			{ "ConditionalKeyPressHandler", &USQTEWidget::execConditionalKeyPressHandler },
			{ "ConditionalPrecisionInput", &USQTEWidget::execConditionalPrecisionInput },
			{ "ConditionalSubSequenceContinue", &USQTEWidget::execConditionalSubSequenceContinue },
			{ "ConditionalSubSequenceContinueRemaining", &USQTEWidget::execConditionalSubSequenceContinueRemaining },
			{ "ConditionalSubSequenceHandler", &USQTEWidget::execConditionalSubSequenceHandler },
			{ "ConditionalSuccesInput", &USQTEWidget::execConditionalSuccesInput },
			{ "ConditionalSwitch", &USQTEWidget::execConditionalSwitch },
			{ "ConditionalSwitchRemaining", &USQTEWidget::execConditionalSwitchRemaining },
			{ "DelayInputHelper", &USQTEWidget::execDelayInputHelper },
			{ "DelayInputHelperRemaining", &USQTEWidget::execDelayInputHelperRemaining },
			{ "DetermineBranchingPath", &USQTEWidget::execDetermineBranchingPath },
			{ "FailLogic", &USQTEWidget::execFailLogic },
			{ "KeyPressHandler", &USQTEWidget::execKeyPressHandler },
			{ "MaxAttemptsToFailFunction", &USQTEWidget::execMaxAttemptsToFailFunction },
			{ "MultiKeyHandler", &USQTEWidget::execMultiKeyHandler },
			{ "NoInputHandler", &USQTEWidget::execNoInputHandler },
			{ "NormalDelay", &USQTEWidget::execNormalDelay },
			{ "SequentialKeyHandler", &USQTEWidget::execSequentialKeyHandler },
			{ "SetUpLevelSequencerRef", &USQTEWidget::execSetUpLevelSequencerRef },
			{ "SetUpNextConditionalPrecision", &USQTEWidget::execSetUpNextConditionalPrecision },
			{ "SetUpNextKeySequence", &USQTEWidget::execSetUpNextKeySequence },
			{ "SetUpNextPrecisionSequence", &USQTEWidget::execSetUpNextPrecisionSequence },
			{ "SetUpNextPrecisionSequenceRemaining", &USQTEWidget::execSetUpNextPrecisionSequenceRemaining },
			{ "SlowDownCheck", &USQTEWidget::execSlowDownCheck },
			{ "SubSequenceHandler", &USQTEWidget::execSubSequenceHandler },
			{ "SuccessfulTimePress", &USQTEWidget::execSuccessfulTimePress },
			{ "TerminateQTE", &USQTEWidget::execTerminateQTE },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalFailInput", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalFailInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalFailInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalFailPreciseRestarter", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalKeyPressHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics
	{
		struct SQTEWidget_eventConditionalPrecisionInput_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventConditionalPrecisionInput_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalPrecisionInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::SQTEWidget_eventConditionalPrecisionInput_Parms), Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSubSequenceContinue", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSubSequenceContinueRemaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics
	{
		struct SQTEWidget_eventConditionalSubSequenceHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventConditionalSubSequenceHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSubSequenceHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::SQTEWidget_eventConditionalSubSequenceHandler_Parms), Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics
	{
		struct SQTEWidget_eventConditionalSuccesInput_Parms
		{
			bool bCompletedQTE;
			bool bSpawningNewSetUp;
		};
		static void NewProp_bCompletedQTE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedQTE;
		static void NewProp_bSpawningNewSetUp_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSpawningNewSetUp;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bCompletedQTE_SetBit(void* Obj)
	{
		((SQTEWidget_eventConditionalSuccesInput_Parms*)Obj)->bCompletedQTE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bCompletedQTE = { "bCompletedQTE", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEWidget_eventConditionalSuccesInput_Parms), &Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bCompletedQTE_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bSpawningNewSetUp_SetBit(void* Obj)
	{
		((SQTEWidget_eventConditionalSuccesInput_Parms*)Obj)->bSpawningNewSetUp = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bSpawningNewSetUp = { "bSpawningNewSetUp", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEWidget_eventConditionalSuccesInput_Parms), &Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bSpawningNewSetUp_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bCompletedQTE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::NewProp_bSpawningNewSetUp,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSuccesInput", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::SQTEWidget_eventConditionalSuccesInput_Parms), Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSwitch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSwitch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSwitch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "ConditionalSwitchRemaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics
	{
		struct SQTEWidget_eventDelayInputHelper_Parms
		{
			float timeRate;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_timeRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::NewProp_timeRate = { "timeRate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventDelayInputHelper_Parms, timeRate), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::NewProp_timeRate,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "DelayInputHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::SQTEWidget_eventDelayInputHelper_Parms), Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_DelayInputHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_DelayInputHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "DelayInputHelperRemaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "DetermineBranchingPath", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_FailLogic_Statics
	{
		struct SQTEWidget_eventFailLogic_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventFailLogic_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "FailLogic", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::SQTEWidget_eventFailLogic_Parms), Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_FailLogic()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_FailLogic_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics
	{
		struct SQTEWidget_eventKeyPressHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventKeyPressHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "KeyPressHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::SQTEWidget_eventKeyPressHandler_Parms), Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_KeyPressHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_KeyPressHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics
	{
		struct SQTEWidget_eventMaxAttemptsToFailFunction_Parms
		{
			bool ReturnValue;
		};
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEWidget_eventMaxAttemptsToFailFunction_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEWidget_eventMaxAttemptsToFailFunction_Parms), &Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "MaxAttemptsToFailFunction", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::SQTEWidget_eventMaxAttemptsToFailFunction_Parms), Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics
	{
		struct SQTEWidget_eventMultiKeyHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventMultiKeyHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "MultiKeyHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::SQTEWidget_eventMultiKeyHandler_Parms), Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_MultiKeyHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_MultiKeyHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics
	{
		struct SQTEWidget_eventNoInputHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventNoInputHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "NoInputHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::SQTEWidget_eventNoInputHandler_Parms), Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_NoInputHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_NoInputHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "NormalDelay", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_NormalDelay()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_NormalDelay_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics
	{
		struct SQTEWidget_eventSequentialKeyHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventSequentialKeyHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SequentialKeyHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::SQTEWidget_eventSequentialKeyHandler_Parms), Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SetUpLevelSequencerRef", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics
	{
		struct SQTEWidget_eventSetUpNextConditionalPrecision_Parms
		{
			bool SecondHalf;
		};
		static void NewProp_SecondHalf_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_SecondHalf;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::NewProp_SecondHalf_SetBit(void* Obj)
	{
		((SQTEWidget_eventSetUpNextConditionalPrecision_Parms*)Obj)->SecondHalf = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::NewProp_SecondHalf = { "SecondHalf", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEWidget_eventSetUpNextConditionalPrecision_Parms), &Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::NewProp_SecondHalf_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::NewProp_SecondHalf,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SetUpNextConditionalPrecision", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::SQTEWidget_eventSetUpNextConditionalPrecision_Parms), Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SetUpNextKeySequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SetUpNextPrecisionSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SetUpNextPrecisionSequenceRemaining", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SlowDownCheck", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SlowDownCheck()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SlowDownCheck_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics
	{
		struct SQTEWidget_eventSubSequenceHandler_Parms
		{
			float DeltaTimeRef;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DeltaTimeRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::NewProp_DeltaTimeRef = { "DeltaTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEWidget_eventSubSequenceHandler_Parms, DeltaTimeRef), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::NewProp_DeltaTimeRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SubSequenceHandler", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::SQTEWidget_eventSubSequenceHandler_Parms), Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SubSequenceHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SubSequenceHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "SuccessfulTimePress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics::Function_MetaDataParams[] = {
		{ "Category", "QTE Termination" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEWidget, nullptr, "TerminateQTE", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEWidget_TerminateQTE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEWidget_TerminateQTE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEWidget);
	UClass* Z_Construct_UClass_USQTEWidget_NoRegister()
	{
		return USQTEWidget::StaticClass();
	}
	struct Z_Construct_UClass_USQTEWidget_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Header_Canvas_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Header_Canvas;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_Container_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_Container_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_OptionalDisplay_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_OptionalDisplay_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTE_ConditionalOptionalDisplay_Widget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTE_ConditionalOptionalDisplay_Widget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PC_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTEInputComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTEInputComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bReinitialize_MetaData[];
#endif
		static void NewProp_bReinitialize_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bReinitialize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDisplayHelperWidget_MetaData[];
#endif
		static void NewProp_bShouldDisplayHelperWidget_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDisplayHelperWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CurrentTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceMainCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceMainCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTEStarterComp_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_QTEStarterComp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputRef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_InputRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LoopingQTERef_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_LoopingQTERef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoInputTimeDelayCounter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeDelayCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsToRegressCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegressCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttemptsToFailCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFailCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFailCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFailCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSuccessCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSuccessCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DataLength_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_DataLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NextThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NextThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessThresholdDelta_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessThresholdDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailThresholdDelta_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FailThresholdDelta;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDataIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentDataIndex;
		static const UECodeGen_Private::FBytePropertyParams NewProp_Result_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Result_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_Result;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bComplete_MetaData[];
#endif
		static void NewProp_bComplete_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bComplete;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsDynamicRef_MetaData[];
#endif
		static void NewProp_bIsDynamicRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamicRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstantFailureRef_MetaData[];
#endif
		static void NewProp_bInstantFailureRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailureRef;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputPath_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputPath_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputPath;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequencerToPlayRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequencerToPlayRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bActivateGracePeriod_MetaData[];
#endif
		static void NewProp_bActivateGracePeriod_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bActivateGracePeriod;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ErrorDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ErrorDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GraceWindow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_GraceWindow;
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPrecision_MetaData[];
#endif
		static void NewProp_bHasPrecision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPrecision;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentKeyIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentKeyIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceSize_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceNewKeyCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceNewKeyCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PrecisionTimeRemaining_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PrecisionTimeRemaining;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTimeRef_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTimeRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEWidget_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEWidget_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalFailInput, "ConditionalFailInput" }, // 2734000875
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalFailPreciseRestarter, "ConditionalFailPreciseRestarter" }, // 3159338313
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalKeyPressHandler, "ConditionalKeyPressHandler" }, // 895949497
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalPrecisionInput, "ConditionalPrecisionInput" }, // 498798394
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinue, "ConditionalSubSequenceContinue" }, // 3669941681
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceContinueRemaining, "ConditionalSubSequenceContinueRemaining" }, // 2899372600
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSubSequenceHandler, "ConditionalSubSequenceHandler" }, // 1808622668
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSuccesInput, "ConditionalSuccesInput" }, // 1417541702
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSwitch, "ConditionalSwitch" }, // 1514505100
		{ &Z_Construct_UFunction_USQTEWidget_ConditionalSwitchRemaining, "ConditionalSwitchRemaining" }, // 1463762296
		{ &Z_Construct_UFunction_USQTEWidget_DelayInputHelper, "DelayInputHelper" }, // 3280495468
		{ &Z_Construct_UFunction_USQTEWidget_DelayInputHelperRemaining, "DelayInputHelperRemaining" }, // 2782350990
		{ &Z_Construct_UFunction_USQTEWidget_DetermineBranchingPath, "DetermineBranchingPath" }, // 2295010801
		{ &Z_Construct_UFunction_USQTEWidget_FailLogic, "FailLogic" }, // 1762357169
		{ &Z_Construct_UFunction_USQTEWidget_KeyPressHandler, "KeyPressHandler" }, // 2804333240
		{ &Z_Construct_UFunction_USQTEWidget_MaxAttemptsToFailFunction, "MaxAttemptsToFailFunction" }, // 851816613
		{ &Z_Construct_UFunction_USQTEWidget_MultiKeyHandler, "MultiKeyHandler" }, // 2529167673
		{ &Z_Construct_UFunction_USQTEWidget_NoInputHandler, "NoInputHandler" }, // 1948703494
		{ &Z_Construct_UFunction_USQTEWidget_NormalDelay, "NormalDelay" }, // 3048048423
		{ &Z_Construct_UFunction_USQTEWidget_SequentialKeyHandler, "SequentialKeyHandler" }, // 4140706571
		{ &Z_Construct_UFunction_USQTEWidget_SetUpLevelSequencerRef, "SetUpLevelSequencerRef" }, // 1070938934
		{ &Z_Construct_UFunction_USQTEWidget_SetUpNextConditionalPrecision, "SetUpNextConditionalPrecision" }, // 1780833257
		{ &Z_Construct_UFunction_USQTEWidget_SetUpNextKeySequence, "SetUpNextKeySequence" }, // 99637863
		{ &Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequence, "SetUpNextPrecisionSequence" }, // 3003704016
		{ &Z_Construct_UFunction_USQTEWidget_SetUpNextPrecisionSequenceRemaining, "SetUpNextPrecisionSequenceRemaining" }, // 3662030762
		{ &Z_Construct_UFunction_USQTEWidget_SlowDownCheck, "SlowDownCheck" }, // 3076238090
		{ &Z_Construct_UFunction_USQTEWidget_SubSequenceHandler, "SubSequenceHandler" }, // 3220159280
		{ &Z_Construct_UFunction_USQTEWidget_SuccessfulTimePress, "SuccessfulTimePress" }, // 1714877988
		{ &Z_Construct_UFunction_USQTEWidget_TerminateQTE, "TerminateQTE" }, // 3284862121
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTEWidget.h" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_Header_Canvas_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_Header_Canvas = { "Header_Canvas", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, Header_Canvas), Z_Construct_UClass_UCanvasPanel_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_Header_Canvas_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_Header_Canvas_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_Container_Widget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_Container_Widget = { "QTE_Container_Widget", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, QTE_Container_Widget), Z_Construct_UClass_USQTE_ContainerWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_Container_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_Container_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_OptionalDisplay_Widget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_OptionalDisplay_Widget = { "QTE_OptionalDisplay_Widget", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, QTE_OptionalDisplay_Widget), Z_Construct_UClass_USQTE_DisplayDataWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_OptionalDisplay_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_OptionalDisplay_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_ConditionalOptionalDisplay_Widget_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "WidgetLayout" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_ConditionalOptionalDisplay_Widget = { "QTE_ConditionalOptionalDisplay_Widget", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, QTE_ConditionalOptionalDisplay_Widget), Z_Construct_UClass_USQTE_ConditionalDisplayData_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_ConditionalOptionalDisplay_Widget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_ConditionalOptionalDisplay_Widget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_PC_MetaData[] = {
		{ "Category", "PC" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PC_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PC_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEInputComp_MetaData[] = {
		{ "Category", "OwnerInput" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEInputComp = { "QTEInputComp", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, QTEInputComp), Z_Construct_UClass_USQTEOwnerInputComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEInputComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEInputComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Sequence Play Rate" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, PlayRate), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize_MetaData[] = {
		{ "Category", "Reinitialize" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "Used to pause Tick temporarily. Should be changed back to false when ready to enable tick." },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bReinitialize = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize = { "bReinitialize", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget_MetaData[] = {
		{ "Category", "Enable Helper widget UI" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "This can only be changed via console commands. Type 'r.bShouldDisplayHelperWidget = true'" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bShouldDisplayHelperWidget = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget = { "bShouldDisplayHelperWidget", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentTime_MetaData[] = {
		{ "Category", "Time" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentTime = { "CurrentTime", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentTime), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_TimeLimit_MetaData[] = {
		{ "Category", "Exposed Variables | Sequence QTE Data" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_TimeLimit = { "TimeLimit", nullptr, (EPropertyFlags)0x0011000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, TimeLimit), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_TimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_TimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceMainCounter_MetaData[] = {
		{ "Category", "Exposed Variables | Sequence QTE Data" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceMainCounter = { "SequenceMainCounter", nullptr, (EPropertyFlags)0x0011000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, SequenceMainCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceMainCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceMainCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEStarterComp_MetaData[] = {
		{ "Category", "Exposed Variables | QTE Start Component" },
		{ "EditInline", "true" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEStarterComp = { "QTEStarterComp", nullptr, (EPropertyFlags)0x00110000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, QTEStarterComp), Z_Construct_UClass_USQTEStarterComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEStarterComp_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEStarterComp_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputRef_MetaData[] = {
		{ "Category", "Exposed Variables | Normal QTE Data" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputRef = { "InputRef", nullptr, (EPropertyFlags)0x0011000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, InputRef), Z_Construct_UScriptStruct_FInputData, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputRef_MetaData)) }; // 1017580504
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_LoopingQTERef_MetaData[] = {
		{ "Category", "Exposed Variables | Looping QTE Data" },
		{ "ExposeOnSpawn", "" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_LoopingQTERef = { "LoopingQTERef", nullptr, (EPropertyFlags)0x0011000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, LoopingQTERef), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_LoopingQTERef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_LoopingQTERef_MetaData)) }; // 1464872324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_NoInputTimeDelayCounter_MetaData[] = {
		{ "Category", "Normal QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_NoInputTimeDelayCounter = { "NoInputTimeDelayCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, NoInputTimeDelayCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_NoInputTimeDelayCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_NoInputTimeDelayCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_AttemptsToRegressCounter_MetaData[] = {
		{ "Category", "Normal QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_AttemptsToRegressCounter = { "AttemptsToRegressCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, AttemptsToRegressCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_AttemptsToRegressCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_AttemptsToRegressCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_MaxAttemptsToFailCounter_MetaData[] = {
		{ "Category", "Normal QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_MaxAttemptsToFailCounter = { "MaxAttemptsToFailCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, MaxAttemptsToFailCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_MaxAttemptsToFailCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_MaxAttemptsToFailCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentFailCounter_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentFailCounter = { "CurrentFailCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentFailCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentFailCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentFailCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentSuccessCounter_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentSuccessCounter = { "CurrentSuccessCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentSuccessCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentSuccessCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentSuccessCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_DataLength_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "Total number of input sections within a looping qte" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_DataLength = { "DataLength", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, DataLength), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_DataLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_DataLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_NextThreshold_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "The threshold of the next input section within a list" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_NextThreshold = { "NextThreshold", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, NextThreshold), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_NextThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_NextThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_SuccessThresholdDelta_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_SuccessThresholdDelta = { "SuccessThresholdDelta", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, SuccessThresholdDelta), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SuccessThresholdDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SuccessThresholdDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_FailThresholdDelta_MetaData[] = {
		{ "Category", "Looping QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_FailThresholdDelta = { "FailThresholdDelta", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, FailThresholdDelta), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_FailThresholdDelta_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_FailThresholdDelta_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentDataIndex_MetaData[] = {
		{ "Category", "QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentDataIndex = { "CurrentDataIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentDataIndex), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentDataIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentDataIndex_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result_MetaData[] = {
		{ "Category", "Widget Status" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, Result), Z_Construct_UEnum_QTE_Ver2_KeyResultData, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result_MetaData)) }; // 3641111644
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete_MetaData[] = {
		{ "Category", "Widget Status" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bComplete = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete = { "bComplete", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef_MetaData[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bIsDynamicRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef = { "bIsDynamicRef", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef_MetaData[] = {
		{ "Category", "QTE Data" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bInstantFailureRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef = { "bInstantFailureRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef_MetaData)) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath_MetaData[] = {
		{ "Category", "QTE Data | Path" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath = { "InputPath", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, InputPath), Z_Construct_UEnum_QTE_Ver2_QTEInputPath, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath_MetaData)) }; // 2536162723
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_LevelSequencerToPlayRef_MetaData[] = {
		{ "Category", "QTE Level Sequence Actor" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_LevelSequencerToPlayRef = { "LevelSequencerToPlayRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, LevelSequencerToPlayRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_LevelSequencerToPlayRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_LevelSequencerToPlayRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod_MetaData[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bActivateGracePeriod = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod = { "bActivateGracePeriod", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_ErrorDelay_MetaData[] = {
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_ErrorDelay = { "ErrorDelay", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, ErrorDelay), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_ErrorDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_ErrorDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_GraceWindow_MetaData[] = {
		{ "Category", "QTE Input | Grace" },
		{ "ClampMin", "0.250000" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "The longer this is the more time you have as a buffer until input is recognized again" },
		{ "UIMin", "0.250000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_GraceWindow = { "GraceWindow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, GraceWindow), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_GraceWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_GraceWindow_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys_Inner = { "CurrentKeys", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys_MetaData[] = {
		{ "Category", "QTE Input | Current Key Presses" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys = { "CurrentKeys", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision_MetaData[] = {
		{ "Category", "QTE Data | Precision" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	void Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision_SetBit(void* Obj)
	{
		((USQTEWidget*)Obj)->bHasPrecision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision = { "bHasPrecision", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEWidget), &Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeyIndex_MetaData[] = {
		{ "Category", "QTE Data | Sequential" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeyIndex = { "CurrentKeyIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentKeyIndex), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeyIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeyIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceSize_MetaData[] = {
		{ "Category", "QTE Data | Sequential" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceSize = { "SequenceSize", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, SequenceSize), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceNewKeyCounter_MetaData[] = {
		{ "Category", "QTE Data | Sequential" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
		{ "ToolTip", "Once keys go beyond this number, this acts as a counter that adds new keys slowly" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceNewKeyCounter = { "SequenceNewKeyCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, SequenceNewKeyCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceNewKeyCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceNewKeyCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_PrecisionTimeRemaining_MetaData[] = {
		{ "Category", "QTE Data | Sequntial" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_PrecisionTimeRemaining = { "PrecisionTimeRemaining", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, PrecisionTimeRemaining), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PrecisionTimeRemaining_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_PrecisionTimeRemaining_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_HoldTimeRef_MetaData[] = {
		{ "Category", "QTE Data | Subsequence" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_HoldTimeRef = { "HoldTimeRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, HoldTimeRef), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_HoldTimeRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_HoldTimeRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentIndex_MetaData[] = {
		{ "Category", "QTE Data | Subsequence" },
		{ "ModuleRelativePath", "Public/SQTEWidget.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEWidget, CurrentIndex), METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentIndex_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTEWidget_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_Header_Canvas,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_Container_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_OptionalDisplay_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTE_ConditionalOptionalDisplay_Widget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEInputComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bReinitialize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bShouldDisplayHelperWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_TimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceMainCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_QTEStarterComp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_LoopingQTERef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_NoInputTimeDelayCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_AttemptsToRegressCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_MaxAttemptsToFailCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentFailCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentSuccessCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_DataLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_NextThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_SuccessThresholdDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_FailThresholdDelta,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bComplete,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bIsDynamicRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bInstantFailureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_InputPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_LevelSequencerToPlayRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bActivateGracePeriod,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_ErrorDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_GraceWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_bHasPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentKeyIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_SequenceNewKeyCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_PrecisionTimeRemaining,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_HoldTimeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEWidget_Statics::NewProp_CurrentIndex,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEWidget_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEWidget>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEWidget_Statics::ClassParams = {
		&USQTEWidget::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTEWidget_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::PropPointers),
		0,
		0x00B010A1u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEWidget_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEWidget_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEWidget()
	{
		if (!Z_Registration_Info_UClass_USQTEWidget.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEWidget.OuterSingleton, Z_Construct_UClass_USQTEWidget_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEWidget.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTEWidget>()
	{
		return USQTEWidget::StaticClass();
	}
	USQTEWidget::USQTEWidget(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEWidget);
	USQTEWidget::~USQTEWidget() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEWidget, USQTEWidget::StaticClass, TEXT("USQTEWidget"), &Z_Registration_Info_UClass_USQTEWidget, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEWidget), 1494982885U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_3956981106(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
