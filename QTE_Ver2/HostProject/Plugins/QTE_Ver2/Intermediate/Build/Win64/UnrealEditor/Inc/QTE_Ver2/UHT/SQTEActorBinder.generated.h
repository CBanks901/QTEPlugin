// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQTEActorBinder.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class AActor;
 class ALevelSequenceActor;
 struct FMovieSceneObjectBindingID;
class AActor;
class ALevelSequenceActor;
class UDataTable;
struct FMovieSceneObjectBindingID;
#ifdef QTE_VER2_SQTEActorBinder_generated_h
#error "SQTEActorBinder.generated.h already included, missing '#pragma once' in SQTEActorBinder.h"
#endif
#define QTE_VER2_SQTEActorBinder_generated_h

#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_SPARSE_DATA
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execNormalActorBinding); \
	DECLARE_FUNCTION(execNormalHelperSceneGetTargetID); \
	DECLARE_FUNCTION(execNormalSceneBindingSupport); \
	DECLARE_FUNCTION(execDynamicMainScenesSupport); \
	DECLARE_FUNCTION(execDynamicHelperScenesSupport); \
	DECLARE_FUNCTION(execBindAllActors); \
	DECLARE_FUNCTION(execValidOpeningSequence); \
	DECLARE_FUNCTION(execSetUpRoot); \
	DECLARE_FUNCTION(execInitialize);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execNormalActorBinding); \
	DECLARE_FUNCTION(execNormalHelperSceneGetTargetID); \
	DECLARE_FUNCTION(execNormalSceneBindingSupport); \
	DECLARE_FUNCTION(execDynamicMainScenesSupport); \
	DECLARE_FUNCTION(execDynamicHelperScenesSupport); \
	DECLARE_FUNCTION(execBindAllActors); \
	DECLARE_FUNCTION(execValidOpeningSequence); \
	DECLARE_FUNCTION(execSetUpRoot); \
	DECLARE_FUNCTION(execInitialize);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_ACCESSORS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEActorBinder(); \
	friend struct Z_Construct_UClass_USQTEActorBinder_Statics; \
public: \
	DECLARE_CLASS(USQTEActorBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEActorBinder)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEActorBinder(); \
	friend struct Z_Construct_UClass_USQTEActorBinder_Statics; \
public: \
	DECLARE_CLASS(USQTEActorBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEActorBinder)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEActorBinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEActorBinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEActorBinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEActorBinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEActorBinder(USQTEActorBinder&&); \
	NO_API USQTEActorBinder(const USQTEActorBinder&); \
public: \
	NO_API virtual ~USQTEActorBinder();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEActorBinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEActorBinder(USQTEActorBinder&&); \
	NO_API USQTEActorBinder(const USQTEActorBinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEActorBinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEActorBinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEActorBinder) \
	NO_API virtual ~USQTEActorBinder();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_16_PROLOG
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_RPC_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_INCLASS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_INCLASS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTE_VER2_API UClass* StaticClass<class USQTEActorBinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEActorBinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
