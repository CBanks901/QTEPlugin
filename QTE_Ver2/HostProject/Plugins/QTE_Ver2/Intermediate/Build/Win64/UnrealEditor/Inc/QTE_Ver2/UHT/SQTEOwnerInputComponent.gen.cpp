// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTE_Ver2/Public/SQTEOwnerInputComponent.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEOwnerInputComponent() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_APawn_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEOwnerInputComponent();
	QTE_VER2_API UClass* Z_Construct_UClass_USQTEOwnerInputComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_QTE_Ver2();
// End Cross Module References
	DEFINE_FUNCTION(USQTEOwnerInputComponent::execGetActiveKeyData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=P_THIS->GetActiveKeyData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEOwnerInputComponent::execResetData)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ResetData();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEOwnerInputComponent::execOwnerPawnChanged)
	{
		P_GET_OBJECT(APawn,Z_Param_NewPawn);
		P_GET_OBJECT(APawn,Z_Param_OldPawn);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->OwnerPawnChanged(Z_Param_NewPawn,Z_Param_OldPawn);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEOwnerInputComponent::execKeyReleased)
	{
		P_GET_STRUCT(FKey,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyReleased(Z_Param_Ref);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEOwnerInputComponent::execKeyPressed)
	{
		P_GET_STRUCT(FKey,Z_Param_Ref);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->KeyPressed(Z_Param_Ref);
		P_NATIVE_END;
	}
	void USQTEOwnerInputComponent::StaticRegisterNativesUSQTEOwnerInputComponent()
	{
		UClass* Class = USQTEOwnerInputComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetActiveKeyData", &USQTEOwnerInputComponent::execGetActiveKeyData },
			{ "KeyPressed", &USQTEOwnerInputComponent::execKeyPressed },
			{ "KeyReleased", &USQTEOwnerInputComponent::execKeyReleased },
			{ "OwnerPawnChanged", &USQTEOwnerInputComponent::execOwnerPawnChanged },
			{ "ResetData", &USQTEOwnerInputComponent::execResetData },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics
	{
		struct SQTEOwnerInputComponent_eventGetActiveKeyData_Parms
		{
			FString ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ReturnValue_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::NewProp_ReturnValue_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000582, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEOwnerInputComponent_eventGetActiveKeyData_Parms, ReturnValue), METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::NewProp_ReturnValue_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::NewProp_ReturnValue_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::Function_MetaDataParams[] = {
		{ "Category", "InputData" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEOwnerInputComponent, nullptr, "GetActiveKeyData", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::SQTEOwnerInputComponent_eventGetActiveKeyData_Parms), Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics
	{
		struct SQTEOwnerInputComponent_eventKeyPressed_Parms
		{
			FKey Ref;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEOwnerInputComponent_eventKeyPressed_Parms, Ref), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::NewProp_Ref,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEOwnerInputComponent, nullptr, "KeyPressed", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::SQTEOwnerInputComponent_eventKeyPressed_Parms), Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics
	{
		struct SQTEOwnerInputComponent_eventKeyReleased_Parms
		{
			FKey Ref;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_Ref;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::NewProp_Ref = { "Ref", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEOwnerInputComponent_eventKeyReleased_Parms, Ref), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::NewProp_Ref,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEOwnerInputComponent, nullptr, "KeyReleased", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::SQTEOwnerInputComponent_eventKeyReleased_Parms), Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics
	{
		struct SQTEOwnerInputComponent_eventOwnerPawnChanged_Parms
		{
			APawn* NewPawn;
			APawn* OldPawn;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_NewPawn;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OldPawn;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::NewProp_NewPawn = { "NewPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEOwnerInputComponent_eventOwnerPawnChanged_Parms, NewPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::NewProp_OldPawn = { "OldPawn", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(SQTEOwnerInputComponent_eventOwnerPawnChanged_Parms, OldPawn), Z_Construct_UClass_APawn_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::NewProp_NewPawn,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::NewProp_OldPawn,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEOwnerInputComponent, nullptr, "OwnerPawnChanged", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::SQTEOwnerInputComponent_eventOwnerPawnChanged_Parms), Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEOwnerInputComponent, nullptr, "ResetData", nullptr, nullptr, 0, nullptr, 0, RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEOwnerInputComponent);
	UClass* Z_Construct_UClass_USQTEOwnerInputComponent_NoRegister()
	{
		return USQTEOwnerInputComponent::StaticClass();
	}
	struct Z_Construct_UClass_USQTEOwnerInputComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_KeysToUse_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_KeysToUse_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_KeysToUse;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bGamepadOnly_MetaData[];
#endif
		static void NewProp_bGamepadOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bGamepadOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bAnalogOnly_MetaData[];
#endif
		static void NewProp_bAnalogOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bAnalogOnly;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bKeyBoardOnly_MetaData[];
#endif
		static void NewProp_bKeyBoardOnly_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bKeyBoardOnly;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ActiveKeys_Inner;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActiveKeys_MetaData[];
#endif
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ActiveKeys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEOwnerInputComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QTE_Ver2,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEOwnerInputComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEOwnerInputComponent_GetActiveKeyData, "GetActiveKeyData" }, // 2110783663
		{ &Z_Construct_UFunction_USQTEOwnerInputComponent_KeyPressed, "KeyPressed" }, // 3378665666
		{ &Z_Construct_UFunction_USQTEOwnerInputComponent_KeyReleased, "KeyReleased" }, // 1082605740
		{ &Z_Construct_UFunction_USQTEOwnerInputComponent_OwnerPawnChanged, "OwnerPawnChanged" }, // 2282977713
		{ &Z_Construct_UFunction_USQTEOwnerInputComponent_ResetData, "ResetData" }, // 3432433061
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SQTEOwnerInputComponent.h" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse_Inner = { "KeysToUse", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse_MetaData[] = {
		{ "Category", "InputSettings" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
		{ "ToolTip", "Used by the QTE system to determine which keys are allowed to be pressed." },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse = { "KeysToUse", nullptr, (EPropertyFlags)0x0010000000010001, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEOwnerInputComponent, KeysToUse), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse_MetaData)) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly_MetaData[] = {
		{ "Category", "InputSettings" },
		{ "EditCondition", "!bAnalogOnly && !bKeyBoardOnly" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly_SetBit(void* Obj)
	{
		((USQTEOwnerInputComponent*)Obj)->bGamepadOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly = { "bGamepadOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEOwnerInputComponent), &Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly_MetaData[] = {
		{ "Category", "InputSettings" },
		{ "EditCondition", "!bGamepadOnly && !bKeyBoardOnly" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly_SetBit(void* Obj)
	{
		((USQTEOwnerInputComponent*)Obj)->bAnalogOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly = { "bAnalogOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEOwnerInputComponent), &Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly_MetaData[] = {
		{ "Category", "InputSettings" },
		{ "EditCondition", "!bGamepadOnly && !bAnalogOnly" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
	};
#endif
	void Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly_SetBit(void* Obj)
	{
		((USQTEOwnerInputComponent*)Obj)->bKeyBoardOnly = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly = { "bKeyBoardOnly", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(USQTEOwnerInputComponent), &Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly_SetBit, METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys_Inner = { "ActiveKeys", nullptr, (EPropertyFlags)0x0000000000020000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2101135134
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys_MetaData[] = {
		{ "Category", "InputTracker" },
		{ "ModuleRelativePath", "Public/SQTEOwnerInputComponent.h" },
		{ "ToolTip", "This variable tracks the keys that are currently active and are constantly updated. Their input list corresponds with the KeysToUse Array which should be set immediately" },
	};
#endif
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys = { "ActiveKeys", nullptr, (EPropertyFlags)0x0010000000020015, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(USQTEOwnerInputComponent, ActiveKeys), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys_MetaData)) }; // 2101135134
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTEOwnerInputComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_KeysToUse,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bGamepadOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bAnalogOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_bKeyBoardOnly,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEOwnerInputComponent_Statics::NewProp_ActiveKeys,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEOwnerInputComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEOwnerInputComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEOwnerInputComponent_Statics::ClassParams = {
		&USQTEOwnerInputComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTEOwnerInputComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEOwnerInputComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEOwnerInputComponent()
	{
		if (!Z_Registration_Info_UClass_USQTEOwnerInputComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEOwnerInputComponent.OuterSingleton, Z_Construct_UClass_USQTEOwnerInputComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEOwnerInputComponent.OuterSingleton;
	}
	template<> QTE_VER2_API UClass* StaticClass<USQTEOwnerInputComponent>()
	{
		return USQTEOwnerInputComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEOwnerInputComponent);
	USQTEOwnerInputComponent::~USQTEOwnerInputComponent() {}
	struct Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEOwnerInputComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEOwnerInputComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEOwnerInputComponent, USQTEOwnerInputComponent::StaticClass, TEXT("USQTEOwnerInputComponent"), &Z_Registration_Info_UClass_USQTEOwnerInputComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEOwnerInputComponent), 4063978591U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEOwnerInputComponent_h_2819115464(TEXT("/Script/QTE_Ver2"),
		Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEOwnerInputComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEOwnerInputComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
