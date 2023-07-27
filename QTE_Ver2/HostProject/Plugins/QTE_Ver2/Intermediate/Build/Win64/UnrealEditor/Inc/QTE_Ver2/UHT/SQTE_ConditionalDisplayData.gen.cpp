// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTE_ConditionalDisplayData.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTE_ConditionalDisplayData() {}
// Cross Module References
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ConditionalDisplayData();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTE_ConditionalDisplayData_NoRegister();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE();
	UMG_API UClass* Z_Construct_UClass_UTextBlock_NoRegister();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UMG_API UClass* Z_Construct_UClass_UVerticalBox_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTE_ConditionalDisplayData::execLocalizeIntegerData)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_TextRef);
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyString);
		P_GET_PROPERTY(FStrProperty,Z_Param_PreMessage);
		P_GET_PROPERTY(FIntProperty,Z_Param_Value);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalizeIntegerData(Z_Param_TextRef,Z_Param_KeyString,Z_Param_PreMessage,Z_Param_Value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ConditionalDisplayData::execLocalizeStringData)
	{
		P_GET_OBJECT(UTextBlock,Z_Param_TextRef);
		P_GET_PROPERTY(FStrProperty,Z_Param_KeyString);
		P_GET_PROPERTY(FStrProperty,Z_Param_Message);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->LocalizeStringData(Z_Param_TextRef,Z_Param_KeyString,Z_Param_Message);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ConditionalDisplayData::execPrintStats)
	{
		P_GET_UBOOL(Z_Param_bIsDynamic);
		P_GET_UBOOL(Z_Param_bInstantFailureRef);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentFailCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentSuccessCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentDataIndex);
		P_GET_STRUCT(FConditionalQTE,Z_Param_ConditionalQTEDataRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->PrintStats(Z_Param_bIsDynamic,Z_Param_bInstantFailureRef,Z_Param_CurrentFailCounter,Z_Param_CurrentSuccessCounter,Z_Param_CurrentDataIndex,Z_Param_ConditionalQTEDataRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTE_ConditionalDisplayData::execAddInputStats)
	{
		P_GET_UBOOL(Z_Param_bIsDynamic);
		P_GET_UBOOL(Z_Param_bInstantFailureRef);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentFailCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentSuccessCounter);
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentDataIndex);
		P_GET_STRUCT(FConditionalQTE,Z_Param_ConditionalQTEDataRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->AddInputStats(Z_Param_bIsDynamic,Z_Param_bInstantFailureRef,Z_Param_CurrentFailCounter,Z_Param_CurrentSuccessCounter,Z_Param_CurrentDataIndex,Z_Param_ConditionalQTEDataRef);
		P_NATIVE_END;
	}
	void USQTE_ConditionalDisplayData::StaticRegisterNativesUSQTE_ConditionalDisplayData()
	{
		UClass* Class = USQTE_ConditionalDisplayData::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "AddInputStats", &USQTE_ConditionalDisplayData::execAddInputStats },
			{ "LocalizeIntegerData", &USQTE_ConditionalDisplayData::execLocalizeIntegerData },
			{ "LocalizeStringData", &USQTE_ConditionalDisplayData::execLocalizeStringData },
			{ "PrintStats", &USQTE_ConditionalDisplayData::execPrintStats },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics
	{
		struct SQTE_ConditionalDisplayData_eventAddInputStats_Parms
		{
			bool bIsDynamic;
			bool bInstantFailureRef;
			int32 CurrentFailCounter;
			int32 CurrentSuccessCounter;
			int32 CurrentDataIndex;
			FConditionalQTE ConditionalQTEDataRef;
		};
		static void NewProp_bIsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
		static void NewProp_bInstantFailureRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailureRef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFailCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSuccessCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentDataIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalQTEDataRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
	{
		((SQTE_ConditionalDisplayData_eventAddInputStats_Parms*)Obj)->bIsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ConditionalDisplayData_eventAddInputStats_Parms), &Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bInstantFailureRef_SetBit(void* Obj)
	{
		((SQTE_ConditionalDisplayData_eventAddInputStats_Parms*)Obj)->bInstantFailureRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bInstantFailureRef = { "bInstantFailureRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ConditionalDisplayData_eventAddInputStats_Parms), &Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bInstantFailureRef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentFailCounter = { "CurrentFailCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventAddInputStats_Parms, CurrentFailCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentSuccessCounter = { "CurrentSuccessCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventAddInputStats_Parms, CurrentSuccessCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentDataIndex = { "CurrentDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventAddInputStats_Parms, CurrentDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_ConditionalQTEDataRef = { "ConditionalQTEDataRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventAddInputStats_Parms, ConditionalQTEDataRef), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(nullptr, 0) }; // 1464872324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bIsDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_bInstantFailureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentFailCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentSuccessCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_CurrentDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::NewProp_ConditionalQTEDataRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::Function_MetaDataParams[] = {
		{ "Category", "Stats" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ConditionalDisplayData, nullptr, "AddInputStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::SQTE_ConditionalDisplayData_eventAddInputStats_Parms), Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics
	{
		struct SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms
		{
			UTextBlock* TextRef;
			FString KeyString;
			FString PreMessage;
			int32 Value;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRef;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_PreMessage;
		static const UECodeGen_Private::FIntPropertyParams NewProp_Value;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_TextRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_TextRef = { "TextRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms, TextRef), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_TextRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_TextRef_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_KeyString = { "KeyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms, KeyString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_PreMessage = { "PreMessage", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms, PreMessage), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_Value = { "Value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms, Value), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_TextRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_KeyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_PreMessage,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::NewProp_Value,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ConditionalDisplayData, nullptr, "LocalizeIntegerData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::SQTE_ConditionalDisplayData_eventLocalizeIntegerData_Parms), Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics
	{
		struct SQTE_ConditionalDisplayData_eventLocalizeStringData_Parms
		{
			UTextBlock* TextRef;
			FString KeyString;
			FString Message;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TextRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TextRef;
		static const UECodeGen_Private::FStrPropertyParams NewProp_KeyString;
		static const UECodeGen_Private::FStrPropertyParams NewProp_Message;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_TextRef_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_TextRef = { "TextRef", nullptr, (EPropertyFlags)0x0010000000080080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeStringData_Parms, TextRef), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_TextRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_TextRef_MetaData)) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_KeyString = { "KeyString", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeStringData_Parms, KeyString), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_Message = { "Message", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventLocalizeStringData_Parms, Message), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_TextRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_KeyString,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::NewProp_Message,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ConditionalDisplayData, nullptr, "LocalizeStringData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::SQTE_ConditionalDisplayData_eventLocalizeStringData_Parms), Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics
	{
		struct SQTE_ConditionalDisplayData_eventPrintStats_Parms
		{
			bool bIsDynamic;
			bool bInstantFailureRef;
			int32 CurrentFailCounter;
			int32 CurrentSuccessCounter;
			int32 CurrentDataIndex;
			FConditionalQTE ConditionalQTEDataRef;
		};
		static void NewProp_bIsDynamic_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsDynamic;
		static void NewProp_bInstantFailureRef_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailureRef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentFailCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentSuccessCounter;
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentDataIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ConditionalQTEDataRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	void Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bIsDynamic_SetBit(void* Obj)
	{
		((SQTE_ConditionalDisplayData_eventPrintStats_Parms*)Obj)->bIsDynamic = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bIsDynamic = { "bIsDynamic", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ConditionalDisplayData_eventPrintStats_Parms), &Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bIsDynamic_SetBit, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bInstantFailureRef_SetBit(void* Obj)
	{
		((SQTE_ConditionalDisplayData_eventPrintStats_Parms*)Obj)->bInstantFailureRef = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bInstantFailureRef = { "bInstantFailureRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTE_ConditionalDisplayData_eventPrintStats_Parms), &Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bInstantFailureRef_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentFailCounter = { "CurrentFailCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventPrintStats_Parms, CurrentFailCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentSuccessCounter = { "CurrentSuccessCounter", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventPrintStats_Parms, CurrentSuccessCounter), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentDataIndex = { "CurrentDataIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventPrintStats_Parms, CurrentDataIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_ConditionalQTEDataRef = { "ConditionalQTEDataRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTE_ConditionalDisplayData_eventPrintStats_Parms, ConditionalQTEDataRef), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(nullptr, 0) }; // 1464872324
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bIsDynamic,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_bInstantFailureRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentFailCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentSuccessCounter,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_CurrentDataIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::NewProp_ConditionalQTEDataRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTE_ConditionalDisplayData, nullptr, "PrintStats", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::SQTE_ConditionalDisplayData_eventPrintStats_Parms), Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTE_ConditionalDisplayData);
	UClass* Z_Construct_UClass_USQTE_ConditionalDisplayData_NoRegister()
	{
		return USQTE_ConditionalDisplayData::StaticClass();
	}
	struct Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics
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
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicSettingText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicSettingText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InstantFailureText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InstantFailureText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureLimitText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailureLimitText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessLimitText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuccessLimitText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentFailureText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentFailureText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSuccessText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSuccessText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailRatioText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailRatioText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessRatioText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuccessRatioText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentDataIndexText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentDataIndexText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayHelperSequencesText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PlayHelperSequencesText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessThresholdText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_SuccessThresholdText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailThresholdText_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_FailThresholdText;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_indexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_indexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCreated_MetaData[];
#endif
		static void NewProp_bCreated_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCreated;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTE_ConditionalDisplayData_AddInputStats, "AddInputStats" }, // 1282105208
		{ &Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeIntegerData, "LocalizeIntegerData" }, // 408700275
		{ &Z_Construct_UFunction_USQTE_ConditionalDisplayData_LocalizeStringData, "LocalizeStringData" }, // 3516381757
		{ &Z_Construct_UFunction_USQTE_ConditionalDisplayData_PrintStats, "PrintStats" }, // 1545548426
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTE_ConditionalDisplayData.h" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_Header_VerticalBox_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "MainOverlay" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_Header_VerticalBox = { "Header_VerticalBox", nullptr, (EPropertyFlags)0x00100000000a000d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, Header_VerticalBox), Z_Construct_UClass_UVerticalBox_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_Header_VerticalBox_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_Header_VerticalBox_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_DynamicSettingText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_DynamicSettingText = { "DynamicSettingText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, DynamicSettingText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_DynamicSettingText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_DynamicSettingText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_InstantFailureText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_InstantFailureText = { "InstantFailureText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, InstantFailureText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_InstantFailureText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_InstantFailureText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailureLimitText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailureLimitText = { "FailureLimitText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, FailureLimitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailureLimitText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailureLimitText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessLimitText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessLimitText = { "SuccessLimitText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, SuccessLimitText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessLimitText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessLimitText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentFailureText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentFailureText = { "CurrentFailureText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, CurrentFailureText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentFailureText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentFailureText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentSuccessText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentSuccessText = { "CurrentSuccessText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, CurrentSuccessText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentSuccessText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentSuccessText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailRatioText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailRatioText = { "FailRatioText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, FailRatioText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailRatioText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailRatioText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessRatioText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessRatioText = { "SuccessRatioText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, SuccessRatioText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessRatioText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessRatioText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentDataIndexText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentDataIndexText = { "CurrentDataIndexText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, CurrentDataIndexText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentDataIndexText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentDataIndexText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_PlayHelperSequencesText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_PlayHelperSequencesText = { "PlayHelperSequencesText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, PlayHelperSequencesText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_PlayHelperSequencesText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_PlayHelperSequencesText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessThresholdText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessThresholdText = { "SuccessThresholdText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, SuccessThresholdText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessThresholdText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessThresholdText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailThresholdText_MetaData[] = {
		{ "BindWidget", "" },
		{ "Category", "InputValues" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailThresholdText = { "FailThresholdText", nullptr, (EPropertyFlags)0x001000000009001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, FailThresholdText), Z_Construct_UClass_UTextBlock_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailThresholdText_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailThresholdText_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_indexCount_MetaData[] = {
		{ "Category", "PreStart" },
		{ "ClampMax", "12" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
		{ "ToolTip", "Change this value to visualize in real time how the data is filtered" },
		{ "UIMax", "12" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_indexCount = { "indexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTE_ConditionalDisplayData, indexCount), METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_indexCount_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_indexCount_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated_MetaData[] = {
		{ "Category", "Start" },
		{ "ModuleRelativePath", "Public/SQTE_ConditionalDisplayData.h" },
	};
#endif
	void Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated_SetBit(void* Obj)
	{
		((USQTE_ConditionalDisplayData*)Obj)->bCreated = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated = { "bCreated", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTE_ConditionalDisplayData), &Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_Header_VerticalBox,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_DynamicSettingText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_InstantFailureText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailureLimitText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessLimitText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentFailureText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentSuccessText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailRatioText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessRatioText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_CurrentDataIndexText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_PlayHelperSequencesText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_SuccessThresholdText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_FailThresholdText,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_indexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::NewProp_bCreated,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTE_ConditionalDisplayData>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::ClassParams = {
		&USQTE_ConditionalDisplayData::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::PropPointers),
		0,
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTE_ConditionalDisplayData()
	{
		if (!Z_Registration_Info_UClass_USQTE_ConditionalDisplayData.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTE_ConditionalDisplayData.OuterSingleton, Z_Construct_UClass_USQTE_ConditionalDisplayData_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTE_ConditionalDisplayData.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTE_ConditionalDisplayData>()
	{
		return USQTE_ConditionalDisplayData::StaticClass();
	}
	USQTE_ConditionalDisplayData::USQTE_ConditionalDisplayData(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTE_ConditionalDisplayData);
	USQTE_ConditionalDisplayData::~USQTE_ConditionalDisplayData() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ConditionalDisplayData_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ConditionalDisplayData_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTE_ConditionalDisplayData, USQTE_ConditionalDisplayData::StaticClass, TEXT("USQTE_ConditionalDisplayData"), &Z_Registration_Info_UClass_USQTE_ConditionalDisplayData, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTE_ConditionalDisplayData), 1405859128U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ConditionalDisplayData_h_29980179(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ConditionalDisplayData_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ConditionalDisplayData_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
