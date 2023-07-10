// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FConditionalQTE;
struct FKeyToTimeBindHelper;
struct FKey;
class APlayerController;
enum class KeyResultData : uint8;
struct FSubSequence;
class ALevelSequenceActor;
class UDataTable;
struct FInputStruct;
struct FInputData;
#ifdef QTEPLUGIN_SQTEUtilityFunctionLibrary_generated_h
#error "SQTEUtilityFunctionLibrary.generated.h already included, missing '#pragma once' in SQTEUtilityFunctionLibrary.h"
#endif
#define QTEPLUGIN_SQTEUtilityFunctionLibrary_generated_h

#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS \
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


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQTEUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTEPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQTEUtilityFunctionLibrary)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEUtilityFunctionLibrary(); \
	friend struct Z_Construct_UClass_USQTEUtilityFunctionLibrary_Statics; \
public: \
	DECLARE_CLASS(USQTEUtilityFunctionLibrary, UBlueprintFunctionLibrary, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTEPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQTEUtilityFunctionLibrary)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEUtilityFunctionLibrary) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEUtilityFunctionLibrary); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEUtilityFunctionLibrary(USQTEUtilityFunctionLibrary&&); \
	NO_API USQTEUtilityFunctionLibrary(const USQTEUtilityFunctionLibrary&); \
public:


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEUtilityFunctionLibrary(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEUtilityFunctionLibrary(USQTEUtilityFunctionLibrary&&); \
	NO_API USQTEUtilityFunctionLibrary(const USQTEUtilityFunctionLibrary&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEUtilityFunctionLibrary); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEUtilityFunctionLibrary); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEUtilityFunctionLibrary)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_16_PROLOG
#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTEPLUGIN_API UClass* StaticClass<class USQTEUtilityFunctionLibrary>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEUtilityFunctionLibrary_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
