// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/UQTEUtilities.h"
#include "InputCoreTypes.h"
#include "MovieSceneObjectBindingID.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUQTEUtilities() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTableRowBase();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ULevelSequence_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_KeyResultData();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput();
	QTE_VER2_API UEnum* Z_Construct_UEnum_QTE_Ver2_QTEInputPath();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTEHelper();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTEHelperData();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalSequences();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FConditionalSequencesSupport();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FEntityDataHelper();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputData();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FInputStruct();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FKeyInfo();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FKeyToTimeBindHelper();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FKeyToTimeBinding();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FPrecisionKeys();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FQTEEntitySettings();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FQTEInputDataTable();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FResultSequenceBinding();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FSequenceNode();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FSubSequence();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FSubSequenceHelper();
	QTE_VER2_API UScriptStruct* Z_Construct_UScriptStruct_FTimeSequenceHelper();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_KeyResultData;
	static UEnum* KeyResultData_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_KeyResultData.OuterSingleton)
		{
			Z_Registration_Info_UEnum_KeyResultData.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QTE_Ver2_KeyResultData, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("KeyResultData"));
		}
		return Z_Registration_Info_UEnum_KeyResultData.OuterSingleton;
	}
	template<> QTE_VER2_API UEnum* StaticEnum<KeyResultData>()
	{
		return KeyResultData_StaticEnum();
	}
	struct Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enumerators[] = {
		{ "KeyResultData::Success", (int64)KeyResultData::Success },
		{ "KeyResultData::Incomplete", (int64)KeyResultData::Incomplete },
		{ "KeyResultData::Fail", (int64)KeyResultData::Fail },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n *\n */" },
		{ "Fail.Comment", "/**\n *\n */// Incomplete means one or a part of the keys were pressed only but not the entirety of the sequence\n" },
		{ "Fail.Name", "KeyResultData::Fail" },
		{ "Fail.ToolTip", "// Incomplete means one or a part of the keys were pressed only but not the entirety of the sequence" },
		{ "Incomplete.Comment", "/**\n *\n */" },
		{ "Incomplete.Name", "KeyResultData::Incomplete" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "Success.Comment", "/**\n *\n */" },
		{ "Success.Name", "KeyResultData::Success" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		"KeyResultData",
		"KeyResultData",
		Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QTE_Ver2_KeyResultData()
	{
		if (!Z_Registration_Info_UEnum_KeyResultData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_KeyResultData.InnerSingleton, Z_Construct_UEnum_QTE_Ver2_KeyResultData_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_KeyResultData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_QTEInputPath;
	static UEnum* QTEInputPath_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_QTEInputPath.OuterSingleton)
		{
			Z_Registration_Info_UEnum_QTEInputPath.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QTE_Ver2_QTEInputPath, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("QTEInputPath"));
		}
		return Z_Registration_Info_UEnum_QTEInputPath.OuterSingleton;
	}
	template<> QTE_VER2_API UEnum* StaticEnum<QTEInputPath>()
	{
		return QTEInputPath_StaticEnum();
	}
	struct Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enumerators[] = {
		{ "QTEInputPath::KeyPressOnly", (int64)QTEInputPath::KeyPressOnly },
		{ "QTEInputPath::MultiKeys", (int64)QTEInputPath::MultiKeys },
		{ "QTEInputPath::SequentialKeys", (int64)QTEInputPath::SequentialKeys },
		{ "QTEInputPath::MultiSequentialKeys", (int64)QTEInputPath::MultiSequentialKeys },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeyPressOnly.Name", "QTEInputPath::KeyPressOnly" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "MultiKeys.Name", "QTEInputPath::MultiKeys" },
		{ "MultiSequentialKeys.Name", "QTEInputPath::MultiSequentialKeys" },
		{ "SequentialKeys.Name", "QTEInputPath::SequentialKeys" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		"QTEInputPath",
		"QTEInputPath",
		Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QTE_Ver2_QTEInputPath()
	{
		if (!Z_Registration_Info_UEnum_QTEInputPath.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_QTEInputPath.InnerSingleton, Z_Construct_UEnum_QTE_Ver2_QTEInputPath_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_QTEInputPath.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubSequenceHelper;
class UScriptStruct* FSubSequenceHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubSequenceHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubSequenceHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubSequenceHelper, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("SubSequenceHelper"));
	}
	return Z_Registration_Info_UScriptStruct_SubSequenceHelper.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FSubSequenceHelper>()
{
	return FSubSequenceHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubSequenceHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldKey_MetaData[];
#endif
		static void NewProp_bHoldKey_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldKey;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailExplanation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailExplanation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubSequenceHelper>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubSequenceHelper, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey_MetaData[] = {
		{ "Category", "KeyAttributes" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey_SetBit(void* Obj)
	{
		((FSubSequenceHelper*)Obj)->bHoldKey = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey = { "bHoldKey", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSubSequenceHelper), &Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_HoldTime_MetaData[] = {
		{ "Category", "KeyAttributes" },
		{ "EditCondition", "bHoldKey" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_HoldTime = { "HoldTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubSequenceHelper, HoldTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_HoldTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_HoldTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_FailExplanation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_FailExplanation = { "FailExplanation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubSequenceHelper, FailExplanation), METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_FailExplanation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_FailExplanation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_bHoldKey,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_HoldTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewProp_FailExplanation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"SubSequenceHelper",
		sizeof(FSubSequenceHelper),
		alignof(FSubSequenceHelper),
		Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubSequenceHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_SubSequenceHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubSequenceHelper.InnerSingleton, Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubSequenceHelper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SubSequence;
class UScriptStruct* FSubSequence::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SubSequence.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SubSequence.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSubSequence, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("SubSequence"));
	}
	return Z_Registration_Info_UScriptStruct_SubSequence.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FSubSequence>()
{
	return FSubSequence::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSubSequence_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyMap_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyMap_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyMap;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequence_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSubSequence_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSubSequence>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap_Inner = { "KeyMap", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FSubSequenceHelper, METADATA_PARAMS(nullptr, 0) }; // 3261809005
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap_MetaData[] = {
		{ "Category", "KeyArray" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Holds the key(s) that must be held or pressed together" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap = { "KeyMap", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSubSequence, KeyMap), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap_MetaData)) }; // 3261809005
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSubSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSubSequence_Statics::NewProp_KeyMap,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSubSequence_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"SubSequence",
		sizeof(FSubSequence),
		alignof(FSubSequence),
		Z_Construct_UScriptStruct_FSubSequence_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequence_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSubSequence_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSubSequence_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSubSequence()
	{
		if (!Z_Registration_Info_UScriptStruct_SubSequence.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SubSequence.InnerSingleton, Z_Construct_UScriptStruct_FSubSequence_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SubSequence.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_PrecisionKeys;
class UScriptStruct* FPrecisionKeys::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_PrecisionKeys.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_PrecisionKeys.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FPrecisionKeys, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("PrecisionKeys"));
	}
	return Z_Registration_Info_UScriptStruct_PrecisionKeys.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FPrecisionKeys>()
{
	return FPrecisionKeys::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FPrecisionKeys_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeLength_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeLength;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailExplanation_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailExplanation;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecisionKeys_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPrecisionKeys>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Keys" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecisionKeys, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_TimeLength_MetaData[] = {
		{ "Category", "Sequence Attributes" },
		{ "ClampMin", "2.000000" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This value is how long the sequence is. It extends the rate but note keys presses are only valid if pressed within about 75% of the sequence that follows" },
		{ "UIMin", "2.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_TimeLength = { "TimeLength", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecisionKeys, TimeLength), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_TimeLength_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_TimeLength_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_FailExplanation_MetaData[] = {
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_FailExplanation = { "FailExplanation", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FPrecisionKeys, FailExplanation), METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_FailExplanation_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_FailExplanation_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPrecisionKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_TimeLength,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewProp_FailExplanation,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPrecisionKeys_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"PrecisionKeys",
		sizeof(FPrecisionKeys),
		alignof(FPrecisionKeys),
		Z_Construct_UScriptStruct_FPrecisionKeys_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPrecisionKeys_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPrecisionKeys()
	{
		if (!Z_Registration_Info_UScriptStruct_PrecisionKeys.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_PrecisionKeys.InnerSingleton, Z_Construct_UScriptStruct_FPrecisionKeys_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_PrecisionKeys.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper;
class UScriptStruct* FKeyToTimeBindHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyToTimeBindHelper, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("KeyToTimeBindHelper"));
	}
	return Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FKeyToTimeBindHelper>()
{
	return FKeyToTimeBindHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPrecision_MetaData[];
#endif
		static void NewProp_bPrecision_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPrecision;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreciseKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreciseKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSubSequence_MetaData[];
#endif
		static void NewProp_bHasSubSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSubSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SubSeq_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SubSeq;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Key_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Key_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Key;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindow_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindow;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bShouldDelayTime_MetaData[];
#endif
		static void NewProp_bShouldDelayTime_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bShouldDelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DelayTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DelayTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldKeysDown_MetaData[];
#endif
		static void NewProp_bHoldKeysDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldKeysDown;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldDownTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDownTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailedReasoning_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_FailedReasoning;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Beginning of Input data\n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Beginning of Input data" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyToTimeBindHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Disables subsequences. Basically this means that a key has to be pressed during a specific window. Differs from normal because there is a wait time involved" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision_SetBit(void* Obj)
	{
		((FKeyToTimeBindHelper*)Obj)->bPrecision = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision = { "bPrecision", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBindHelper), &Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys_Inner = { "PreciseKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrecisionKeys, METADATA_PARAMS(nullptr, 0) }; // 1597978493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys = { "PreciseKeys", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, PreciseKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys_MetaData)) }; // 1597978493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "!bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Instead of just one key or a group of keys to press/hold simultanoeously, this allows you to add a sequence of keys that need to be pressed and or held during the time window" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence_SetBit(void* Obj)
	{
		((FKeyToTimeBindHelper*)Obj)->bHasSubSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence = { "bHasSubSequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBindHelper), &Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_SubSeq_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "bHasSubSequence && !bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Sequence within the overall sequence. I.E 10 second sequence at the 5 second mark means at 5 seconds, a unique set of keys will have to be pressed within the desired time window" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_SubSeq = { "SubSeq", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, SubSeq), Z_Construct_UScriptStruct_FSubSequence, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_SubSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_SubSeq_MetaData)) }; // 3075086005
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key_Inner = { "Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "!bHasSubSequence && !bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The key or keys that need to be pressed at this specific time in order to be successful" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, Key), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_StartTime_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "When this timed input begins" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_StartTime = { "StartTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, StartTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_StartTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_StartTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_TimeWindow_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "!bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "How long you have to press the desired key. When subsequences are involved, this becomes the total time to press all keys within involved in the sequence." },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_TimeWindow = { "TimeWindow", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, TimeWindow), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_TimeWindow_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_TimeWindow_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "!bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The time slow once we start to approach the TimeRange threshold" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime_SetBit(void* Obj)
	{
		((FKeyToTimeBindHelper*)Obj)->bShouldDelayTime = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime = { "bShouldDelayTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBindHelper), &Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_DelayTime_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "ClamMax", "1.990000" },
		{ "ClampMin", "0.020000" },
		{ "EditCondition", "bShouldDelayTime && !bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Can only range from 0.02 to 1.99. Higher values means shorter timeframe, shorter values means longer timeframes" },
		{ "UIMax", "1.990000" },
		{ "UIMin", "0.020000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_DelayTime = { "DelayTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, DelayTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_DelayTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_DelayTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "!bHasSubSequence" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown_SetBit(void* Obj)
	{
		((FKeyToTimeBindHelper*)Obj)->bHoldKeysDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown = { "bHoldKeysDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBindHelper), &Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_HoldDownTime_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "bHoldKeysDown && !bHasSubSequence && !bPrecision" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_HoldDownTime = { "HoldDownTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, HoldDownTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_HoldDownTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_HoldDownTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_FailedReasoning_MetaData[] = {
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_FailedReasoning = { "FailedReasoning", nullptr, (EPropertyFlags)0x0010000000000000, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBindHelper, FailedReasoning), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_FailedReasoning_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_FailedReasoning_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bPrecision,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_PreciseKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHasSubSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_SubSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_Key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_StartTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_TimeWindow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bShouldDelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_DelayTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_bHoldKeysDown,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_HoldDownTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewProp_FailedReasoning,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"KeyToTimeBindHelper",
		sizeof(FKeyToTimeBindHelper),
		alignof(FKeyToTimeBindHelper),
		Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyToTimeBindHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.InnerSingleton, Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyToTimeBinding;
class UScriptStruct* FKeyToTimeBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyToTimeBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyToTimeBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyToTimeBinding, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("KeyToTimeBinding"));
	}
	return Z_Registration_Info_UScriptStruct_KeyToTimeBinding.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FKeyToTimeBinding>()
{
	return FKeyToTimeBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimed_MetaData[];
#endif
		static void NewProp_bTimed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyTimeBind_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyTimeBind_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyTimeBind;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyCombos_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyCombos_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyCombos;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldKeysDown_MetaData[];
#endif
		static void NewProp_bHoldKeysDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldKeysDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyToTimeBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Whether the keys need to be pressed at specific points in time. When true reveals the KeyTimebind variable." },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed_SetBit(void* Obj)
	{
		((FKeyToTimeBinding*)Obj)->bTimed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed = { "bTimed", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBinding), &Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind_Inner = { "KeyTimeBind", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyToTimeBindHelper, METADATA_PARAMS(nullptr, 0) }; // 3878640176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "bTimed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This only applies if you want a QTE that has time specific input. Each entry is only a point in time on the sequence and values are grouped as one. Sub sequences within this are supported if you want multiple sub sequences within a sequence" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind = { "KeyTimeBind", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBinding, KeyTimeBind), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind_MetaData)) }; // 3878640176
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos_Inner = { "KeyCombos", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "!bTimed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The keys added here all need to be pressed at once. These should be limited to four or however many realistic keys can be pressed at once" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos = { "KeyCombos", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyToTimeBinding, KeyCombos), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown_MetaData[] = {
		{ "Category", "Keys Attributes" },
		{ "EditCondition", "!bTimed" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown_SetBit(void* Obj)
	{
		((FKeyToTimeBinding*)Obj)->bHoldKeysDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown = { "bHoldKeysDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyToTimeBinding), &Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bTimed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyTimeBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_KeyCombos,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewProp_bHoldKeysDown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"KeyToTimeBinding",
		sizeof(FKeyToTimeBinding),
		alignof(FKeyToTimeBinding),
		Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyToTimeBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyToTimeBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyToTimeBinding.InnerSingleton, Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyToTimeBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_KeyInfo;
class UScriptStruct* FKeyInfo::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_KeyInfo.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_KeyInfo.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FKeyInfo, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("KeyInfo"));
	}
	return Z_Registration_Info_UScriptStruct_KeyInfo.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FKeyInfo>()
{
	return FKeyInfo::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FKeyInfo_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSequence_MetaData[];
#endif
		static void NewProp_bHasSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegress_MetaData[];
#endif
		static void NewProp_bCanRegress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoInputTimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegressDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegressDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsToRegress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuccessDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstantFailure_MetaData[];
#endif
		static void NewProp_bInstantFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttemptsToFail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeySequence_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeySequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToPress_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToPress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldKeyDown_MetaData[];
#endif
		static void NewProp_bHoldKeyDown_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldKeyDown;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FKeyInfo_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FKeyInfo>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Number of keys has to at least be greater than 1. Only means 1 or more keys together" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence_SetBit(void* Obj)
	{
		((FKeyInfo*)Obj)->bHasSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence = { "bHasSequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyInfo), &Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Can the scene go in the reverse direction" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress_SetBit(void* Obj)
	{
		((FKeyInfo*)Obj)->bCanRegress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress = { "bCanRegress", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyInfo), &Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_NoInputTimeDelay_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bCanRegress" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The amount of time that the user has until the scene regresses. This also applies to the beginning as well" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_NoInputTimeDelay = { "NoInputTimeDelay", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, NoInputTimeDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_NoInputTimeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_NoInputTimeDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_RegressDistance_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ClampMax", "100.000000" },
		{ "ClampMin", "0.120000" },
		{ "EditCondition", "bCanRegress" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "When a key is not pressed after a period or the wrong key is pressed this goes back in the sequence by a certain amount. If set to 0 it continues until the beginning or a valid key is pressed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_RegressDistance = { "RegressDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, RegressDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_RegressDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_RegressDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_AttemptsToRegress_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ClampMin", "0" },
		{ "EditCondition", "bCanRegress" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If the number of wrong keys are held/pressed, then we start to regress the sequence. This is constantly reset when activated" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_AttemptsToRegress = { "AttemptsToRegress", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, AttemptsToRegress), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_AttemptsToRegress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_AttemptsToRegress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_SuccessDistance_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ClampMax", "5.000000" },
		{ "ClampMin", "0.120000" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "What a successful input means in terms of scale. This must at least be .1 or higher" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_SuccessDistance = { "SuccessDistance", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, SuccessDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_SuccessDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_SuccessDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Should the sequence fail if the wrong key is pressed" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure_SetBit(void* Obj)
	{
		((FKeyInfo*)Obj)->bInstantFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure = { "bInstantFailure", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyInfo), &Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_MaxAttemptsToFail_MetaData[] = {
		{ "Category", "Sequence Data" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bInstantFailure" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If the number of attempts goes beyond this point, it automatically stops the sequennce and fails" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_MaxAttemptsToFail = { "MaxAttemptsToFail", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, MaxAttemptsToFail), METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_MaxAttemptsToFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_MaxAttemptsToFail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeySequence_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "bHasSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeySequence = { "KeySequence", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, KeySequence), Z_Construct_UScriptStruct_FKeyToTimeBinding, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeySequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeySequence_MetaData)) }; // 2831250454
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeyToPress_MetaData[] = {
		{ "Category", "Key Choice" },
		{ "EditCondition", "!bHasSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeyToPress = { "KeyToPress", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FKeyInfo, KeyToPress), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeyToPress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeyToPress_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown_MetaData[] = {
		{ "Category", "Key Attributes" },
		{ "EditCondition", "!bHasSequence" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown_SetBit(void* Obj)
	{
		((FKeyInfo*)Obj)->bHoldKeyDown = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown = { "bHoldKeyDown", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FKeyInfo), &Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FKeyInfo_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHasSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bCanRegress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_NoInputTimeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_RegressDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_AttemptsToRegress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_SuccessDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bInstantFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_MaxAttemptsToFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeySequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_KeyToPress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FKeyInfo_Statics::NewProp_bHoldKeyDown,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FKeyInfo_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"KeyInfo",
		sizeof(FKeyInfo),
		alignof(FKeyInfo),
		Z_Construct_UScriptStruct_FKeyInfo_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FKeyInfo_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FKeyInfo_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FKeyInfo()
	{
		if (!Z_Registration_Info_UScriptStruct_KeyInfo.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_KeyInfo.InnerSingleton, Z_Construct_UScriptStruct_FKeyInfo_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_KeyInfo.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputStruct;
class UScriptStruct* FInputStruct::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputStruct.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputStruct.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputStruct, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("InputStruct"));
	}
	return Z_Registration_Info_UScriptStruct_InputStruct.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FInputStruct>()
{
	return FInputStruct::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputStruct_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputStruct_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputStruct_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputStruct>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputStruct_Statics::NewProp_KeyData_MetaData[] = {
		{ "Category", "Key Info Struct" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputStruct_Statics::NewProp_KeyData = { "KeyData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputStruct, KeyData), Z_Construct_UScriptStruct_FKeyInfo, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputStruct_Statics::NewProp_KeyData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputStruct_Statics::NewProp_KeyData_MetaData)) }; // 2271728203
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputStruct_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputStruct_Statics::NewProp_KeyData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputStruct_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"InputStruct",
		sizeof(FInputStruct),
		alignof(FInputStruct),
		Z_Construct_UScriptStruct_FInputStruct_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputStruct_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputStruct_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputStruct_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputStruct()
	{
		if (!Z_Registration_Info_UScriptStruct_InputStruct.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputStruct.InnerSingleton, Z_Construct_UScriptStruct_FInputStruct_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputStruct.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_InputData;
class UScriptStruct* FInputData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_InputData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_InputData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FInputData, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("InputData"));
	}
	return Z_Registration_Info_UScriptStruct_InputData.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FInputData>()
{
	return FInputData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FInputData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bValidInput_MetaData[];
#endif
		static void NewProp_bValidInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bValidInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCanRegress_MetaData[];
#endif
		static void NewProp_bCanRegress_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCanRegress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoInputTimeDelay_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoInputTimeDelay;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RegressDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_RegressDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_AttemptsToRegress_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_AttemptsToRegress;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SuccessDistance;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstantFailure_MetaData[];
#endif
		static void NewProp_bInstantFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MaxAttemptsToFail_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MaxAttemptsToFail;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasOpeningSequence_MetaData[];
#endif
		static void NewProp_bHasOpeningSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOpeningSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasSequence_MetaData[];
#endif
		static void NewProp_bHasSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTimed_MetaData[];
#endif
		static void NewProp_bTimed_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTimed;
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToTimeBinder_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToTimeBinder_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyToTimeBinder;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHoldDownKeys_MetaData[];
#endif
		static void NewProp_bHoldDownKeys_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHoldDownKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FInputData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FInputData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput_MetaData[] = {
		{ "Category", "Check" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bValidInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput = { "bValidInput", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Can the scene go in the reverse direction" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bCanRegress = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress = { "bCanRegress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_NoInputTimeDelay_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The amount of time that the user has until the scene regresses. This also applies to the beginning as well" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_NoInputTimeDelay = { "NoInputTimeDelay", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, NoInputTimeDelay), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_NoInputTimeDelay_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_NoInputTimeDelay_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_RegressDistance_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "When a key is not pressed after a period or the wrong key is pressed this goes back in the sequence by a certain amount. If set to 0 it continues until the beginning or a valid key is pressed" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_RegressDistance = { "RegressDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, RegressDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_RegressDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_RegressDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_AttemptsToRegress_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If the number of wrong keys are held/pressed, then we start to regress the sequence. This is constantly reset when activated" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_AttemptsToRegress = { "AttemptsToRegress", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, AttemptsToRegress), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_AttemptsToRegress_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_AttemptsToRegress_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_SuccessDistance_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "What a successful input means in terms of scale. This must at least be .1 or higher" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_SuccessDistance = { "SuccessDistance", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, SuccessDistance), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_SuccessDistance_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_SuccessDistance_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Should the sequence fail if the wrong key is pressed" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bInstantFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure = { "bInstantFailure", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_MaxAttemptsToFail_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If the number of attempts goes beyond this point, it automatically stops the sequennce and fails" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_MaxAttemptsToFail = { "MaxAttemptsToFail", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, MaxAttemptsToFail), METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_MaxAttemptsToFail_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_MaxAttemptsToFail_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bHasOpeningSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence = { "bHasOpeningSequence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bHasSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence = { "bHasSequence", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bTimed = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed = { "bTimed", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder_Inner = { "KeyToTimeBinder", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKeyToTimeBindHelper, METADATA_PARAMS(nullptr, 0) }; // 3878640176
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder = { "KeyToTimeBinder", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, KeyToTimeBinder), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder_MetaData)) }; // 3878640176
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "Comment", "// This section only applies if the KeyToTimeBinder variable isn't valid.\n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This section only applies if the KeyToTimeBinder variable isn't valid." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FInputData, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys_MetaData[] = {
		{ "Category", "Sequence data Copy" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys_SetBit(void* Obj)
	{
		((FInputData*)Obj)->bHoldDownKeys = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys = { "bHoldDownKeys", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FInputData), &Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FInputData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bValidInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bCanRegress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_NoInputTimeDelay,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_RegressDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_AttemptsToRegress,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_SuccessDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bInstantFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_MaxAttemptsToFail,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasOpeningSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHasSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bTimed,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_KeyToTimeBinder,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FInputData_Statics::NewProp_bHoldDownKeys,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FInputData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"InputData",
		sizeof(FInputData),
		alignof(FInputData),
		Z_Construct_UScriptStruct_FInputData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FInputData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FInputData()
	{
		if (!Z_Registration_Info_UScriptStruct_InputData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_InputData.InnerSingleton, Z_Construct_UScriptStruct_FInputData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_InputData.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_QTEConditionalInput;
	static UEnum* QTEConditionalInput_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_QTEConditionalInput.OuterSingleton)
		{
			Z_Registration_Info_UEnum_QTEConditionalInput.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("QTEConditionalInput"));
		}
		return Z_Registration_Info_UEnum_QTEConditionalInput.OuterSingleton;
	}
	template<> QTE_VER2_API UEnum* StaticEnum<QTEConditionalInput>()
	{
		return QTEConditionalInput_StaticEnum();
	}
	struct Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enumerators[] = {
		{ "QTEConditionalInput::KeysOnly", (int64)QTEConditionalInput::KeysOnly },
		{ "QTEConditionalInput::Precision", (int64)QTEConditionalInput::Precision },
		{ "QTEConditionalInput::SubSequence", (int64)QTEConditionalInput::SubSequence },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enum_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "KeysOnly.Name", "QTEConditionalInput::KeysOnly" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "Precision.Name", "QTEConditionalInput::Precision" },
		{ "SubSequence.Name", "QTEConditionalInput::SubSequence" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		"QTEConditionalInput",
		"QTEConditionalInput",
		Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enumerators,
		UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enumerators),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enum_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::Enum_MetaDataParams))
	};
	UEnum* Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput()
	{
		if (!Z_Registration_Info_UEnum_QTEConditionalInput.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_QTEConditionalInput.InnerSingleton, Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_QTEConditionalInput.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData;
class UScriptStruct* FConditionalQTEHelperData::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalQTEHelperData, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ConditionalQTEHelperData"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FConditionalQTEHelperData>()
{
	return FConditionalQTEHelperData::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Threshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Threshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Keys_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FStructPropertyParams NewProp_PreciseKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PreciseKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_PreciseKeys;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_subSeq_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_subSeq;
		static const UECodeGen_Private::FBytePropertyParams NewProp_InputChoice_Underlying;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InputChoice_MetaData[];
#endif
		static const UECodeGen_Private::FEnumPropertyParams NewProp_InputChoice;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalQTEHelperData>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Threshold_MetaData[] = {
		{ "Category", "Starting Condition" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "These should go up with each data entry. This value correlates deeper into the sequence as it increases" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Threshold = { "Threshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelperData, Threshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Threshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Threshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Keys_MetaData[] = {
		{ "Category", "Conditional Key Choice" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This is not a subsequence but uses the elements inside of it as a build. This is the normal value" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelperData, Keys), Z_Construct_UScriptStruct_FSubSequenceHelper, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Keys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Keys_MetaData)) }; // 3261809005
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys_Inner = { "PreciseKeys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FPrecisionKeys, METADATA_PARAMS(nullptr, 0) }; // 1597978493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys_MetaData[] = {
		{ "Category", "Conditional Key Choice" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys = { "PreciseKeys", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelperData, PreciseKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys_MetaData)) }; // 1597978493
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_subSeq_MetaData[] = {
		{ "Category", "Conditional Key Choice" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_subSeq = { "subSeq", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelperData, subSeq), Z_Construct_UScriptStruct_FSubSequence, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_subSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_subSeq_MetaData)) }; // 3075086005
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, nullptr, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice_MetaData[] = {
		{ "Category", "Sequence Helper" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Can't be set in blueprint but helps us to know which of the three above the user decided. The first filled in the table is the first chosen" },
	};
#endif
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice = { "InputChoice", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelperData, InputChoice), Z_Construct_UEnum_QTE_Ver2_QTEConditionalInput, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice_MetaData)) }; // 3398546564
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Threshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_Keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_PreciseKeys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_subSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewProp_InputChoice,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ConditionalQTEHelperData",
		sizeof(FConditionalQTEHelperData),
		alignof(FConditionalQTEHelperData),
		Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTEHelperData()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.InnerSingleton, Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalQTEHelper;
class UScriptStruct* FConditionalQTEHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalQTEHelper, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ConditionalQTEHelper"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FConditionalQTEHelper>()
{
	return FConditionalQTEHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Data_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Data_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Data;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalQTEHelper>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data_Inner = { "Data", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FConditionalQTEHelperData, METADATA_PARAMS(nullptr, 0) }; // 3044113385
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data_MetaData[] = {
		{ "Category", "Conditional Data Array" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data = { "Data", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTEHelper, Data), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data_MetaData)) }; // 3044113385
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewProp_Data,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ConditionalQTEHelper",
		sizeof(FConditionalQTEHelper),
		alignof(FConditionalQTEHelper),
		Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTEHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.InnerSingleton, Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalQTEHelper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ResultSequenceBinding;
class UScriptStruct* FResultSequenceBinding::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ResultSequenceBinding.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ResultSequenceBinding.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FResultSequenceBinding, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ResultSequenceBinding"));
	}
	return Z_Registration_Info_UScriptStruct_ResultSequenceBinding.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FResultSequenceBinding>()
{
	return FResultSequenceBinding::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FResultSequenceBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRoot_MetaData[];
#endif
		static void NewProp_bIsRoot_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRoot;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bResult_MetaData[];
#endif
		static void NewProp_bResult_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bResult;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Binding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_Binding;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Delete this section later Beginning\n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Delete this section later Beginning" },
	};
#endif
	void* Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FResultSequenceBinding>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot_MetaData[] = {
		{ "Category", "Root Check" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If this is the root of the scene it means that the scene will start from this object" },
	};
#endif
	void Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot_SetBit(void* Obj)
	{
		((FResultSequenceBinding*)Obj)->bIsRoot = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot = { "bIsRoot", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FResultSequenceBinding), &Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult_MetaData[] = {
		{ "Category", "Binding Version" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Is this binding a success input or failure version" },
	};
#endif
	void Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult_SetBit(void* Obj)
	{
		((FResultSequenceBinding*)Obj)->bResult = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult = { "bResult", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FResultSequenceBinding), &Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_Binding_MetaData[] = {
		{ "Category", "Sequence Binding ID" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_Binding = { "Binding", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FResultSequenceBinding, Binding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_Binding_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_Binding_MetaData)) }; // 1341447431
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bIsRoot,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_bResult,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewProp_Binding,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ResultSequenceBinding",
		sizeof(FResultSequenceBinding),
		alignof(FResultSequenceBinding),
		Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FResultSequenceBinding()
	{
		if (!Z_Registration_Info_UScriptStruct_ResultSequenceBinding.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ResultSequenceBinding.InnerSingleton, Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ResultSequenceBinding.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport;
class UScriptStruct* FConditionalSequencesSupport::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalSequencesSupport, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ConditionalSequencesSupport"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FConditionalSequencesSupport>()
{
	return FConditionalSequencesSupport::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_LevelSequenceRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSequenceRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_PlayRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_PlayRate;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// End of Deletion \n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "End of Deletion" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalSequencesSupport>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_LevelSequenceRef_MetaData[] = {
		{ "Category", "LevelSequence" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_LevelSequenceRef = { "LevelSequenceRef", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalSequencesSupport, LevelSequenceRef), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_LevelSequenceRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_LevelSequenceRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_PlayRate_MetaData[] = {
		{ "Category", "Scene Rate" },
		{ "ClampMin", "0.010000" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "UIMin", "0.010000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_PlayRate = { "PlayRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalSequencesSupport, PlayRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_PlayRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_PlayRate_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_LevelSequenceRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewProp_PlayRate,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ConditionalSequencesSupport",
		sizeof(FConditionalSequencesSupport),
		alignof(FConditionalSequencesSupport),
		Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalSequencesSupport()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.InnerSingleton, Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalSequences;
class UScriptStruct* FConditionalSequences::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalSequences.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalSequences.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalSequences, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ConditionalSequences"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalSequences.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FConditionalSequences>()
{
	return FConditionalSequences::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalSequences_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_Sequences_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_Sequences_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Sequences_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_Sequences;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalSequences_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalSequences>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_ValueProp = { "Sequences", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FConditionalSequencesSupport, METADATA_PARAMS(nullptr, 0) }; // 3188490140
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_Key_KeyProp = { "Sequences_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_MetaData[] = {
		{ "Category", "NameSequenceMap" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "TitleProperty", "This sequence has a play rate of {PlayRate}" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences = { "Sequences", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalSequences, Sequences), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_MetaData)) }; // 3188490140
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalSequences_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewProp_Sequences,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalSequences_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ConditionalSequences",
		sizeof(FConditionalSequences),
		alignof(FConditionalSequences),
		Z_Construct_UScriptStruct_FConditionalSequences_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequences_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalSequences_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalSequences_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalSequences()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalSequences.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalSequences.InnerSingleton, Z_Construct_UScriptStruct_FConditionalSequences_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalSequences.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_ConditionalQTE;
class UScriptStruct* FConditionalQTE::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_ConditionalQTE.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_ConditionalQTE.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FConditionalQTE, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("ConditionalQTE"));
	}
	return Z_Registration_Info_UScriptStruct_ConditionalQTE.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FConditionalQTE>()
{
	return FConditionalQTE::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FConditionalQTE_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bInstantFailure_MetaData[];
#endif
		static void NewProp_bInstantFailure_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bInstantFailure;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailureLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FailureLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessLimit_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessLimit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailRatio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FailRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessRatio_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessRatio;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_inputData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_inputData;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bPlayHelperSequences_MetaData[];
#endif
		static void NewProp_bPlayHelperSequences_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bPlayHelperSequences;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_SuccessThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailThreshold_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_FailThreshold;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_FailInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SuccessInput;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bHasOpeningSequence_MetaData[];
#endif
		static void NewProp_bHasOpeningSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bHasOpeningSequence;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FConditionalQTE>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure_SetBit(void* Obj)
	{
		((FConditionalQTE*)Obj)->bInstantFailure = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure = { "bInstantFailure", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConditionalQTE), &Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailureLimit_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "0" },
		{ "EditCondition", "!bInstantFailure" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Determines when the sequence completely fails. If 0 then it cannot fail IF InstantFailure is disabled" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailureLimit = { "FailureLimit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, FailureLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailureLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailureLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessLimit_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Determines when the sequence completely succeeds" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessLimit = { "SuccessLimit", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, SuccessLimit), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessLimit_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessLimit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailRatio_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "1" },
		{ "EditCondition", "!bInstantFailure" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Determines how far a failed input contributes to the failure limit. Defines what a failure means exactly" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailRatio = { "FailRatio", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, FailRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessRatio_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "1" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Determines how far a successful input goes towards the success limit. Defines what success means exactly" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessRatio = { "SuccessRatio", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, SuccessRatio), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessRatio_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessRatio_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_inputData_MetaData[] = {
		{ "Category", "Conditional Input Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Matches a threshold input to some input type of your choice. Precision/Normal/Subsequence" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_inputData = { "inputData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, inputData), Z_Construct_UScriptStruct_FConditionalQTEHelper, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_inputData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_inputData_MetaData)) }; // 709811672
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This allows you to play helper scenes that play during the main sequence when a input fails or succeeds but the overall sequence itself is yet to be terminated and will continue afterwords" },
	};
#endif
	void Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences_SetBit(void* Obj)
	{
		((FConditionalQTE*)Obj)->bPlayHelperSequences = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences = { "bPlayHelperSequences", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConditionalQTE), &Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessThreshold_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bPlayHelperSequences" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Only determines when to play a success sequence, NOT total success. This limit is constantly challenged against the current sequence and will repeat when this threshold is passed each time" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessThreshold = { "SuccessThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, SuccessThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailThreshold_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ClampMin", "1" },
		{ "EditCondition", "bPlayHelperSequences && !bInstantFailure" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Only determines when to play a fail sequence, NOT total failure. This limit is constantly challenged against the current sequence and will repeat when this threshold is passed each time" },
		{ "UIMin", "1" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailThreshold = { "FailThreshold", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, FailThreshold), METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailThreshold_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailThreshold_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailInput_MetaData[] = {
		{ "Category", "Conditional Branch Data" },
		{ "EditCondition", "!bInstantFailure && bPlayHelperSequences" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This is not a complete failure. This is optional if you want to make so that when a key isn't pressed a certain failure sequence plays then goes back to normal. This can be blank but if more than one is used a random one will play" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailInput = { "FailInput", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, FailInput), Z_Construct_UScriptStruct_FConditionalSequences, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailInput_MetaData)) }; // 1754064588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessInput_MetaData[] = {
		{ "Category", "Conditional Branch Data" },
		{ "EditCondition", "bPlayHelperSequences" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This is not a complete success. This is optional if you want a sequence to play when a certain threshold is reached. This can be blank but if more than one is used a random one will play." },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessInput = { "SuccessInput", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FConditionalQTE, SuccessInput), Z_Construct_UScriptStruct_FConditionalSequences, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessInput_MetaData)) }; // 1754064588
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence_MetaData[] = {
		{ "Category", "Conditional Data" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence_SetBit(void* Obj)
	{
		((FConditionalQTE*)Obj)->bHasOpeningSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence = { "bHasOpeningSequence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FConditionalQTE), &Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FConditionalQTE_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bInstantFailure,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailureLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessLimit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessRatio,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_inputData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bPlayHelperSequences,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailThreshold,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_FailInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_SuccessInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewProp_bHasOpeningSequence,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FConditionalQTE_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"ConditionalQTE",
		sizeof(FConditionalQTE),
		alignof(FConditionalQTE),
		Z_Construct_UScriptStruct_FConditionalQTE_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FConditionalQTE_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FConditionalQTE_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FConditionalQTE()
	{
		if (!Z_Registration_Info_UScriptStruct_ConditionalQTE.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_ConditionalQTE.InnerSingleton, Z_Construct_UScriptStruct_FConditionalQTE_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_ConditionalQTE.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_SequenceNode;
class UScriptStruct* FSequenceNode::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_SequenceNode.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_SequenceNode.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FSequenceNode, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("SequenceNode"));
	}
	return Z_Registration_Info_UScriptStruct_SequenceNode.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FSequenceNode>()
{
	return FSequenceNode::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FSequenceNode_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SequenceName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SceneRate_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_SceneRate;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bDynamicScenes_MetaData[];
#endif
		static void NewProp_bDynamicScenes_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bDynamicScenes;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsConditionalQTE_MetaData[];
#endif
		static void NewProp_bIsConditionalQTE_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsConditionalQTE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_conditionalQTE_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_conditionalQTE;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OpeningSeq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentSeq_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentSeq;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_FailName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_FailName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SuccessName_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_SuccessName;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCinematicOnly_MetaData[];
#endif
		static void NewProp_bCinematicOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCinematicOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bExecution_MetaData[];
#endif
		static void NewProp_bExecution_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bExecution;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DestroyTime_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_DestroyTime;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAll_MetaData[];
#endif
		static void NewProp_bAll_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAll;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bOwner_MetaData[];
#endif
		static void NewProp_bOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAllExeceptOwner_MetaData[];
#endif
		static void NewProp_bAllExeceptOwner_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAllExeceptOwner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bUseIndex_MetaData[];
#endif
		static void NewProp_bUseIndex_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bUseIndex;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorToExecute_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorToExecute_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorToExecute;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ActorIndices_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorIndices_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActorIndices;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SequenceInput_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SequenceInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FSequenceNode_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FSequenceNode>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceName_MetaData[] = {
		{ "Category", "Miscallaneous" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceName = { "SequenceName", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, SequenceName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SceneRate_MetaData[] = {
		{ "Category", "Scene Rate" },
		{ "ClampMin", "0.100000" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "UIMin", "0.100000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SceneRate = { "SceneRate", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, SceneRate), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SceneRate_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SceneRate_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes_MetaData[] = {
		{ "Category", "Dynamic" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "If true then you need to set up bindings inside the dynamic openings function and dynamic sequenees function for all opening or sequences that require it" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bDynamicScenes = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes = { "bDynamicScenes", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE_MetaData[] = {
		{ "Category", "ConditionalQTE data" },
		{ "EditCondition", "!bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Differs from normal QTE's. These types are based on winning and losing conditions and won't stop until those conditions are met. When enabled the CurrentSequence reference will loop continously" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bIsConditionalQTE = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE = { "bIsConditionalQTE", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_conditionalQTE_MetaData[] = {
		{ "Category", "Conditional QTE Data" },
		{ "EditCondition", "bIsConditionalQTE && !bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_conditionalQTE = { "conditionalQTE", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, conditionalQTE), Z_Construct_UScriptStruct_FConditionalQTE, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_conditionalQTE_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_conditionalQTE_MetaData)) }; // 1464872324
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_OpeningSeq_MetaData[] = {
		{ "Category", "Opening Sequence" },
		{ "EditCondition", "!bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Opening Cinematic if it has one" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_OpeningSeq = { "OpeningSeq", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, OpeningSeq), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_OpeningSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_OpeningSeq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_CurrentSeq_MetaData[] = {
		{ "Category", "Main Sequence" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The current scene to play. This has to be set to something. If not nothing will occur" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_CurrentSeq = { "CurrentSeq", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, CurrentSeq), Z_Construct_UClass_ULevelSequence_NoRegister, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_CurrentSeq_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_CurrentSeq_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_FailName_MetaData[] = {
		{ "Category", "Fail Row" },
		{ "EditCondition", "!bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This name should match a Row name in the graph. Has to be exact. If not nothing will happen. Leave blank if irrelavent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_FailName = { "FailName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, FailName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_FailName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_FailName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SuccessName_MetaData[] = {
		{ "Category", "Success Row" },
		{ "EditCondition", "!bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "This name should match a Row name in the graph. Has to be exact. If not nothing will happen. Leave blank if irrelavent" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SuccessName = { "SuccessName", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, SuccessName), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SuccessName_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SuccessName_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly_MetaData[] = {
		{ "Category", "Cinematic Option" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bCinematicOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly = { "bCinematicOnly", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution_MetaData[] = {
		{ "Category", "Exeuctions" },
		{ "EditCondition", "bCinematicOnly" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bExecution = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution = { "bExecution", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_DestroyTime_MetaData[] = {
		{ "Category", "Executions" },
		{ "ClampMin", "1.000000" },
		{ "EditCondition", "bExecution" },
		{ "EditConitionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The time after the scene ends to destroy the actor(s)" },
		{ "UIMin", "1.000000" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_DestroyTime = { "DestroyTime", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, DestroyTime), METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_DestroyTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_DestroyTime_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Execute all actors involved in this sequence" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bAll = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll = { "bAll", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution && !bAll" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Should the owner be executed when the sequence ends" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner = { "bOwner", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution && !bAll && !bOwner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bAllExeceptOwner = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner = { "bAllExeceptOwner", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution && !bAll && !bAllExeceptOwner" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex_SetBit(void* Obj)
	{
		((FSequenceNode*)Obj)->bUseIndex = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex = { "bUseIndex", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FSequenceNode), &Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex_MetaData)) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute_Inner = { "ActorToExecute", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution && !bAll && !bAllExeceptOwner && !bUseIndex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Any additional actors with the exception of the owner. Should be the same name used when store data is call from the helper component" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute = { "ActorToExecute", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, ActorToExecute), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices_Inner = { "ActorIndices", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices_MetaData[] = {
		{ "Category", "Executions" },
		{ "EditCondition", "bCinematicOnly && bExecution && bUseIndex" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices = { "ActorIndices", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, ActorIndices), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceInput_MetaData[] = {
		{ "Category", "Normal QTE Data" },
		{ "EditCondition", "!bCinematicOnly && !bIsConditionalQTE" },
		{ "EditConditionHides", "" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceInput = { "SequenceInput", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FSequenceNode, SequenceInput), Z_Construct_UScriptStruct_FInputStruct, METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceInput_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceInput_MetaData)) }; // 3590555601
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FSequenceNode_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SceneRate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bDynamicScenes,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bIsConditionalQTE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_conditionalQTE,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_OpeningSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_CurrentSeq,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_FailName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SuccessName,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bCinematicOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bExecution,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_DestroyTime,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAll,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bAllExeceptOwner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_bUseIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorToExecute,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_ActorIndices,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FSequenceNode_Statics::NewProp_SequenceInput,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FSequenceNode_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"SequenceNode",
		sizeof(FSequenceNode),
		alignof(FSequenceNode),
		Z_Construct_UScriptStruct_FSequenceNode_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FSequenceNode_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FSequenceNode_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FSequenceNode()
	{
		if (!Z_Registration_Info_UScriptStruct_SequenceNode.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_SequenceNode.InnerSingleton, Z_Construct_UScriptStruct_FSequenceNode_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_SequenceNode.InnerSingleton;
	}

static_assert(std::is_polymorphic<FQTEInputDataTable>() == std::is_polymorphic<FTableRowBase>(), "USTRUCT FQTEInputDataTable cannot be polymorphic unless super FTableRowBase is polymorphic");

	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEInputDataTable;
class UScriptStruct* FQTEInputDataTable::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEInputDataTable.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEInputDataTable.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEInputDataTable, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("QTEInputDataTable"));
	}
	return Z_Registration_Info_UScriptStruct_QTEInputDataTable.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FQTEInputDataTable>()
{
	return FQTEInputDataTable::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQTEInputDataTable_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_SeqData_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_SeqData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEInputDataTable>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewProp_SeqData_MetaData[] = {
		{ "Category", "Binding" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Contains all data within the table" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewProp_SeqData = { "SeqData", nullptr, (EPropertyFlags)0x0010000000010015, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQTEInputDataTable, SeqData), Z_Construct_UScriptStruct_FSequenceNode, METADATA_PARAMS(Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewProp_SeqData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewProp_SeqData_MetaData)) }; // 3553332628
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewProp_SeqData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		Z_Construct_UScriptStruct_FTableRowBase,
		&NewStructOps,
		"QTEInputDataTable",
		sizeof(FQTEInputDataTable),
		alignof(FQTEInputDataTable),
		Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQTEInputDataTable()
	{
		if (!Z_Registration_Info_UScriptStruct_QTEInputDataTable.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEInputDataTable.InnerSingleton, Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QTEInputDataTable.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_EntityDataHelper;
class UScriptStruct* FEntityDataHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_EntityDataHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_EntityDataHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FEntityDataHelper, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("EntityDataHelper"));
	}
	return Z_Registration_Info_UScriptStruct_EntityDataHelper.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FEntityDataHelper>()
{
	return FEntityDataHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FEntityDataHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeyToStart_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeyToStart_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeyToStart;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bCompletedSequence_MetaData[];
#endif
		static void NewProp_bCompletedSequence_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bCompletedSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bIsRepeatable_MetaData[];
#endif
		static void NewProp_bIsRepeatable_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bIsRepeatable;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Runs_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_Runs;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityDataHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// Beginning of recipient attachment component\n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "Beginning of recipient attachment component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FEntityDataHelper>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart_Inner = { "KeyToStart", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart_MetaData[] = {
		{ "Category", "RunData" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "NoElementDuplicate", "" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart = { "KeyToStart", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEntityDataHelper, KeyToStart), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence_MetaData[] = {
		{ "Category", "RunData" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence_SetBit(void* Obj)
	{
		((FEntityDataHelper*)Obj)->bCompletedSequence = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence = { "bCompletedSequence", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEntityDataHelper), &Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable_MetaData[] = {
		{ "Category", "RunData" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable_SetBit(void* Obj)
	{
		((FEntityDataHelper*)Obj)->bIsRepeatable = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable = { "bIsRepeatable", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(FEntityDataHelper), &Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable_SetBit, METADATA_PARAMS(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_Runs_MetaData[] = {
		{ "Category", "RunData" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_Runs = { "Runs", nullptr, (EPropertyFlags)0x0010000000020005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FEntityDataHelper, Runs), METADATA_PARAMS(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_Runs_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_Runs_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FEntityDataHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_KeyToStart,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bCompletedSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_bIsRepeatable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewProp_Runs,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FEntityDataHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"EntityDataHelper",
		sizeof(FEntityDataHelper),
		alignof(FEntityDataHelper),
		Z_Construct_UScriptStruct_FEntityDataHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FEntityDataHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FEntityDataHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_EntityDataHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_EntityDataHelper.InnerSingleton, Z_Construct_UScriptStruct_FEntityDataHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_EntityDataHelper.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_QTEEntitySettings;
class UScriptStruct* FQTEEntitySettings::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_QTEEntitySettings.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_QTEEntitySettings.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FQTEEntitySettings, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("QTEEntitySettings"));
	}
	return Z_Registration_Info_UScriptStruct_QTEEntitySettings.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FQTEEntitySettings>()
{
	return FQTEEntitySettings::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FQTEEntitySettings_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
		static const UECodeGen_Private::FStructPropertyParams NewProp_EntityData_ValueProp;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_EntityData_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_EntityData_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_EntityData;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FQTEEntitySettings>();
	}
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_ValueProp = { "EntityData", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 1, Z_Construct_UScriptStruct_FEntityDataHelper, METADATA_PARAMS(nullptr, 0) }; // 10371266
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_Key_KeyProp = { "EntityData_Key", nullptr, (EPropertyFlags)0x0000000000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_MetaData[] = {
		{ "Category", "Table Data Map" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "NoElementDuplicate", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData = { "EntityData", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FQTEEntitySettings, EntityData), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_MetaData)) }; // 10371266
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewProp_EntityData,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"QTEEntitySettings",
		sizeof(FQTEEntitySettings),
		alignof(FQTEEntitySettings),
		Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FQTEEntitySettings()
	{
		if (!Z_Registration_Info_UScriptStruct_QTEEntitySettings.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_QTEEntitySettings.InnerSingleton, Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_QTEEntitySettings.InnerSingleton;
	}
	static FStructRegistrationInfo Z_Registration_Info_UScriptStruct_TimeSequenceHelper;
class UScriptStruct* FTimeSequenceHelper::StaticStruct()
{
	if (!Z_Registration_Info_UScriptStruct_TimeSequenceHelper.OuterSingleton)
	{
		Z_Registration_Info_UScriptStruct_TimeSequenceHelper.OuterSingleton = GetStaticStruct(Z_Construct_UScriptStruct_FTimeSequenceHelper, (UObject*)Z_Construct_UPackage__Script_QTE_Ver2(), TEXT("TimeSequenceHelper"));
	}
	return Z_Registration_Info_UScriptStruct_TimeSequenceHelper.OuterSingleton;
}
template<> QTE_VER2_API UScriptStruct* StaticStruct<FTimeSequenceHelper>()
{
	return FTimeSequenceHelper::StaticStruct();
}
	struct Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_StartTimeCopy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_StartTimeCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeWindowCopy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeWindowCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TimeDelayCopy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TimeDelayCopy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_HoldDownKeyTimeCopy_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_HoldDownKeyTimeCopy;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UECodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::Struct_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "// End of recipient attachment component\n" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "End of recipient attachment component" },
	};
#endif
	void* Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FTimeSequenceHelper>();
	}
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_StartTimeCopy_MetaData[] = {
		{ "Category", "Start Time" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_StartTimeCopy = { "StartTimeCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeSequenceHelper, StartTimeCopy), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_StartTimeCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_StartTimeCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeWindowCopy_MetaData[] = {
		{ "Category", "Time Window" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
		{ "ToolTip", "The amount of time you have to press a key if you are in a subsequence or multi subsequnce" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeWindowCopy = { "TimeWindowCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeSequenceHelper, TimeWindowCopy), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeWindowCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeWindowCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeDelayCopy_MetaData[] = {
		{ "Category", "DelayTime" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeDelayCopy = { "TimeDelayCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeSequenceHelper, TimeDelayCopy), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeDelayCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeDelayCopy_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_HoldDownKeyTimeCopy_MetaData[] = {
		{ "Category", "HoldDownTime" },
		{ "ModuleRelativePath", "Public/UQTEUtilities.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_HoldDownKeyTimeCopy = { "HoldDownKeyTimeCopy", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(FTimeSequenceHelper, HoldDownKeyTimeCopy), METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_HoldDownKeyTimeCopy_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_HoldDownKeyTimeCopy_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_StartTimeCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeWindowCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_TimeDelayCopy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewProp_HoldDownKeyTimeCopy,
	};
	const UECodeGen_Private::FStructParams Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
		nullptr,
		&NewStructOps,
		"TimeSequenceHelper",
		sizeof(FTimeSequenceHelper),
		alignof(FTimeSequenceHelper),
		Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FTimeSequenceHelper()
	{
		if (!Z_Registration_Info_UScriptStruct_TimeSequenceHelper.InnerSingleton)
		{
			UECodeGen_Private::ConstructUScriptStruct(Z_Registration_Info_UScriptStruct_TimeSequenceHelper.InnerSingleton, Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::ReturnStructParams);
		}
		return Z_Registration_Info_UScriptStruct_TimeSequenceHelper.InnerSingleton;
	}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FStructRegisterCompiledInInfo ScriptStructInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::EnumInfo[] = {
		{ KeyResultData_StaticEnum, TEXT("KeyResultData"), &Z_Registration_Info_UEnum_KeyResultData, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3641111644U) },
		{ QTEInputPath_StaticEnum, TEXT("QTEInputPath"), &Z_Registration_Info_UEnum_QTEInputPath, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 2536162723U) },
		{ QTEConditionalInput_StaticEnum, TEXT("QTEConditionalInput"), &Z_Registration_Info_UEnum_QTEConditionalInput, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 3398546564U) },
	};
	const FStructRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::ScriptStructInfo[] = {
		{ FSubSequenceHelper::StaticStruct, Z_Construct_UScriptStruct_FSubSequenceHelper_Statics::NewStructOps, TEXT("SubSequenceHelper"), &Z_Registration_Info_UScriptStruct_SubSequenceHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubSequenceHelper), 3261809005U) },
		{ FSubSequence::StaticStruct, Z_Construct_UScriptStruct_FSubSequence_Statics::NewStructOps, TEXT("SubSequence"), &Z_Registration_Info_UScriptStruct_SubSequence, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSubSequence), 3075086005U) },
		{ FPrecisionKeys::StaticStruct, Z_Construct_UScriptStruct_FPrecisionKeys_Statics::NewStructOps, TEXT("PrecisionKeys"), &Z_Registration_Info_UScriptStruct_PrecisionKeys, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FPrecisionKeys), 1597978493U) },
		{ FKeyToTimeBindHelper::StaticStruct, Z_Construct_UScriptStruct_FKeyToTimeBindHelper_Statics::NewStructOps, TEXT("KeyToTimeBindHelper"), &Z_Registration_Info_UScriptStruct_KeyToTimeBindHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyToTimeBindHelper), 3878640176U) },
		{ FKeyToTimeBinding::StaticStruct, Z_Construct_UScriptStruct_FKeyToTimeBinding_Statics::NewStructOps, TEXT("KeyToTimeBinding"), &Z_Registration_Info_UScriptStruct_KeyToTimeBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyToTimeBinding), 2831250454U) },
		{ FKeyInfo::StaticStruct, Z_Construct_UScriptStruct_FKeyInfo_Statics::NewStructOps, TEXT("KeyInfo"), &Z_Registration_Info_UScriptStruct_KeyInfo, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FKeyInfo), 2271728203U) },
		{ FInputStruct::StaticStruct, Z_Construct_UScriptStruct_FInputStruct_Statics::NewStructOps, TEXT("InputStruct"), &Z_Registration_Info_UScriptStruct_InputStruct, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputStruct), 3590555601U) },
		{ FInputData::StaticStruct, Z_Construct_UScriptStruct_FInputData_Statics::NewStructOps, TEXT("InputData"), &Z_Registration_Info_UScriptStruct_InputData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FInputData), 1017580504U) },
		{ FConditionalQTEHelperData::StaticStruct, Z_Construct_UScriptStruct_FConditionalQTEHelperData_Statics::NewStructOps, TEXT("ConditionalQTEHelperData"), &Z_Registration_Info_UScriptStruct_ConditionalQTEHelperData, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalQTEHelperData), 3044113385U) },
		{ FConditionalQTEHelper::StaticStruct, Z_Construct_UScriptStruct_FConditionalQTEHelper_Statics::NewStructOps, TEXT("ConditionalQTEHelper"), &Z_Registration_Info_UScriptStruct_ConditionalQTEHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalQTEHelper), 709811672U) },
		{ FResultSequenceBinding::StaticStruct, Z_Construct_UScriptStruct_FResultSequenceBinding_Statics::NewStructOps, TEXT("ResultSequenceBinding"), &Z_Registration_Info_UScriptStruct_ResultSequenceBinding, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FResultSequenceBinding), 3367230057U) },
		{ FConditionalSequencesSupport::StaticStruct, Z_Construct_UScriptStruct_FConditionalSequencesSupport_Statics::NewStructOps, TEXT("ConditionalSequencesSupport"), &Z_Registration_Info_UScriptStruct_ConditionalSequencesSupport, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalSequencesSupport), 3188490140U) },
		{ FConditionalSequences::StaticStruct, Z_Construct_UScriptStruct_FConditionalSequences_Statics::NewStructOps, TEXT("ConditionalSequences"), &Z_Registration_Info_UScriptStruct_ConditionalSequences, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalSequences), 1754064588U) },
		{ FConditionalQTE::StaticStruct, Z_Construct_UScriptStruct_FConditionalQTE_Statics::NewStructOps, TEXT("ConditionalQTE"), &Z_Registration_Info_UScriptStruct_ConditionalQTE, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FConditionalQTE), 1464872324U) },
		{ FSequenceNode::StaticStruct, Z_Construct_UScriptStruct_FSequenceNode_Statics::NewStructOps, TEXT("SequenceNode"), &Z_Registration_Info_UScriptStruct_SequenceNode, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FSequenceNode), 3553332628U) },
		{ FQTEInputDataTable::StaticStruct, Z_Construct_UScriptStruct_FQTEInputDataTable_Statics::NewStructOps, TEXT("QTEInputDataTable"), &Z_Registration_Info_UScriptStruct_QTEInputDataTable, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEInputDataTable), 4252287483U) },
		{ FEntityDataHelper::StaticStruct, Z_Construct_UScriptStruct_FEntityDataHelper_Statics::NewStructOps, TEXT("EntityDataHelper"), &Z_Registration_Info_UScriptStruct_EntityDataHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FEntityDataHelper), 10371266U) },
		{ FQTEEntitySettings::StaticStruct, Z_Construct_UScriptStruct_FQTEEntitySettings_Statics::NewStructOps, TEXT("QTEEntitySettings"), &Z_Registration_Info_UScriptStruct_QTEEntitySettings, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FQTEEntitySettings), 1719737447U) },
		{ FTimeSequenceHelper::StaticStruct, Z_Construct_UScriptStruct_FTimeSequenceHelper_Statics::NewStructOps, TEXT("TimeSequenceHelper"), &Z_Registration_Info_UScriptStruct_TimeSequenceHelper, CONSTRUCT_RELOAD_VERSION_INFO(FStructReloadVersionInfo, sizeof(FTimeSequenceHelper), 2178895709U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_3557003214(TEXT("/Script/QTE_Ver2"),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::ScriptStructInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::ScriptStructInfo),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_UQTEUtilities_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
