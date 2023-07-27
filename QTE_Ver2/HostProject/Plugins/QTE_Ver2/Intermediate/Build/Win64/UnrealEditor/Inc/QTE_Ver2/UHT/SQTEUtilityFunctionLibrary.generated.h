// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQTEUtilityFunctionLibrary.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
class APlayerController;
class UDataTable;
enum class KeyResultData : uint8;
struct FConditionalQTE;
struct FInputData;
struct FInputStruct;
struct FKey;
struct FKeyToTimeBindHelper;
struct FSubSequence;
#ifdef QTE_VER2_SQTEUtilityFunctionLibrary_generated_h
#error "SQTEUtilityFunctionLibrary.generated.h already included, missing '#pragma once' in SQTEUtilityFunctionLibrary.h"
#endif
#define QTE_VER2_SQTEUtilityFunctionLibrary_generated_h

#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execGetConditionalParameters); \
	DECLARE_FUNCTION(execVerifyStartTimes); \
	DECLARE_FUNCTION(execGetPressedKeys); \
	DECLARE_FUNCTION(execGetHeldDownKeys); \
	DECLARE_FUNCTION(execCheckKeys); \
	DECLARE_FUNCTION(execSetUpOwnerKeyBinding); \
	DECLARE_FUNCTION(execIsLastTimedSubSeq); \
	DECLARE_FUNCTION(execGetSequenceEndTime); \
	DECLARE_FUNCTION(execIsValidRow); \
	DECLARE_FUNCTION(execbisValidRow); \
	DECLARE_FUNCTION(execSetSequenceName); \
	DECLARE_FUNCTION(execGetInputParameters);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execGetConditionalParameters); \
	DECLARE_FUNCTION(execVerifyStartTimes); \
	DECLARE_FUNCTION(execGetPressedKeys); \
	DECLARE_FUNCTION(execGetHeldDownKeys); \
	DECLARE_FUNCTION(execCheckKeys); \
	DECLARE_FUNCTION(execSetUpOwnerKeyBinding); \
	DECLARE_FUNCTION(execIsLastTimedSubSeq); \
	DECLARE_FUNCTION(execGetSequenceEndTime); \
	DECLARE_FUNCTION(execIsValidRow); \
	DECLARE_FUNCTION(execbisValidRow); \
	DECLARE_FUNCTION(execSetSequenceName); \
	DECLARE_FUNCTION(execGetInputParameters);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_ACCESSORS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQTEUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEUtilityFunctionLibrary)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQTEUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEUtilityFunctionLibrary)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEUtilityFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEUtilityFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEUtilityFunctionLibrary(USQTEUtilityFunctionLibrary&&); \
	NO_API USQTEUtilityFunctionLibrary(const USQTEUtilityFunctionLibrary&); \
public: \
	NO_API virtual ~USQTEUtilityFunctionLibrary();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEUtilityFunctionLibrary(USQTEUtilityFunctionLibrary&&); \
	NO_API USQTEUtilityFunctionLibrary(const USQTEUtilityFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEUtilityFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEUtilityFunctionLibrary) \
	NO_API virtual ~USQTEUtilityFunctionLibrary();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_16_PROLOG
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTE_VER2_API UClass* StaticClass<class USQTEUtilityFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEUtilityFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
