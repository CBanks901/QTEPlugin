// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTEPlugin/Public/SQTEEntityComponent.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEEntityComponent() {}
// Cross Module References
	QTEPLUGIN_API UClass* Z_Construct_UClass_USQTEEntityComponent_NoRegister();
	QTEPLUGIN_API UClass* Z_Construct_UClass_USQTEEntityComponent();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_QTEPlugin();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	QTEPLUGIN_API UScriptStruct* Z_Construct_UScriptStruct_FQTEEntitySettings();
// End Cross Module References
	DEFINE_FUNCTION(USQTEEntityComponent::execGetStartKeys)
	{
		P_GET_OBJECT(UDataTable,Z_Param_TableRef);
		P_GET_UBOOL_REF(Z_Param_Out_Result);
		P_GET_TARRAY_REF(FKey,Z_Param_Out_Keys);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GetStartKeys(Z_Param_TableRef,Z_Param_Out_Result,Z_Param_Out_Keys);
		P_NATIVE_END;
	}
	void USQTEEntityComponent::StaticRegisterNativesUSQTEEntityComponent()
	{
		UClass* Class = USQTEEntityComponent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "GetStartKeys", &USQTEEntityComponent::execGetStartKeys },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics
	{
		struct SQTEEntityComponent_eventGetStartKeys_Parms
		{
			UDataTable* TableRef;
			bool Result;
			TArray<FKey> Keys;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TableRef;
		static void NewProp_Result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Result;
		static const UECodeGen_Private::FStructPropertyParams NewProp_Keys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_Keys;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_TableRef = { "TableRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEEntityComponent_eventGetStartKeys_Parms, TableRef), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Result_SetBit(void* Obj)
	{
		((SQTEEntityComponent_eventGetStartKeys_Parms*)Obj)->Result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Result = { "Result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEEntityComponent_eventGetStartKeys_Parms), &Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Keys_Inner = { "Keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Keys = { "Keys", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEEntityComponent_eventGetStartKeys_Parms, Keys), EArrayPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 2615338182
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_TableRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Result,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::NewProp_Keys,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::Function_MetaDataParams[] = {
		{ "Category", "Keys" },
		{ "Comment", "// Called every frame\n//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;\n" },
		{ "ModuleRelativePath", "Public/SQTEEntityComponent.h" },
		{ "ToolTip", "Called every frame\nvirtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEEntityComponent, nullptr, "GetStartKeys", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::SQTEEntityComponent_eventGetStartKeys_Parms), Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEEntityComponent);
	UClass* Z_Construct_UClass_USQTEEntityComponent_NoRegister()
	{
		return USQTEEntityComponent::StaticClass();
	}
	struct Z_Construct_UClass_USQTEEntityComponent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_QTETableSettings_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_QTETableSettings;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEEntityComponent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_QTEPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEEntityComponent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEEntityComponent_GetStartKeys, "GetStartKeys" }, // 212058058
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEEntityComponent_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "SQTEEntityComponent.h" },
		{ "ModuleRelativePath", "Public/SQTEEntityComponent.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEEntityComponent_Statics::NewProp_QTETableSettings_MetaData[] = {
		{ "Category", "DataTables" },
		{ "ModuleRelativePath", "Public/SQTEEntityComponent.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEEntityComponent_Statics::NewProp_QTETableSettings = { "QTETableSettings", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEEntityComponent, QTETableSettings), Z_Construct_UScriptStruct_FQTEEntitySettings, METADATA_PARAMS(Z_Construct_UClass_USQTEEntityComponent_Statics::NewProp_QTETableSettings_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEEntityComponent_Statics::NewProp_QTETableSettings_MetaData)) }; // 731667939
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTEEntityComponent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEEntityComponent_Statics::NewProp_QTETableSettings,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEEntityComponent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEEntityComponent>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEEntityComponent_Statics::ClassParams = {
		&USQTEEntityComponent::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTEEntityComponent_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTEEntityComponent_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEEntityComponent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEEntityComponent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEEntityComponent()
	{
		if (!Z_Registration_Info_UClass_USQTEEntityComponent.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEEntityComponent.OuterSingleton, Z_Construct_UClass_USQTEEntityComponent_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEEntityComponent.OuterSingleton;
	}
	template<> QTEPLUGIN_API UClass* StaticClass<USQTEEntityComponent>()
	{
		return USQTEEntityComponent::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEEntityComponent);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEEntityComponent_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEEntityComponent_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEEntityComponent, USQTEEntityComponent::StaticClass, TEXT("USQTEEntityComponent"), &Z_Registration_Info_UClass_USQTEEntityComponent, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEEntityComponent), 3092177272U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEEntityComponent_h_330997275(TEXT("/Script/QTEPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEEntityComponent_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEEntityComponent_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
