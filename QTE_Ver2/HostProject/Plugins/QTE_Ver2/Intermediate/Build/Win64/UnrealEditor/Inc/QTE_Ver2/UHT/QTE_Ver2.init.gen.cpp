// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeQTE_Ver2_init() {}
	QTE_VER2_API UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature();
	QTE_VER2_API UFunction* Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_QTE_Ver2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_QTE_Ver2()
	{
		if (!Z_Registration_Info_UPackage__Script_QTE_Ver2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEFinishedDelegate__DelegateSignature,
				(UObject* (*)())Z_Construct_UDelegateFunction_QTE_Ver2_OnQTEStartedDelegate__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/QTE_Ver2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xE7E1B521,
				0x33530ECB,
				METADATA_PARAMS(nullptr, 0)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_QTE_Ver2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_QTE_Ver2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_QTE_Ver2(Z_Construct_UPackage__Script_QTE_Ver2, TEXT("/Script/QTE_Ver2"), Z_Registration_Info_UPackage__Script_QTE_Ver2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xE7E1B521, 0x33530ECB));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
