// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQTEWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef QTE_VER2_SQTEWidget_generated_h
#error "SQTEWidget.generated.h already included, missing '#pragma once' in SQTEWidget.h"
#endif
#define QTE_VER2_SQTEWidget_generated_h

#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_SPARSE_DATA
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execConditionalFailPreciseRestarter); \
	DECLARE_FUNCTION(execConditionalKeyPressHandler); \
	DECLARE_FUNCTION(execConditionalSubSequenceHandler); \
	DECLARE_FUNCTION(execConditionalSuccesInput); \
	DECLARE_FUNCTION(execConditionalFailInput); \
	DECLARE_FUNCTION(execConditionalPrecisionInput); \
	DECLARE_FUNCTION(execSetUpNextConditionalPrecision); \
	DECLARE_FUNCTION(execDelayInputHelperRemaining); \
	DECLARE_FUNCTION(execDelayInputHelper); \
	DECLARE_FUNCTION(execSetUpLevelSequencerRef); \
	DECLARE_FUNCTION(execConditionalSubSequenceContinueRemaining); \
	DECLARE_FUNCTION(execConditionalSubSequenceContinue); \
	DECLARE_FUNCTION(execSetUpNextKeySequence); \
	DECLARE_FUNCTION(execSetUpNextPrecisionSequenceRemaining); \
	DECLARE_FUNCTION(execSetUpNextPrecisionSequence); \
	DECLARE_FUNCTION(execNormalDelay); \
	DECLARE_FUNCTION(execSuccessfulTimePress); \
	DECLARE_FUNCTION(execSlowDownCheck); \
	DECLARE_FUNCTION(execMaxAttemptsToFailFunction); \
	DECLARE_FUNCTION(execFailLogic); \
	DECLARE_FUNCTION(execTerminateQTE); \
	DECLARE_FUNCTION(execNoInputHandler); \
	DECLARE_FUNCTION(execSubSequenceHandler); \
	DECLARE_FUNCTION(execSequentialKeyHandler); \
	DECLARE_FUNCTION(execMultiKeyHandler); \
	DECLARE_FUNCTION(execKeyPressHandler); \
	DECLARE_FUNCTION(execConditionalSwitchRemaining); \
	DECLARE_FUNCTION(execConditionalSwitch); \
	DECLARE_FUNCTION(execDetermineBranchingPath);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execConditionalFailPreciseRestarter); \
	DECLARE_FUNCTION(execConditionalKeyPressHandler); \
	DECLARE_FUNCTION(execConditionalSubSequenceHandler); \
	DECLARE_FUNCTION(execConditionalSuccesInput); \
	DECLARE_FUNCTION(execConditionalFailInput); \
	DECLARE_FUNCTION(execConditionalPrecisionInput); \
	DECLARE_FUNCTION(execSetUpNextConditionalPrecision); \
	DECLARE_FUNCTION(execDelayInputHelperRemaining); \
	DECLARE_FUNCTION(execDelayInputHelper); \
	DECLARE_FUNCTION(execSetUpLevelSequencerRef); \
	DECLARE_FUNCTION(execConditionalSubSequenceContinueRemaining); \
	DECLARE_FUNCTION(execConditionalSubSequenceContinue); \
	DECLARE_FUNCTION(execSetUpNextKeySequence); \
	DECLARE_FUNCTION(execSetUpNextPrecisionSequenceRemaining); \
	DECLARE_FUNCTION(execSetUpNextPrecisionSequence); \
	DECLARE_FUNCTION(execNormalDelay); \
	DECLARE_FUNCTION(execSuccessfulTimePress); \
	DECLARE_FUNCTION(execSlowDownCheck); \
	DECLARE_FUNCTION(execMaxAttemptsToFailFunction); \
	DECLARE_FUNCTION(execFailLogic); \
	DECLARE_FUNCTION(execTerminateQTE); \
	DECLARE_FUNCTION(execNoInputHandler); \
	DECLARE_FUNCTION(execSubSequenceHandler); \
	DECLARE_FUNCTION(execSequentialKeyHandler); \
	DECLARE_FUNCTION(execMultiKeyHandler); \
	DECLARE_FUNCTION(execKeyPressHandler); \
	DECLARE_FUNCTION(execConditionalSwitchRemaining); \
	DECLARE_FUNCTION(execConditionalSwitch); \
	DECLARE_FUNCTION(execDetermineBranchingPath);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_ACCESSORS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTEWidget(); \
	friend struct Z_Construct_UClass_USQTEWidget_Statics; \
public: \
	DECLARE_CLASS(USQTEWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEWidget)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_INCLASS \
private: \
	static void StaticRegisterNativesUSQTEWidget(); \
	friend struct Z_Construct_UClass_USQTEWidget_Statics; \
public: \
	DECLARE_CLASS(USQTEWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTEWidget)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEWidget(USQTEWidget&&); \
	NO_API USQTEWidget(const USQTEWidget&); \
public: \
	NO_API virtual ~USQTEWidget();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTEWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTEWidget(USQTEWidget&&); \
	NO_API USQTEWidget(const USQTEWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTEWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTEWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTEWidget) \
	NO_API virtual ~USQTEWidget();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_22_PROLOG
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_RPC_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_INCLASS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_INCLASS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTE_VER2_API UClass* StaticClass<class USQTEWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTEWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
