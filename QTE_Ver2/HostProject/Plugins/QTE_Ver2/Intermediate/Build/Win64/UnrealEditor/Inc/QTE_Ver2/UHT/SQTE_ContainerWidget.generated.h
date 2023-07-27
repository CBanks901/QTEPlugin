// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "SQTE_ContainerWidget.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class USQTE_KeyWidget;
class UWidgetAnimation;
struct FKey;
struct FLinearColor;
#ifdef QTE_VER2_SQTE_ContainerWidget_generated_h
#error "SQTE_ContainerWidget.generated.h already included, missing '#pragma once' in SQTE_ContainerWidget.h"
#endif
#define QTE_VER2_SQTE_ContainerWidget_generated_h

#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_SPARSE_DATA
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execToogleKeyVisibility); \
	DECLARE_FUNCTION(execHighlightKeysHoldDown); \
	DECLARE_FUNCTION(execEnableOuterBackground); \
	DECLARE_FUNCTION(execPlayCountDownAnimationHelper); \
	DECLARE_FUNCTION(execHighlightActiveKeysHelper); \
	DECLARE_FUNCTION(execToogleTimedKeyVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execRemoveAllChildrenFromViewPort); \
	DECLARE_FUNCTION(execClearSetUp); \
	DECLARE_FUNCTION(execAddNewKey); \
	DECLARE_FUNCTION(execSetUpKeysHelper);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execToogleKeyVisibility); \
	DECLARE_FUNCTION(execHighlightKeysHoldDown); \
	DECLARE_FUNCTION(execEnableOuterBackground); \
	DECLARE_FUNCTION(execPlayCountDownAnimationHelper); \
	DECLARE_FUNCTION(execHighlightActiveKeysHelper); \
	DECLARE_FUNCTION(execToogleTimedKeyVisibility); \
	DECLARE_FUNCTION(execRemoveChild); \
	DECLARE_FUNCTION(execRemoveAllChildrenFromViewPort); \
	DECLARE_FUNCTION(execClearSetUp); \
	DECLARE_FUNCTION(execAddNewKey); \
	DECLARE_FUNCTION(execSetUpKeysHelper);


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_ACCESSORS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_CALLBACK_WRAPPERS
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUSQTE_ContainerWidget(); \
	friend struct Z_Construct_UClass_USQTE_ContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USQTE_ContainerWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTE_ContainerWidget)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_INCLASS \
private: \
	static void StaticRegisterNativesUSQTE_ContainerWidget(); \
	friend struct Z_Construct_UClass_USQTE_ContainerWidget_Statics; \
public: \
	DECLARE_CLASS(USQTE_ContainerWidget, UUserWidget, COMPILED_IN_FLAGS(CLASS_Abstract), CASTCLASS_None, TEXT("/Script/QTE_Ver2"), NO_API) \
	DECLARE_SERIALIZER(USQTE_ContainerWidget)


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTE_ContainerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTE_ContainerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTE_ContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTE_ContainerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTE_ContainerWidget(USQTE_ContainerWidget&&); \
	NO_API USQTE_ContainerWidget(const USQTE_ContainerWidget&); \
public: \
	NO_API virtual ~USQTE_ContainerWidget();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API USQTE_ContainerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API USQTE_ContainerWidget(USQTE_ContainerWidget&&); \
	NO_API USQTE_ContainerWidget(const USQTE_ContainerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, USQTE_ContainerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(USQTE_ContainerWidget); \
	DEFINE_ABSTRACT_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(USQTE_ContainerWidget) \
	NO_API virtual ~USQTE_ContainerWidget();


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_17_PROLOG
#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_RPC_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_INCLASS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_SPARSE_DATA \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_ACCESSORS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_CALLBACK_WRAPPERS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_INCLASS_NO_PURE_DECLS \
	FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> QTE_VER2_API UClass* StaticClass<class USQTE_ContainerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_BackUpUnreal_TestPluginArea_QTE_Ver2_HostProject_Plugins_QTE_Ver2_Source_QTE_Ver2_Public_SQTE_ContainerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
