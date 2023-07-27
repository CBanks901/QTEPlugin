// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTEUtilityFunctionLibrary.h"
#include "InputCoreTypes.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEUtilityFunctionLibrary() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APlayerController_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEUtilityFunctionLibrary();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEUtilityFunctionLibrary_NoRegister();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_KeyResultData();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputStruct();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FKeyToTimeBindHelper();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FSubSequence();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execGetConditionalParameters)
	{
		P_GET_STRUCT(FConditionalQTE,Z_Param_inRef);
		P_GET_UBOOL(Z_Param_bHasOpening);
		P_GET_STRUCT_REF(FConditionalQTE,Z_Param_Out_outRef);
		P_GET_UBOOL_REF(Z_Param_Out_Valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		USQTEUtilityFunctionLibrary::GetConditionalParameters(Z_Param_inRef,Z_Param_bHasOpening,Z_Param_Out_outRef,Z_Param_Out_Valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execVerifyStartTimes)
	{
		P_GET_TARRAY(FKeyToTimeBindHelper,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::VerifyStartTimes(Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execGetPressedKeys)
	{
		P_GET_TARRAY(FKey,Z_Param_KeysRef);
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::GetPressedKeys(Z_Param_KeysRef,Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execGetHeldDownKeys)
	{
		P_GET_TARRAY(FKey,Z_Param_KeysRef);
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_GET_PROPERTY(FFloatProperty,Z_Param_HoldTimeRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::GetHeldDownKeys(Z_Param_KeysRef,Z_Param_PC,Z_Param_HoldTimeRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execCheckKeys)
	{
		P_GET_TARRAY(FKey,Z_Param_CurrentKeys);
		P_GET_TARRAY(FKey,Z_Param_DesiredKeys);
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(KeyResultData*)Z_Param__Result=USQTEUtilityFunctionLibrary::CheckKeys(Z_Param_CurrentKeys,Z_Param_DesiredKeys,Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execSetUpOwnerKeyBinding)
	{
		P_GET_TARRAY(FKey,Z_Param_ListRef);
		P_GET_OBJECT(APlayerController,Z_Param_PC);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::SetUpOwnerKeyBinding(Z_Param_ListRef,Z_Param_PC);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execIsLastTimedSubSeq)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_CurrentIndex);
		P_GET_STRUCT(FSubSequence,Z_Param_SeqRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::IsLastTimedSubSeq(Z_Param_CurrentIndex,Z_Param_SeqRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execGetSequenceEndTime)
	{
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_CurrentSeq);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(float*)Z_Param__Result=USQTEUtilityFunctionLibrary::GetSequenceEndTime(Z_Param_CurrentSeq);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execIsValidRow)
	{
		P_GET_OBJECT(UDataTable,Z_Param_DataTable);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::IsValidRow(Z_Param_DataTable,Z_Param_RowToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execbisValidRow)
	{
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_CurrentSeq);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=USQTEUtilityFunctionLibrary::bisValidRow(Z_Param_CurrentSeq);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execSetSequenceName)
	{
		P_GET_PROPERTY_REF(FNameProperty,Z_Param_Out_SequenceName);
		P_GET_PROPERTY(FNameProperty,Z_Param_RowName);
		P_FINISH;
		P_NATIVE_BEGIN;
		USQTEUtilityFunctionLibrary::SetSequenceName(Z_Param_Out_SequenceName,Z_Param_RowName);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEUtilityFunctionLibrary::execGetInputParameters)
	{
		P_GET_PROPERTY(FFloatProperty,Z_Param_EndTime);
		P_GET_UBOOL(Z_Param_bHasOpeningSeq);
		P_GET_STRUCT(FInputStruct,Z_Param_inputRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FInputData*)Z_Param__Result=USQTEUtilityFunctionLibrary::GetInputParameters(Z_Param_EndTime,Z_Param_bHasOpeningSeq,Z_Param_inputRef);
		P_NATIVE_END;
	}
	void USQTEUtilityFunctionLibrary::StaticRegisterNativesUSQTEUtilityFunctionLibrary()
	{
		UClass* Class = USQTEUtilityFunctionLibrary::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "bisValidRow", &USQTEUtilityFunctionLibrary::execbisValidRow },
			{ "CheckKeys", &USQTEUtilityFunctionLibrary::execCheckKeys },
			{ "GetConditionalParameters", &USQTEUtilityFunctionLibrary::execGetConditionalParameters },
			{ "GetHeldDownKeys", &USQTEUtilityFunctionLibrary::execGetHeldDownKeys },
			{ "GetInputParameters", &USQTEUtilityFunctionLibrary::execGetInputParameters },
			{ "GetPressedKeys", &USQTEUtilityFunctionLibrary::execGetPressedKeys },
			{ "GetSequenceEndTime", &USQTEUtilityFunctionLibrary::execGetSequenceEndTime },
			{ "IsLastTimedSubSeq", &USQTEUtilityFunctionLibrary::execIsLastTimedSubSeq },
			{ "IsValidRow", &USQTEUtilityFunctionLibrary::execIsValidRow },
			{ "SetSequenceName", &USQTEUtilityFunctionLibrary::execSetSequenceName },
			{ "SetUpOwnerKeyBinding", &USQTEUtilityFunctionLibrary::execSetUpOwnerKeyBinding },
			{ "VerifyStartTimes", &USQTEUtilityFunctionLibrary::execVerifyStartTimes },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventbisValidRow_Parms
		{
			ALevelSequenceActor* CurrentSeq;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSeq;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_CurrentSeq = { "CurrentSeq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventbisValidRow_Parms, CurrentSeq), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventbisValidRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventbisValidRow_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_CurrentSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "bisValidRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::SQTEUtilityFunctionLibrary_eventbisValidRow_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventCheckKeys_Parms
		{
			TArray<FKey> CurrentKeys;
			TArray<FKey> DesiredKeys;
			APlayerController* PC;
			KeyResultData ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_CurrentKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_CurrentKeys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_DesiredKeys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_DesiredKeys;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UECodeGen_Private::FBytePropertyParams NewProp_ReturnValue_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_CurrentKeys_Inner = { "CurrentKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_CurrentKeys = { "CurrentKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventCheckKeys_Parms, CurrentKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_DesiredKeys_Inner = { "DesiredKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_DesiredKeys = { "DesiredKeys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventCheckKeys_Parms, DesiredKeys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventCheckKeys_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_ReturnValue_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventCheckKeys_Parms, ReturnValue), Z_Construct_UEnum_QTE_Ver2_KeyResultData, METADATA_PARAMS(nullptr, 0) }; // 3641111644
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_CurrentKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_CurrentKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_DesiredKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_DesiredKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_ReturnValue_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyHelpers" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "CheckKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::SQTEUtilityFunctionLibrary_eventCheckKeys_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms
		{
			FConditionalQTE inRef;
			bool bHasOpening;
			FConditionalQTE outRef;
			bool Valid;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_inRef;
		static void NewProp_bHasOpening_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOpening;
		static const UECodeGen_Private::FStructPropertyParams NewProp_outRef;
		static void NewProp_Valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Valid;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_inRef = { "inRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms, inRef), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(nullptr, 0) }; // 1464872324
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_bHasOpening_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms*)Obj)->bHasOpening = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_bHasOpening = { "bHasOpening", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_bHasOpening_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_outRef = { "outRef", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms, outRef), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(nullptr, 0) }; // 1464872324
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_Valid_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms*)Obj)->Valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_Valid = { "Valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_Valid_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_inRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_bHasOpening,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_outRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::NewProp_Valid,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "ConditionalKeys" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "GetConditionalParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::SQTEUtilityFunctionLibrary_eventGetConditionalParameters_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms
		{
			TArray<FKey> KeysRef;
			APlayerController* PC;
			float HoldTimeRef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTimeRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_KeysRef_Inner = { "KeysRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_KeysRef = { "KeysRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms, KeysRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_HoldTimeRef = { "HoldTimeRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms, HoldTimeRef), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_KeysRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_KeysRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_HoldTimeRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyHelpers" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "GetHeldDownKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::SQTEUtilityFunctionLibrary_eventGetHeldDownKeys_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms
		{
			float EndTime;
			bool bHasOpeningSeq;
			FInputStruct inputRef;
			FInputData ReturnValue;
		};
		static const UECodeGen_Private::FFloatPropertyParams NewProp_EndTime;
		static void NewProp_bHasOpeningSeq_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOpeningSeq;
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_EndTime = { "EndTime", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms, EndTime), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_bHasOpeningSeq_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms*)Obj)->bHasOpeningSeq = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_bHasOpeningSeq = { "bHasOpeningSeq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_bHasOpeningSeq_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_inputRef = { "inputRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms, inputRef), Z_Construct_UScriptStruct_FInputStruct, METADATA_PARAMS(nullptr, 0) }; // 3590555601
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms, ReturnValue), Z_Construct_UScriptStruct_FInputData, METADATA_PARAMS(nullptr, 0) }; // 1017580504
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_EndTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_bHasOpeningSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_inputRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::Function_MetaDataParams[] = {
		{ "Category", "UtilityFunctions" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "GetInputParameters", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::SQTEUtilityFunctionLibrary_eventGetInputParameters_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms
		{
			TArray<FKey> KeysRef;
			APlayerController* PC;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_KeysRef_Inner = { "KeysRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_KeysRef = { "KeysRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms, KeysRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_KeysRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_KeysRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyHelpers" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "GetPressedKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::SQTEUtilityFunctionLibrary_eventGetPressedKeys_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventGetSequenceEndTime_Parms
		{
			ALevelSequenceActor* CurrentSeq;
			float ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSeq;
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::NewProp_CurrentSeq = { "CurrentSeq", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetSequenceEndTime_Parms, CurrentSeq), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventGetSequenceEndTime_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::NewProp_CurrentSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::Function_MetaDataParams[] = {
		{ "Category", "Sequences" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "GetSequenceEndTime", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::SQTEUtilityFunctionLibrary_eventGetSequenceEndTime_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms
		{
			int32 CurrentIndex;
			FSubSequence SeqRef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_CurrentIndex;
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeqRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_CurrentIndex = { "CurrentIndex", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms, CurrentIndex), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_SeqRef = { "SeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms, SeqRef), Z_Construct_UScriptStruct_FSubSequence, METADATA_PARAMS(nullptr, 0) }; // 3075086005
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_CurrentIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_SeqRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::Function_MetaDataParams[] = {
		{ "Category", "SubSequences" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "IsLastTimedSubSeq", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::SQTEUtilityFunctionLibrary_eventIsLastTimedSubSeq_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventIsValidRow_Parms
		{
			UDataTable* DataTable;
			FName RowToFind;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DataTable;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowToFind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_DataTable = { "DataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventIsValidRow_Parms, DataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_RowToFind = { "RowToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventIsValidRow_Parms, RowToFind), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventIsValidRow_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventIsValidRow_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_DataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_RowToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::Function_MetaDataParams[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "IsValidRow", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::SQTEUtilityFunctionLibrary_eventIsValidRow_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventSetSequenceName_Parms
		{
			FName SequenceName;
			FName RowName;
		};
		static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceName;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowName;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventSetSequenceName_Parms, SequenceName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::NewProp_RowName = { "RowName", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventSetSequenceName_Parms, RowName), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::NewProp_SequenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::NewProp_RowName,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::Function_MetaDataParams[] = {
		{ "Category", "Miscellaneous" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "SetSequenceName", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::SQTEUtilityFunctionLibrary_eventSetSequenceName_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms
		{
			TArray<FKey> ListRef;
			APlayerController* PC;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListRef_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ListRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_PC;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ListRef_Inner = { "ListRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ListRef = { "ListRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms, ListRef), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_PC = { "PC", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms, PC), Z_Construct_UClass_APlayerController_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ListRef_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ListRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_PC,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "KeyHelpers" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "SetUpOwnerKeyBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::SQTEUtilityFunctionLibrary_eventSetUpOwnerKeyBinding_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics
	{
		struct SQTEUtilityFunctionLibrary_eventVerifyStartTimes_Parms
		{
			TArray<FKeyToTimeBindHelper> Ref;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Ref_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Ref;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref_Inner = { "Ref", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyToTimeBindHelper, METADATA_PARAMS(nullptr, 0) }; // 3878640176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEUtilityFunctionLibrary_eventVerifyStartTimes_Parms, Ref), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref_MetaData)) }; // 3878640176
	void Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEUtilityFunctionLibrary_eventVerifyStartTimes_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(SQTEUtilityFunctionLibrary_eventVerifyStartTimes_Parms), &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_Ref,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEUtilityFunctionLibrary, nullptr, "VerifyStartTimes", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::SQTEUtilityFunctionLibrary_eventVerifyStartTimes_Parms), Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEUtilityFunctionLibrary);
	UClass* Z_Construct_UClass_USQTEUtilityFunctionLibrary_NoRegister()
	{
		return USQTEUtilityFunctionLibrary::StaticClass();
	}
	struct Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_bisValidRow, "bisValidRow" }, // 3342756797
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_CheckKeys, "CheckKeys" }, // 2155142354
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetConditionalParameters, "GetConditionalParameters" }, // 3546314056
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetHeldDownKeys, "GetHeldDownKeys" }, // 2276235069
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetInputParameters, "GetInputParameters" }, // 2670809728
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetPressedKeys, "GetPressedKeys" }, // 75717250
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_GetSequenceEndTime, "GetSequenceEndTime" }, // 1706879635
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsLastTimedSubSeq, "IsLastTimedSubSeq" }, // 962898389
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_IsValidRow, "IsValidRow" }, // 2556964124
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetSequenceName, "SetSequenceName" }, // 359863089
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_SetUpOwnerKeyBinding, "SetUpOwnerKeyBinding" }, // 2335051590
		{ &Z_Construct_UFunction_USQTEUtilityFunctionLibrary_VerifyStartTimes, "VerifyStartTimes" }, // 1016010478
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "SQTEUtilityFunctionLibrary.h" },
		{ "ModuleRelativePath", "Public/SQTEUtilityFunctionLibrary.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEUtilityFunctionLibrary>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::ClassParams = {
		&USQTEUtilityFunctionLibrary::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEUtilityFunctionLibrary()
	{
		if (!Z_Registration_Info_UClass_USQTEUtilityFunctionLibrary.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEUtilityFunctionLibrary.OuterSingleton, Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEUtilityFunctionLibrary.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTEUtilityFunctionLibrary>()
	{
		return USQTEUtilityFunctionLibrary::StaticClass();
	}
	USQTEUtilityFunctionLibrary::USQTEUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEUtilityFunctionLibrary);
	USQTEUtilityFunctionLibrary::~USQTEUtilityFunctionLibrary() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEUtilityFunctionLibrary, USQTEUtilityFunctionLibrary::StaticClass, TEXT("USQTEUtilityFunctionLibrary"), &Z_Registration_Info_UClass_USQTEUtilityFunctionLibrary, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEUtilityFunctionLibrary), 3101427079U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_1692741203(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
