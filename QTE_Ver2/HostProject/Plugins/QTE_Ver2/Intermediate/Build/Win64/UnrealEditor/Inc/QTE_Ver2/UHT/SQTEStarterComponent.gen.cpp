// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTEStarterComponent.h"
#include "../../Source/Runtime/Engine/Classes/Engine/TimerHandle.h"
#include "InputCoreTypes.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEStarterComponent() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEActorBinder_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEStarterComponent();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEStarterComponent_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEWidget_NoRegister();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_KeyResultData();
	QTE_VER2_API UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature();
	QTE_VER2_API UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FQTEInputDataTable();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FTimeSequenceHelper();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	struct Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics
	{
		struct _Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms
		{
			bool bFinishedQTE;
		};
		static void NewProp_bFinishedQTE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishedQTE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::NewProp_bFinishedQTE_SetBit(void* Obj)
	{
		((_Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms*)Obj)->bFinishedQTE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::NewProp_bFinishedQTE = { "bFinishedQTE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms), &Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::NewProp_bFinishedQTE_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::NewProp_bFinishedQTE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QTE_Ver2, nullptr, "OnQTEFinishedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::_Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms), Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQTEFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQTEFinishedDelegate, bool bFinishedQTE)
{
	struct _Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms
	{
		bool bFinishedQTE;
	};
	_Script_QTE_Ver2_eventOnQTEFinishedDelegate_Parms Parms;
	Parms.bFinishedQTE=bFinishedQTE ? true : false;
	OnQTEFinishedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	struct Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics
	{
		struct _Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms
		{
			bool bStartedQTE;
		};
		static void NewProp_bStartedQTE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartedQTE;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::NewProp_bStartedQTE_SetBit(void* Obj)
	{
		((_Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms*)Obj)->bStartedQTE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::NewProp_bStartedQTE = { "bStartedQTE", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(_Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms), &Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::NewProp_bStartedQTE_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::NewProp_bStartedQTE,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::FuncParams = { (UObject*(*)())Z_Construct_UPackage__Script_QTE_Ver2, nullptr, "OnQTEStartedDelegate__DelegateSignature", nullptr, nullptr, sizeof(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::_Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms), Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00130000, 0, 0, METADATA_PARAMS(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature_Statics::FuncParams);
		}
		return ReturnFunction;
	}
void FOnQTEStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQTEStartedDelegate, bool bStartedQTE)
{
	struct _Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms
	{
		bool bStartedQTE;
	};
	_Script_QTE_Ver2_eventOnQTEStartedDelegate_Parms Parms;
	Parms.bStartedQTE=bStartedQTE ? true : false;
	OnQTEStartedDelegate.ProcessMulticastDelegate<UObject>(&Parms);
}
	DEFINE_FUNCTION(USQTEStarterComponent::execGetDataTableAsset)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FQTEInputDataTable*)Z_Param__Result=P_THIS->GetDataTableAsset();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execBindOpeningData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindOpeningData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execFailedDataTableRecord)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTableToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->FailedDataTableRecord(Z_Param_DataTableToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execCheckDataTable)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTableToCheck);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CheckDataTable(Z_Param_DataTableToCheck);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execStartQTE)
	{
		P_GET_OBJECT(UDataTable,Z_Param_RefTable);
		P_GET_PROPERTY(FNameProperty,Z_Param_StartingRow);
		P_GET_TMAP(FName,AActor*,Z_Param_ActorsToBind);
		P_GET_OBJECT(UClass,Z_Param_ActorBinderClass);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->StartQTE(Z_Param_RefTable,Z_Param_StartingRow,Z_Param_ActorsToBind,Z_Param_ActorBinderClass);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execInitializeQTE)
	{
		P_GET_UBOOL(Z_Param_bAutomatic);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->InitializeQTE(Z_Param_bAutomatic);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execFinishedInputBranch)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinishedInputBranch();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execInputSequence)
	{
		P_GET_UBOOL(Z_Param_bSuccess);
		P_GET_UBOOL(Z_Param_bStartKeySpawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->InputSequence(Z_Param_bSuccess,Z_Param_bStartKeySpawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execBindAllSequenceActors)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BindAllSequenceActors();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execSuccessNormalKeyPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuccessNormalKeyPress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execFailNormalKeyPress)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailNormalKeyPress();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execKeyEventNormal)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyEventNormal();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execFailSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FailSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execSuccessSequence)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SuccessSequence();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execSequenceTimerEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SequenceTimerEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execTimedSequenceEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->TimedSequenceEvent();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execFinshedOpening)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->FinshedOpening();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execSetInitialSequenceData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetInitialSequenceData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execBranchToNewPath)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_Fail);
		P_GET_PROPERTY(FNameProperty,Z_Param_Success);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->BranchToNewPath(Z_Param_Fail,Z_Param_Success);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execExecutionHandler)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ExecutionHandler();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execCompletedSequenceHelper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->CompletedSequenceHelper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execConditionalQTEFailure)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalQTEFailure();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execConditionalQTESuccess)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ConditionalQTESuccess();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execConditionalQTEEventHelper)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(KeyResultData*)Z_Param__Result=P_THIS->ConditionalQTEEventHelper();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execRecordRelativeTransform)
	{
		P_GET_STRUCT(FTransform,Z_Param_NewTransform);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->RecordRelativeTransform(Z_Param_NewTransform);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execResetCameraLocation)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_Timer);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetCameraLocation(Z_Param_Timer);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEStarterComponent::execConditionalQTEEvent)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(KeyResultData*)Z_Param__Result=P_THIS->ConditionalQTEEvent_Implementation();
		P_NATIVE_END;
	}
	struct SQTEStarterComponent_eventConditionalQTEEvent_Parms
	{
		KeyResultData ReturnValue;

		/** Constructor, initializes return property only **/
		SQTEStarterComponent_eventConditionalQTEEvent_Parms()
			: ReturnValue((KeyResultData)0)
		{
		}
	};
	static FName NAME_USQTEStarterComponent_CompletedSequence = FName(TEXT("CompletedSequence"));
	void USQTEStarterComponent::CompletedSequence()
	{
		ProcessEvent(FindFunctionChecked(NAME_USQTEStarterComponent_CompletedSequence),NULL);
	}
	static FName NAME_USQTEStarterComponent_ConditionalQTEEvent = FName(TEXT("ConditionalQTEEvent"));
	KeyResultData USQTEStarterComponent::ConditionalQTEEvent()
	{
		SQTEStarterComponent_eventConditionalQTEEvent_Parms Parms;
		ProcessEvent(FindFunctionChecked(NAME_USQTEStarterComponent_ConditionalQTEEvent),&Parms);
		return Parms.ReturnValue;
	}
	void USQTEStarterComponent::StaticRegisterNativesUSQTEStarterComponent()
	{
		UClass* Class = USQTEStarterComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindAllSequenceActors", &USQTEStarterComponent::execBindAllSequenceActors },
			{ "BindOpeningData", &USQTEStarterComponent::execBindOpeningData },
			{ "BranchToNewPath", &USQTEStarterComponent::execBranchToNewPath },
			{ "CheckDataTable", &USQTEStarterComponent::execCheckDataTable },
			{ "CompletedSequenceHelper", &USQTEStarterComponent::execCompletedSequenceHelper },
			{ "ConditionalQTEEvent", &USQTEStarterComponent::execConditionalQTEEvent },
			{ "ConditionalQTEEventHelper", &USQTEStarterComponent::execConditionalQTEEventHelper },
			{ "ConditionalQTEFailure", &USQTEStarterComponent::execConditionalQTEFailure },
			{ "ConditionalQTESuccess", &USQTEStarterComponent::execConditionalQTESuccess },
			{ "ExecutionHandler", &USQTEStarterComponent::execExecutionHandler },
			{ "FailedDataTableRecord", &USQTEStarterComponent::execFailedDataTableRecord },
			{ "FailNormalKeyPress", &USQTEStarterComponent::execFailNormalKeyPress },
			{ "FailSequence", &USQTEStarterComponent::execFailSequence },
			{ "FinishedInputBranch", &USQTEStarterComponent::execFinishedInputBranch },
			{ "FinshedOpening", &USQTEStarterComponent::execFinshedOpening },
			{ "GetDataTableAsset", &USQTEStarterComponent::execGetDataTableAsset },
			{ "InitializeQTE", &USQTEStarterComponent::execInitializeQTE },
			{ "InputSequence", &USQTEStarterComponent::execInputSequence },
			{ "KeyEventNormal", &USQTEStarterComponent::execKeyEventNormal },
			{ "RecordRelativeTransform", &USQTEStarterComponent::execRecordRelativeTransform },
			{ "ResetCameraLocation", &USQTEStarterComponent::execResetCameraLocation },
			{ "SequenceTimerEvent", &USQTEStarterComponent::execSequenceTimerEvent },
			{ "SetInitialSequenceData", &USQTEStarterComponent::execSetInitialSequenceData },
			{ "StartQTE", &USQTEStarterComponent::execStartQTE },
			{ "SuccessNormalKeyPress", &USQTEStarterComponent::execSuccessNormalKeyPress },
			{ "SuccessSequence", &USQTEStarterComponent::execSuccessSequence },
			{ "TimedSequenceEvent", &USQTEStarterComponent::execTimedSequenceEvent },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "BindAllSequenceActors", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics
	{
		struct SQTEStarterComponent_eventBindOpeningData_Parms
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
	void Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventBindOpeningData_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventBindOpeningData_Parms), &Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "BindOpeningData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::SQTEStarterComponent_eventBindOpeningData_Parms), Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics
	{
		struct SQTEStarterComponent_eventBranchToNewPath_Parms
		{
			FName Fail;
			FName Success;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_Fail;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Success;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::NewProp_Fail = { "Fail", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventBranchToNewPath_Parms, Fail), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventBranchToNewPath_Parms, Success), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::NewProp_Fail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::NewProp_Success,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "BranchToNewPath", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::SQTEStarterComponent_eventBranchToNewPath_Parms), Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics
	{
		struct SQTEStarterComponent_eventCheckDataTable_Parms
		{
			UDataTable* DataTableToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTableToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_DataTableToCheck = { "DataTableToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventCheckDataTable_Parms, DataTableToCheck), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventCheckDataTable_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventCheckDataTable_Parms), &Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_DataTableToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "CheckDataTable", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::SQTEStarterComponent_eventCheckDataTable_Parms), Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wrap Up" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "EndOfQTE?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "CompletedSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x08080800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics
	{
		struct SQTEStarterComponent_eventCompletedSequenceHelper_Parms
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
	void Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventCompletedSequenceHelper_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventCompletedSequenceHelper_Parms), &Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Wrap Up" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "CinematicOnly" },
		{ "ToolTip", "If yes this is an end to the QTE" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "CompletedSequenceHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::SQTEStarterComponent_eventCompletedSequenceHelper_Parms), Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics
	{
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventConditionalQTEEvent_Parms, ReturnValue), Z_Construct_UEnum_QTE_Ver2_KeyResultData, METADATA_PARAMS(nullptr, 0) }; // 3641111644
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Widget | Conditional" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "KeyResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ConditionalQTEEvent", nullptr, nullptr, sizeof(SQTEStarterComponent_eventConditionalQTEEvent_Parms), Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C080C00, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics
	{
		struct SQTEStarterComponent_eventConditionalQTEEventHelper_Parms
		{
			KeyResultData ReturnValue;
		};
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventConditionalQTEEventHelper_Parms, ReturnValue), Z_Construct_UEnum_QTE_Ver2_KeyResultData, METADATA_PARAMS(nullptr, 0) }; // 3641111644
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::Function_MetaDataParams[] = {
		{ "Category", "Input Widget | Conditional" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "KeyResult" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ConditionalQTEEventHelper", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::SQTEStarterComponent_eventConditionalQTEEventHelper_Parms), Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ConditionalQTEFailure", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ConditionalQTESuccess", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ExecutionHandler", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics
	{
		struct SQTEStarterComponent_eventFailedDataTableRecord_Parms
		{
			UDataTable* DataTableToCheck;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTableToCheck;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_DataTableToCheck = { "DataTableToCheck", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventFailedDataTableRecord_Parms, DataTableToCheck), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventFailedDataTableRecord_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventFailedDataTableRecord_Parms), &Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_DataTableToCheck,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "FailedDataTableRecord", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::SQTEStarterComponent_eventFailedDataTableRecord_Parms), Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "FailNormalKeyPress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "FailSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_FailSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_FailSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "FinishedInputBranch", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "FinshedOpening", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics
	{
		struct SQTEStarterComponent_eventGetDataTableAsset_Parms
		{
			FQTEInputDataTable ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventGetDataTableAsset_Parms, ReturnValue), Z_Construct_UScriptStruct_FQTEInputDataTable, METADATA_PARAMS(nullptr, 0) }; // 4252287483
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::Function_MetaDataParams[] = {
		{ "Category", "Data Table Assist" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "QTEData" },
		{ "ToolTip", "Current Row Name should be set to something before this is called" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "GetDataTableAsset", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::SQTEStarterComponent_eventGetDataTableAsset_Parms), Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics
	{
		struct SQTEStarterComponent_eventInitializeQTE_Parms
		{
			bool bAutomatic;
			bool ReturnValue;
		};
		static void NewProp_bAutomatic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAutomatic;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_bAutomatic_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventInitializeQTE_Parms*)Obj)->bAutomatic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_bAutomatic = { "bAutomatic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventInitializeQTE_Parms), &Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_bAutomatic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventInitializeQTE_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventInitializeQTE_Parms), &Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_bAutomatic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::Function_MetaDataParams[] = {
		{ "Category", "QTE Initialization | Prerequisites" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "Initialized?" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "InitializeQTE", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::SQTEStarterComponent_eventInitializeQTE_Parms), Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics
	{
		struct SQTEStarterComponent_eventInputSequence_Parms
		{
			bool bSuccess;
			bool bStartKeySpawn;
		};
		static void NewProp_bSuccess_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccess;
		static void NewProp_bStartKeySpawn_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartKeySpawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bSuccess_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventInputSequence_Parms*)Obj)->bSuccess = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bSuccess = { "bSuccess", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventInputSequence_Parms), &Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bSuccess_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bStartKeySpawn_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventInputSequence_Parms*)Obj)->bStartKeySpawn = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bStartKeySpawn = { "bStartKeySpawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventInputSequence_Parms), &Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bStartKeySpawn_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bSuccess,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::NewProp_bStartKeySpawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "InputSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::SQTEStarterComponent_eventInputSequence_Parms), Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_InputSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_InputSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "KeyEventNormal", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics
	{
		struct SQTEStarterComponent_eventRecordRelativeTransform_Parms
		{
			FTransform NewTransform;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_NewTransform;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::NewProp_NewTransform = { "NewTransform", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventRecordRelativeTransform_Parms, NewTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::NewProp_NewTransform,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "RecordRelativeTransform", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::SQTEStarterComponent_eventRecordRelativeTransform_Parms), Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00820401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics
	{
		struct SQTEStarterComponent_eventResetCameraLocation_Parms
		{
			float Timer;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Timer;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::NewProp_Timer = { "Timer", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventResetCameraLocation_Parms, Timer), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::NewProp_Timer,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "ResetCameraLocation", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::SQTEStarterComponent_eventResetCameraLocation_Parms), Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "SequenceTimerEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "SetInitialSequenceData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics
	{
		struct SQTEStarterComponent_eventStartQTE_Parms
		{
			UDataTable* RefTable;
			FName StartingRow;
			TMap<FName,AActor*> ActorsToBind;
			TSubclassOf<USQTEActorBinder>  ActorBinderClass;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RefTable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_StartingRow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToBind_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsToBind_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorsToBind;
		static const UECodeGen_Private::FClassPropertyParams NewProp_ActorBinderClass;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_RefTable = { "RefTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventStartQTE_Parms, RefTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_StartingRow = { "StartingRow", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventStartQTE_Parms, StartingRow), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind_ValueProp = { "ActorsToBind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind_Key_KeyProp = { "ActorsToBind_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind = { "ActorsToBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventStartQTE_Parms, ActorsToBind), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorBinderClass = { "ActorBinderClass", nullptr, (EPropertyFlags)0x0014000000000080, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEStarterComponent_eventStartQTE_Parms, ActorBinderClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USQTEActorBinder_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEStarterComponent_eventStartQTE_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEStarterComponent_eventStartQTE_Parms), &Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_RefTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_StartingRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorsToBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ActorBinderClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::Function_MetaDataParams[] = {
		{ "Category", "QTE Initialization | Start" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
		{ "ReturnDisplayName", "Success" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "StartQTE", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::SQTEStarterComponent_eventStartQTE_Parms), Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_StartQTE()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_StartQTE_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "SuccessNormalKeyPress", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "SuccessSequence", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEStarterComponent, nullptr, "TimedSequenceEvent", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEStarterComponent);
	UClass* Z_Construct_UClass_USQTEStarterComponent_NoRegister()
	{
		return USQTEStarterComponent::StaticClass();
	}
	struct Z_Construct_UClass_USQTEStarterComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerCam_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerCam;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RelativeCameraTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RelativeCameraTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerController_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerController;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOriginalControllerDesiredRotaton_MetaData[];
#endif
		static void NewProp_bOriginalControllerDesiredRotaton_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOriginalControllerDesiredRotaton;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bRestoreCameraSequence_MetaData[];
#endif
		static void NewProp_bRestoreCameraSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bRestoreCameraSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RestoreCameraCounter_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RestoreCameraCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CameraResetTimeLimit_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CameraResetTimeLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InterpSpeedToCamera_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_InterpSpeedToCamera;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartingCamPoint_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_StartingCamPoint;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bQTEBegun_MetaData[];
#endif
		static void NewProp_bQTEBegun_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bQTEBegun;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputHandlerWidget_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InputHandlerWidget;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRefTable_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentRefTable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRowName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRowName;
		static const UECodeGen_Private::FStructPropertyParams NewProp_NormalQTEInput_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_NormalQTEInput_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NormalQTEInput_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_NormalQTEInput;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RowLoopData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowLoopData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowLoopData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RowLoopData;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RowSeqPlayerChart_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowSeqPlayerChart_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowSeqPlayerChart_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RowSeqPlayerChart;
		static const UECodeGen_Private::FBoolPropertyParams NewProp_DynamicRowHelper_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicRowHelper_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRowHelper_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicRowHelper;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceTimesRef_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceTimesRef_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_SequenceTimesRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSequenceEndTime_MetaData[];
#endif
		static const UECodeGen_Private::FDoublePropertyParams NewProp_CurrentSequenceEndTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bSuccessfulSequence_MetaData[];
#endif
		static void NewProp_bSuccessfulSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bSuccessfulSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPause_MetaData[];
#endif
		static void NewProp_bPause_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPause;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasPlayedOpening_MetaData[];
#endif
		static void NewProp_bHasPlayedOpening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasPlayedOpening;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceToPlay_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceToPlay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsPlayerDying_MetaData[];
#endif
		static void NewProp_bIsPlayerDying_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsPlayerDying;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsToBindRef_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsToBindRef_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsToBindRef_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorsToBindRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceEventHandler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceEventHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceTimedTimeHandler_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceTimedTimeHandler;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ConditionalQTEHandle_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalQTEHandle;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorSequenceBinder_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorSequenceBinder;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTEStarted_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QTEStarted;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTEFinished_MetaData[];
#endif
		static const UECodeGen_Private::FMulticastDelegatePropertyParams NewProp_QTEFinished;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceItemIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SequenceItemIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeSequenceCounter_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_TimeSequenceCounter;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTEWidgetClass_MetaData[];
#endif
		static const UECodeGen_Private::FClassPropertyParams NewProp_QTEWidgetClass;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bStartKeySpawnRef_MetaData[];
#endif
		static void NewProp_bStartKeySpawnRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bStartKeySpawnRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BeginKey_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_BeginKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bFinishedQTEInitialization_MetaData[];
#endif
		static void NewProp_bFinishedQTEInitialization_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFinishedQTEInitialization;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceTimer_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SequenceTimer;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInternalBlocker_MetaData[];
#endif
		static void NewProp_bInternalBlocker_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInternalBlocker;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_BlockerReasoning_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_BlockerReasoning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEStarterComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEStarterComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEStarterComponent_BindAllSequenceActors, "BindAllSequenceActors" }, // 1846892172
		{ &Z_Construct_UFunction_USQTEStarterComponent_BindOpeningData, "BindOpeningData" }, // 720076436
		{ &Z_Construct_UFunction_USQTEStarterComponent_BranchToNewPath, "BranchToNewPath" }, // 1039297316
		{ &Z_Construct_UFunction_USQTEStarterComponent_CheckDataTable, "CheckDataTable" }, // 2748989261
		{ &Z_Construct_UFunction_USQTEStarterComponent_CompletedSequence, "CompletedSequence" }, // 3297875778
		{ &Z_Construct_UFunction_USQTEStarterComponent_CompletedSequenceHelper, "CompletedSequenceHelper" }, // 3034355101
		{ &Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEvent, "ConditionalQTEEvent" }, // 326742236
		{ &Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEEventHelper, "ConditionalQTEEventHelper" }, // 3504737461
		{ &Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTEFailure, "ConditionalQTEFailure" }, // 2749135545
		{ &Z_Construct_UFunction_USQTEStarterComponent_ConditionalQTESuccess, "ConditionalQTESuccess" }, // 3345086435
		{ &Z_Construct_UFunction_USQTEStarterComponent_ExecutionHandler, "ExecutionHandler" }, // 1026389402
		{ &Z_Construct_UFunction_USQTEStarterComponent_FailedDataTableRecord, "FailedDataTableRecord" }, // 645616191
		{ &Z_Construct_UFunction_USQTEStarterComponent_FailNormalKeyPress, "FailNormalKeyPress" }, // 1476278864
		{ &Z_Construct_UFunction_USQTEStarterComponent_FailSequence, "FailSequence" }, // 1182661053
		{ &Z_Construct_UFunction_USQTEStarterComponent_FinishedInputBranch, "FinishedInputBranch" }, // 935397876
		{ &Z_Construct_UFunction_USQTEStarterComponent_FinshedOpening, "FinshedOpening" }, // 3368247950
		{ &Z_Construct_UFunction_USQTEStarterComponent_GetDataTableAsset, "GetDataTableAsset" }, // 3588444358
		{ &Z_Construct_UFunction_USQTEStarterComponent_InitializeQTE, "InitializeQTE" }, // 1803131880
		{ &Z_Construct_UFunction_USQTEStarterComponent_InputSequence, "InputSequence" }, // 2668969654
		{ &Z_Construct_UFunction_USQTEStarterComponent_KeyEventNormal, "KeyEventNormal" }, // 3839351051
		{ &Z_Construct_UFunction_USQTEStarterComponent_RecordRelativeTransform, "RecordRelativeTransform" }, // 1149313109
		{ &Z_Construct_UFunction_USQTEStarterComponent_ResetCameraLocation, "ResetCameraLocation" }, // 121788840
		{ &Z_Construct_UFunction_USQTEStarterComponent_SequenceTimerEvent, "SequenceTimerEvent" }, // 3809302257
		{ &Z_Construct_UFunction_USQTEStarterComponent_SetInitialSequenceData, "SetInitialSequenceData" }, // 2235093415
		{ &Z_Construct_UFunction_USQTEStarterComponent_StartQTE, "StartQTE" }, // 1628883931
		{ &Z_Construct_UFunction_USQTEStarterComponent_SuccessNormalKeyPress, "SuccessNormalKeyPress" }, // 2355456601
		{ &Z_Construct_UFunction_USQTEStarterComponent_SuccessSequence, "SuccessSequence" }, // 2703799144
		{ &Z_Construct_UFunction_USQTEStarterComponent_TimedSequenceEvent, "TimedSequenceEvent" }, // 3477284872
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "BlueprintType", "true" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SQTEStarterComponent.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerCam_MetaData[] = {
		{ "Category", "Owner Info" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerCam = { "OwnerCam", nullptr, (EPropertyFlags)0x00100000000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, OwnerCam), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerCam_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerCam_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RelativeCameraTransform_MetaData[] = {
		{ "Category", "Owner Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RelativeCameraTransform = { "RelativeCameraTransform", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, RelativeCameraTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RelativeCameraTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RelativeCameraTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerController_MetaData[] = {
		{ "Category", "Owner Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerController = { "OwnerController", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, OwnerController), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerController_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerController_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton_MetaData[] = {
		{ "Category", "Owner Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bOriginalControllerDesiredRotaton = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton = { "bOriginalControllerDesiredRotaton", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence_MetaData[] = {
		{ "Category", "CameraReset" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bRestoreCameraSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence = { "bRestoreCameraSequence", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RestoreCameraCounter_MetaData[] = {
		{ "Category", "CameraReset" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RestoreCameraCounter = { "RestoreCameraCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, RestoreCameraCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RestoreCameraCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RestoreCameraCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CameraResetTimeLimit_MetaData[] = {
		{ "Category", "CameraReset" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CameraResetTimeLimit = { "CameraResetTimeLimit", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, CameraResetTimeLimit), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CameraResetTimeLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CameraResetTimeLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InterpSpeedToCamera_MetaData[] = {
		{ "Category", "CameraReset" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InterpSpeedToCamera = { "InterpSpeedToCamera", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, InterpSpeedToCamera), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InterpSpeedToCamera_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InterpSpeedToCamera_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_StartingCamPoint_MetaData[] = {
		{ "Category", "CameraReset" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_StartingCamPoint = { "StartingCamPoint", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, StartingCamPoint), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_StartingCamPoint_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_StartingCamPoint_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun_MetaData[] = {
		{ "Category", "QTE Initialization" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bQTEBegun = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun = { "bQTEBegun", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Play Data" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, PlayRate), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_PlayRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InputHandlerWidget_MetaData[] = {
		{ "Category", "QTE Widget" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InputHandlerWidget = { "InputHandlerWidget", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, InputHandlerWidget), Z_Construct_UClass_USQTEWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InputHandlerWidget_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InputHandlerWidget_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRefTable_MetaData[] = {
		{ "Category", "Data Table" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRefTable = { "CurrentRefTable", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, CurrentRefTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRefTable_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRefTable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRowName_MetaData[] = {
		{ "Category", "Data Table Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRowName = { "CurrentRowName", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, CurrentRowName), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRowName_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRowName_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_ValueProp = { "NormalQTEInput", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FInputData, METADATA_PARAMS(nullptr, 0) }; // 1017580504
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_Key_KeyProp = { "NormalQTEInput_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_MetaData[] = {
		{ "Category", "Data Table Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput = { "NormalQTEInput", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, NormalQTEInput), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_MetaData)) }; // 1017580504
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_ValueProp = { "RowLoopData", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(nullptr, 0) }; // 1464872324
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_Key_KeyProp = { "RowLoopData_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_MetaData[] = {
		{ "Category", "Data Table Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData = { "RowLoopData", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, RowLoopData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_MetaData)) }; // 1464872324
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_ValueProp = { "RowSeqPlayerChart", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_Key_KeyProp = { "RowSeqPlayerChart_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_MetaData[] = {
		{ "Category", "Data Table Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart = { "RowSeqPlayerChart", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, RowSeqPlayerChart), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_MetaData)) };
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_ValueProp = { "DynamicRowHelper", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_Key_KeyProp = { "DynamicRowHelper_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_MetaData[] = {
		{ "Category", "Data Table Info" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper = { "DynamicRowHelper", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, DynamicRowHelper), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef_Inner = { "SequenceTimesRef", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FTimeSequenceHelper, METADATA_PARAMS(nullptr, 0) }; // 2178895709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef_MetaData[] = {
		{ "Category", "Data Table Info | Helper" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef = { "SequenceTimesRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, SequenceTimesRef), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef_MetaData)) }; // 2178895709
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentSequenceEndTime_MetaData[] = {
		{ "Category", "QTE Sequence Data" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentSequenceEndTime = { "CurrentSequenceEndTime", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, CurrentSequenceEndTime), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentSequenceEndTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentSequenceEndTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence_MetaData[] = {
		{ "Category", "QTE Sequence Transistion" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bSuccessfulSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence = { "bSuccessfulSequence", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause_MetaData[] = {
		{ "Category", "QTE Sequence Transistion" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bPause = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause = { "bPause", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening_MetaData[] = {
		{ "Category", "QTE Sequence Transistion | Opening" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bHasPlayedOpening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening = { "bHasPlayedOpening", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_LevelSequenceToPlay_MetaData[] = {
		{ "Category", "Current QTE Scene" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_LevelSequenceToPlay = { "LevelSequenceToPlay", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, LevelSequenceToPlay), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_LevelSequenceToPlay_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_LevelSequenceToPlay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying_MetaData[] = {
		{ "Category", "Living Status" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bIsPlayerDying = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying = { "bIsPlayerDying", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_ValueProp = { "ActorsToBindRef", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_Key_KeyProp = { "ActorsToBindRef_Key", nullptr, (EPropertyFlags)0x0000000000020001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_MetaData[] = {
		{ "Category", "QTE Bindng" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef = { "ActorsToBindRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, ActorsToBindRef), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceEventHandler_MetaData[] = {
		{ "Category", "QTE Processing | Normal" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceEventHandler = { "SequenceEventHandler", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, SequenceEventHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceEventHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceEventHandler_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimedTimeHandler_MetaData[] = {
		{ "Category", "QTE Processing | Normal" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimedTimeHandler = { "SequenceTimedTimeHandler", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, SequenceTimedTimeHandler), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimedTimeHandler_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimedTimeHandler_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ConditionalQTEHandle_MetaData[] = {
		{ "Category", "QTE Processing | Conditional" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ConditionalQTEHandle = { "ConditionalQTEHandle", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, ConditionalQTEHandle), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ConditionalQTEHandle_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ConditionalQTEHandle_MetaData)) }; // 3633724737
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorSequenceBinder_MetaData[] = {
		{ "Category", "Scene Binding" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorSequenceBinder = { "ActorSequenceBinder", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, ActorSequenceBinder), Z_Construct_UClass_USQTEActorBinder_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorSequenceBinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorSequenceBinder_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEStarted_MetaData[] = {
		{ "Category", "QTE Signals" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEStarted = { "QTEStarted", nullptr, (EPropertyFlags)0x00100000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, QTEStarted), Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEStarted_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEStarted_MetaData)) }; // 2641352142
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEFinished_MetaData[] = {
		{ "Category", "QTE Signals" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FMulticastDelegatePropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEFinished = { "QTEFinished", nullptr, (EPropertyFlags)0x00100000100a0001, UECodeGen_Private::EPropertyGenFlags::InlineMulticastDelegate, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, QTEFinished), Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEFinished_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEFinished_MetaData)) }; // 1307857426
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceItemIndex_MetaData[] = {
		{ "Category", "QTE Data | Normal | Timed" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceItemIndex = { "SequenceItemIndex", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, SequenceItemIndex), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceItemIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceItemIndex_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_TimeSequenceCounter_MetaData[] = {
		{ "Category", "QTE Data | Normal | Timed" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_TimeSequenceCounter = { "TimeSequenceCounter", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, TimeSequenceCounter), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_TimeSequenceCounter_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_TimeSequenceCounter_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEWidgetClass_MetaData[] = {
		{ "Category", "Setting Required" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FClassPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEWidgetClass = { "QTEWidgetClass", nullptr, (EPropertyFlags)0x0014000000010015, UECodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, QTEWidgetClass), Z_Construct_UClass_UClass, Z_Construct_UClass_USQTEWidget_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEWidgetClass_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEWidgetClass_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef_MetaData[] = {
		{ "Category", "QTE Subsequence Data" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bStartKeySpawnRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef = { "bStartKeySpawnRef", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BeginKey_MetaData[] = {
		{ "Category", "QTE Initialization | Key Press" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BeginKey = { "BeginKey", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, BeginKey), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BeginKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BeginKey_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bFinishedQTEInitialization = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization = { "bFinishedQTEInitialization", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimer_MetaData[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimer = { "SequenceTimer", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, SequenceTimer), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimer_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker_MetaData[] = {
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker_SetBit(void* Obj)
	{
		((USQTEStarterComponent*)Obj)->bInternalBlocker = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker = { "bInternalBlocker", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEStarterComponent), &Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BlockerReasoning_MetaData[] = {
		{ "Category", "FailureHelper" },
		{ "ModuleRelativePath", "Public/SQTEStarterComponent.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BlockerReasoning = { "BlockerReasoning", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEStarterComponent, BlockerReasoning), METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BlockerReasoning_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BlockerReasoning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTEStarterComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerCam,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RelativeCameraTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_OwnerController,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bOriginalControllerDesiredRotaton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bRestoreCameraSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RestoreCameraCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CameraResetTimeLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InterpSpeedToCamera,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_StartingCamPoint,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bQTEBegun,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_PlayRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_InputHandlerWidget,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRefTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentRowName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_NormalQTEInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowLoopData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_RowSeqPlayerChart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_DynamicRowHelper,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimesRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_CurrentSequenceEndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bSuccessfulSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bPause,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bHasPlayedOpening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_LevelSequenceToPlay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bIsPlayerDying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorsToBindRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceEventHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimedTimeHandler,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ConditionalQTEHandle,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_ActorSequenceBinder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEStarted,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEFinished,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceItemIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_TimeSequenceCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_QTEWidgetClass,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bStartKeySpawnRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BeginKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bFinishedQTEInitialization,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_SequenceTimer,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_bInternalBlocker,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEStarterComponent_Statics::NewProp_BlockerReasoning,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEStarterComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEStarterComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEStarterComponent_Statics::ClassParams = {
		&USQTEStarterComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTEStarterComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::PropPointers),
		0,
		0x00B000A5u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEStarterComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEStarterComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEStarterComponent()
	{
		if (!Z_Registration_Info_UClass_USQTEStarterComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEStarterComponent.OuterSingleton, Z_Construct_UClass_USQTEStarterComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEStarterComponent.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTEStarterComponent>()
	{
		return USQTEStarterComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEStarterComponent);
	USQTEStarterComponent::~USQTEStarterComponent() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEStarterComponent, USQTEStarterComponent::StaticClass, TEXT("USQTEStarterComponent"), &Z_Registration_Info_UClass_USQTEStarterComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEStarterComponent), 3691213420U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_252370959(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
