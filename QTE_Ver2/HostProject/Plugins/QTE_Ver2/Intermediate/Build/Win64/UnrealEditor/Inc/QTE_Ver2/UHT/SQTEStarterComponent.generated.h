// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQTEStarterComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
 class AActor;
class UDataTable;
class USQTEActorBinder;
enum class KeyResultData : uint8;
struct FQTEInputDataTable;
#ifdef QTE_VER2_SQTEStarterComponent_generated_h
#error "SQTEStarterComponent.generated.h already included, missing '#pragma once' in SQTEStarterComponent.h"
#endif
#define QTE_VER2_SQTEStarterComponent_generated_h

#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_14_DELEGATE \
QTE_VER2_API void FOnQTEFinishedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQTEFinishedDelegate, bool bFinishedQTE);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_15_DELEGATE \
QTE_VER2_API void FOnQTEStartedDelegate_DelegateWrapper(const FMulticastScriptDelegate& OnQTEStartedDelegate, bool bStartedQTE);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_SPARSE_DATA
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_RPC_WRAPPERS \
	virtual KeyResultData ConditionalQTEEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execGetDataTableAsset); \
	DECLARE_FUNCTION(execBindOpeningData); \
	DECLARE_FUNCTION(execFailedDataTableRecord); \
	DECLARE_FUNCTION(execCheckDataTable); \
	DECLARE_FUNCTION(execStartQTE); \
	DECLARE_FUNCTION(execInitializeQTE); \
	DECLARE_FUNCTION(execFinishedInputBranch); \
	DECLARE_FUNCTION(execInputSequence); \
	DECLARE_FUNCTION(execBindAllSequenceActors); \
	DECLARE_FUNCTION(execSuccessNormalKeyPress); \
	DECLARE_FUNCTION(execFailNormalKeyPress); \
	DECLARE_FUNCTION(execKeyEventNormal); \
	DECLARE_FUNCTION(execFailSequence); \
	DECLARE_FUNCTION(execSuccessSequence); \
	DECLARE_FUNCTION(execSequenceTimerEvent); \
	DECLARE_FUNCTION(execTimedSequenceEvent); \
	DECLARE_FUNCTION(execFinshedOpening); \
	DECLARE_FUNCTION(execSetInitialSequenceData); \
	DECLARE_FUNCTION(execBranchToNewPath); \
	DECLARE_FUNCTION(execExecutionHandler); \
	DECLARE_FUNCTION(execCompletedSequenceHelper); \
	DECLARE_FUNCTION(execConditionalQTEFailure); \
	DECLARE_FUNCTION(execConditionalQTESuccess); \
	DECLARE_FUNCTION(execConditionalQTEEventHelper); \
	DECLARE_FUNCTION(execRecordRelativeTransform); \
	DECLARE_FUNCTION(execResetCameraLocation); \
	DECLARE_FUNCTION(execConditionalQTEEvent);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	virtual KeyResultData ConditionalQTEEvent_Implementation(); \
 \
	DECLARE_FUNCTION(execGetDataTableAsset); \
	DECLARE_FUNCTION(execBindOpeningData); \
	DECLARE_FUNCTION(execFailedDataTableRecord); \
	DECLARE_FUNCTION(execCheckDataTable); \
	DECLARE_FUNCTION(execStartQTE); \
	DECLARE_FUNCTION(execInitializeQTE); \
	DECLARE_FUNCTION(execFinishedInputBranch); \
	DECLARE_FUNCTION(execInputSequence); \
	DECLARE_FUNCTION(execBindAllSequenceActors); \
	DECLARE_FUNCTION(execSuccessNormalKeyPress); \
	DECLARE_FUNCTION(execFailNormalKeyPress); \
	DECLARE_FUNCTION(execKeyEventNormal); \
	DECLARE_FUNCTION(execFailSequence); \
	DECLARE_FUNCTION(execSuccessSequence); \
	DECLARE_FUNCTION(execSequenceTimerEvent); \
	DECLARE_FUNCTION(execTimedSequenceEvent); \
	DECLARE_FUNCTION(execFinshedOpening); \
	DECLARE_FUNCTION(execSetInitialSequenceData); \
	DECLARE_FUNCTION(execBranchToNewPath); \
	DECLARE_FUNCTION(execExecutionHandler); \
	DECLARE_FUNCTION(execCompletedSequenceHelper); \
	DECLARE_FUNCTION(execConditionalQTEFailure); \
	DECLARE_FUNCTION(execConditionalQTESuccess); \
	DECLARE_FUNCTION(execConditionalQTEEventHelper); \
	DECLARE_FUNCTION(execRecordRelativeTransform); \
	DECLARE_FUNCTION(execResetCameraLocation); \
	DECLARE_FUNCTION(execConditionalQTEEvent);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_ACCESSORS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_CALLBACK_WRAPPERS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEStarterComponent(); \
	friend struct Z_Construct_UClass_USQTEStarterComponent_Statics; \
public: \
	DECLARE_CLASS(USQTEStarterComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEStarterComponent)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEStarterComponent(); \
	friend struct Z_Construct_UClass_USQTEStarterComponent_Statics; \
public: \
	DECLARE_CLASS(USQTEStarterComponent, UActorComponent, COMPILED_IN_FLAGS(CLASS_Abstract | CLASS_Config), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEStarterComponent)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEStarterComponent(const FObjectInitializer& ObjectInitializer); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEStarterComponent) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEStarterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEStarterComponent); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEStarterComponent(USQTEStarterComponent&&); \
	NO_API USQTEStarterComponent(const USQTEStarterComponent&); \
public: \
	NO_API virtual ~USQTEStarterComponent();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEStarterComponent(USQTEStarterComponent&&); \
	NO_API USQTEStarterComponent(const USQTEStarterComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEStarterComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEStarterComponent); \
	DEFINE_ABSTRACT_DEFAULT_CONSTRUCTOR_CALL(USQTEStarterComponent) \
	NO_API virtual ~USQTEStarterComponent();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_17_PROLOG
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_RPC_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_INCLASS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_INCLASS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTE_VER2_API UClass* StaticClass<class USQTEStarterComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEStarterComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
