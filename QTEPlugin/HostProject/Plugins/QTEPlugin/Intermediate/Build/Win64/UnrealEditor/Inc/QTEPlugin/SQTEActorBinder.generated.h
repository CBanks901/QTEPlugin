// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class ALevelSequenceActor;
 struct FMovieSceneObjectBindingID;
struct FMovieSceneObjectBindingID;
class UDataTable;
class AActor;
 class ALevelSequenceActor;
 class AActor;
#ifdef QTEPLUGIN_SQTEActorBinder_generated_h
#error "SQTEActorBinder.generated.h already included, missing '#pragma once' in SQTEActorBinder.h"
#endif
#define QTEPLUGIN_SQTEActorBinder_generated_h

#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_SPARSE_DATA
#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_RPC_WRAPPERS \
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


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
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


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_EVENT_PARMS \
	struct SQTEActorBinder_eventDynamicHelperScenes_Parms \
	{ \
		FName CurrentRow; \
		ALevelSequenceActor* LevelSeqRef; \
		int32 IndexToFind; \
		bool bFailedInput; \
	}; \
	struct SQTEActorBinder_eventDynamicMainScenes_Parms \
	{ \
		FName CurrentRow; \
	}; \
	struct SQTEActorBinder_eventDynamicOpeningScenes_Parms \
	{ \
		FName CurrentRow; \
		ALevelSequenceActor* LevelSeqRef; \
	}; \
	struct SQTEActorBinder_eventNormalHelperSceneBinding_Parms \
	{ \
		FName CurrentRow; \
		bool Success; \
		int32 IndexToFind; \
		ALevelSequenceActor* LevelSeqRef; \
	}; \
	struct SQTEActorBinder_eventNormalOpeningSceneBinding_Parms \
	{ \
		FName CurrentRow; \
		ALevelSequenceActor* OpeningSeqRef; \
	}; \
	struct SQTEActorBinder_eventNormalSceneBinding_Parms \
	{ \
		FName CurrentRow; \
	};


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS
#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEActorBinder(); \
	friend struct Z_Construct_UClass_USQTEActorBinder_Statics; \
public: \
	DECLARE_CLASS(USQTEActorBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTEPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQTEActorBinder)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEActorBinder(); \
	friend struct Z_Construct_UClass_USQTEActorBinder_Statics; \
public: \
	DECLARE_CLASS(USQTEActorBinder, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/QTEPlugin"), NO_API) \
	DECLARE_SERIALIZER(USQTEActorBinder)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEActorBinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEActorBinder) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEActorBinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEActorBinder); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEActorBinder(USQTEActorBinder&&); \
	NO_API USQTEActorBinder(const USQTEActorBinder&); \
public:


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEActorBinder(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEActorBinder(USQTEActorBinder&&); \
	NO_API USQTEActorBinder(const USQTEActorBinder&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEActorBinder); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEActorBinder); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEActorBinder)


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_16_PROLOG \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_EVENT_PARMS


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_RPC_WRAPPERS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_INCLASS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_SPARSE_DATA \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_CALLBACK_WRAPPERS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_19_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTEPLUGIN_API UClass* StaticClass<class USQTEActorBinder>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
