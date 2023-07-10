// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "QTEPlugin/Public/SQTEActorBinder.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeSQTEActorBinder() {}
// Cross Module References
	QTEPLUGIN_API UClass* Z_Construct_UClass_USQTEActorBinder_NoRegister();
	QTEPLUGIN_API UClass* Z_Construct_UClass_USQTEActorBinder();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_QTEPlugin();
	LEVELSEQUENCE_API UClass* Z_Construct_UClass_ALevelSequenceActor_NoRegister();
	MOVIESCENE_API UScriptStruct* Z_Construct_UScriptStruct_FMovieSceneObjectBindingID();
	ENGINE_API UClass* Z_Construct_UClass_UDataTable_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FTransform();
// End Cross Module References
	DEFINE_FUNCTION(USQTEActorBinder::execNormalActorBinding)
	{
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_LevelSeqRef);
		P_GET_TMAP(FName,FMovieSceneObjectBindingID,Z_Param_BindingData);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_RootBind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NormalActorBinding(Z_Param_LevelSeqRef,Z_Param_BindingData,Z_Param_RootBind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execNormalHelperSceneGetTargetID)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentRow);
		P_GET_UBOOL(Z_Param_Success);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToFind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->NormalHelperSceneGetTargetID(Z_Param_CurrentRow,Z_Param_Success,Z_Param_IndexToFind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execNormalSceneBindingSupport)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentRow);
		P_GET_TMAP(FName,FMovieSceneObjectBindingID,Z_Param_BindingData);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_RootBind);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->NormalSceneBindingSupport(Z_Param_CurrentRow,Z_Param_BindingData,Z_Param_RootBind);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execDynamicMainScenesSupport)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentRow);
		P_GET_TMAP(FName,FMovieSceneObjectBindingID,Z_Param_BindingData);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_OwnerBinding);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_RootBindingRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->DynamicMainScenesSupport(Z_Param_CurrentRow,Z_Param_BindingData,Z_Param_OwnerBinding,Z_Param_RootBindingRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execDynamicHelperScenesSupport)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentRow);
		P_GET_PROPERTY(FIntProperty,Z_Param_IndexToFind);
		P_GET_UBOOL(Z_Param_bFailedInput);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FName*)Z_Param__Result=P_THIS->DynamicHelperScenesSupport(Z_Param_CurrentRow,Z_Param_IndexToFind,Z_Param_bFailedInput);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execBindAllActors)
	{
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_LevelSeqRef);
		P_GET_TMAP(FName,FMovieSceneObjectBindingID,Z_Param_BindingData);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_OwnerBinding);
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_RootBindingRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=P_THIS->BindAllActors(Z_Param_LevelSeqRef,Z_Param_BindingData,Z_Param_OwnerBinding,Z_Param_RootBindingRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execValidOpeningSequence)
	{
		P_GET_PROPERTY(FNameProperty,Z_Param_CurrentRow);
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_OpeningLevelSeqRef);
		P_GET_UBOOL_REF(Z_Param_Out_result);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ValidOpeningSequence(Z_Param_CurrentRow,Z_Param_OpeningLevelSeqRef,Z_Param_Out_result);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execSetUpRoot)
	{
		P_GET_STRUCT(FMovieSceneObjectBindingID,Z_Param_IDRef);
		P_GET_OBJECT(ALevelSequenceActor,Z_Param_LevelSeqActorRef);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SetUpRoot(Z_Param_IDRef,Z_Param_LevelSeqActorRef);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(USQTEActorBinder::execInitialize)
	{
		P_GET_OBJECT(UDataTable,Z_Param_InDataTable);
		P_GET_OBJECT(AActor,Z_Param_Owner);
		P_GET_TMAP(FName,ALevelSequenceActor*,Z_Param_RowSequence);
		P_GET_TMAP(FName,AActor*,Z_Param_ActorsList);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->Initialize(Z_Param_InDataTable,Z_Param_Owner,Z_Param_RowSequence,Z_Param_ActorsList);
		P_NATIVE_END;
	}
	static FName NAME_USQTEActorBinder_DynamicHelperScenes = FName(TEXT("DynamicHelperScenes"));
	void USQTEActorBinder::DynamicHelperScenes(const FName CurrentRow, ALevelSequenceActor* LevelSeqRef, int32 IndexToFind, bool bFailedInput)
	{
		SQTEActorBinder_eventDynamicHelperScenes_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		Parms.LevelSeqRef=LevelSeqRef;
		Parms.IndexToFind=IndexToFind;
		Parms.bFailedInput=bFailedInput ? true : false;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_DynamicHelperScenes),&Parms);
	}
	static FName NAME_USQTEActorBinder_DynamicMainScenes = FName(TEXT("DynamicMainScenes"));
	void USQTEActorBinder::DynamicMainScenes(const FName CurrentRow)
	{
		SQTEActorBinder_eventDynamicMainScenes_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_DynamicMainScenes),&Parms);
	}
	static FName NAME_USQTEActorBinder_DynamicOpeningScenes = FName(TEXT("DynamicOpeningScenes"));
	void USQTEActorBinder::DynamicOpeningScenes(const FName CurrentRow, ALevelSequenceActor* LevelSeqRef)
	{
		SQTEActorBinder_eventDynamicOpeningScenes_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		Parms.LevelSeqRef=LevelSeqRef;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_DynamicOpeningScenes),&Parms);
	}
	static FName NAME_USQTEActorBinder_NormalHelperSceneBinding = FName(TEXT("NormalHelperSceneBinding"));
	void USQTEActorBinder::NormalHelperSceneBinding(const FName CurrentRow, bool Success, int32 IndexToFind, ALevelSequenceActor* LevelSeqRef)
	{
		SQTEActorBinder_eventNormalHelperSceneBinding_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		Parms.Success=Success ? true : false;
		Parms.IndexToFind=IndexToFind;
		Parms.LevelSeqRef=LevelSeqRef;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_NormalHelperSceneBinding),&Parms);
	}
	static FName NAME_USQTEActorBinder_NormalOpeningSceneBinding = FName(TEXT("NormalOpeningSceneBinding"));
	void USQTEActorBinder::NormalOpeningSceneBinding(const FName CurrentRow, ALevelSequenceActor* OpeningSeqRef)
	{
		SQTEActorBinder_eventNormalOpeningSceneBinding_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		Parms.OpeningSeqRef=OpeningSeqRef;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_NormalOpeningSceneBinding),&Parms);
	}
	static FName NAME_USQTEActorBinder_NormalSceneBinding = FName(TEXT("NormalSceneBinding"));
	void USQTEActorBinder::NormalSceneBinding(const FName CurrentRow)
	{
		SQTEActorBinder_eventNormalSceneBinding_Parms Parms;
		Parms.CurrentRow=CurrentRow;
		ProcessEvent(FindFunctionChecked(NAME_USQTEActorBinder_NormalSceneBinding),&Parms);
	}
	void USQTEActorBinder::StaticRegisterNativesUSQTEActorBinder()
	{
		UClass* Class = USQTEActorBinder::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "BindAllActors", &USQTEActorBinder::execBindAllActors },
			{ "DynamicHelperScenesSupport", &USQTEActorBinder::execDynamicHelperScenesSupport },
			{ "DynamicMainScenesSupport", &USQTEActorBinder::execDynamicMainScenesSupport },
			{ "Initialize", &USQTEActorBinder::execInitialize },
			{ "NormalActorBinding", &USQTEActorBinder::execNormalActorBinding },
			{ "NormalHelperSceneGetTargetID", &USQTEActorBinder::execNormalHelperSceneGetTargetID },
			{ "NormalSceneBindingSupport", &USQTEActorBinder::execNormalSceneBindingSupport },
			{ "SetUpRoot", &USQTEActorBinder::execSetUpRoot },
			{ "ValidOpeningSequence", &USQTEActorBinder::execValidOpeningSequence },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics
	{
		struct SQTEActorBinder_eventBindAllActors_Parms
		{
			ALevelSequenceActor* LevelSeqRef;
			TMap<FName,FMovieSceneObjectBindingID> BindingData;
			FMovieSceneObjectBindingID OwnerBinding;
			FMovieSceneObjectBindingID RootBindingRef;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBindingRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_LevelSeqRef = { "LevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventBindAllActors_Parms, LevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData_ValueProp = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData_Key_KeyProp = { "BindingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventBindAllActors_Parms, BindingData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_OwnerBinding = { "OwnerBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventBindAllActors_Parms, OwnerBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_RootBindingRef = { "RootBindingRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventBindAllActors_Parms, RootBindingRef), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	void Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventBindAllActors_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventBindAllActors_Parms), &Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_LevelSeqRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_BindingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_OwnerBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_RootBindingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::Function_MetaDataParams[] = {
		{ "Category", "Scene Binding" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
		{ "ToolTip", "Has a name and sequence binding attachement. Both should be valid. The name entered here should correspond to a map inside the ActorsListRef. ActorsListRef corresponds to Bind Dynamic Actors when you call Store Data in the QTE Helper" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "BindAllActors", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::SQTEActorBinder_eventBindAllActors_Parms), Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_BindAllActors()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_BindAllActors_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqRef;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexToFind;
		static void NewProp_bFailedInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailedInput;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenes_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_LevelSeqRef = { "LevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenes_Parms, LevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_IndexToFind = { "IndexToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenes_Parms, IndexToFind), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_bFailedInput_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventDynamicHelperScenes_Parms*)Obj)->bFailedInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_bFailedInput = { "bFailedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventDynamicHelperScenes_Parms), &Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_bFailedInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_LevelSeqRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_IndexToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::NewProp_bFailedInput,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Helper Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "DynamicHelperScenes", nullptr, nullptr, sizeof(SQTEActorBinder_eventDynamicHelperScenes_Parms), Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics
	{
		struct SQTEActorBinder_eventDynamicHelperScenesSupport_Parms
		{
			FName CurrentRow;
			int32 IndexToFind;
			bool bFailedInput;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexToFind;
		static void NewProp_bFailedInput_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bFailedInput;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenesSupport_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_IndexToFind = { "IndexToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenesSupport_Parms, IndexToFind), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_bFailedInput_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventDynamicHelperScenesSupport_Parms*)Obj)->bFailedInput = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_bFailedInput = { "bFailedInput", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventDynamicHelperScenesSupport_Parms), &Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_bFailedInput_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicHelperScenesSupport_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_IndexToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_bFailedInput,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Helper Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "DynamicHelperScenesSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::SQTEActorBinder_eventDynamicHelperScenesSupport_Parms), Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicMainScenes_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::NewProp_CurrentRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Main Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "DynamicMainScenes", nullptr, nullptr, sizeof(SQTEActorBinder_eventDynamicMainScenes_Parms), Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics
	{
		struct SQTEActorBinder_eventDynamicMainScenesSupport_Parms
		{
			FName CurrentRow;
			TMap<FName,FMovieSceneObjectBindingID> BindingData;
			FMovieSceneObjectBindingID OwnerBinding;
			FMovieSceneObjectBindingID RootBindingRef;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerBinding;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBindingRef;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicMainScenesSupport_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData_ValueProp = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData_Key_KeyProp = { "BindingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicMainScenesSupport_Parms, BindingData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_OwnerBinding = { "OwnerBinding", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicMainScenesSupport_Parms, OwnerBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_RootBindingRef = { "RootBindingRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicMainScenesSupport_Parms, RootBindingRef), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	void Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventDynamicMainScenesSupport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventDynamicMainScenesSupport_Parms), &Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_BindingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_OwnerBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_RootBindingRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Main Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "DynamicMainScenesSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::SQTEActorBinder_eventDynamicMainScenesSupport_Parms), Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicOpeningScenes_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_LevelSeqRef = { "LevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventDynamicOpeningScenes_Parms, LevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::NewProp_LevelSeqRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::Function_MetaDataParams[] = {
		{ "Category", "Opening Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "DynamicOpeningScenes", nullptr, nullptr, sizeof(SQTEActorBinder_eventDynamicOpeningScenes_Parms), Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics
	{
		struct SQTEActorBinder_eventInitialize_Parms
		{
			UDataTable* InDataTable;
			AActor* Owner;
			TMap<FName,ALevelSequenceActor*> RowSequence;
			TMap<FName,AActor*> ActorsList;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_InDataTable;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Owner;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_RowSequence_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_RowSequence_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RowSequence_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_RowSequence;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsList_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsList_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorsList;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_InDataTable = { "InDataTable", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventInitialize_Parms, InDataTable), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_Owner = { "Owner", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventInitialize_Parms, Owner), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_ValueProp = { "RowSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_Key_KeyProp = { "RowSequence_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence = { "RowSequence", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventInitialize_Parms, RowSequence), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList_ValueProp = { "ActorsList", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList_Key_KeyProp = { "ActorsList_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList = { "ActorsList", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventInitialize_Parms, ActorsList), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_InDataTable,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_Owner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_RowSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::NewProp_ActorsList,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::Function_MetaDataParams[] = {
		{ "Category", "Initialization" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "Initialize", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::SQTEActorBinder_eventInitialize_Parms), Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_Initialize()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_Initialize_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics
	{
		struct SQTEActorBinder_eventNormalActorBinding_Parms
		{
			ALevelSequenceActor* LevelSeqRef;
			TMap<FName,FMovieSceneObjectBindingID> BindingData;
			FMovieSceneObjectBindingID RootBind;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqRef;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_LevelSeqRef = { "LevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalActorBinding_Parms, LevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData_ValueProp = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData_Key_KeyProp = { "BindingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalActorBinding_Parms, BindingData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_RootBind = { "RootBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalActorBinding_Parms, RootBind), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	void Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventNormalActorBinding_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventNormalActorBinding_Parms), &Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_LevelSeqRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_BindingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_RootBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Normal Bindings" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalActorBinding", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::SQTEActorBinder_eventNormalActorBinding_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexToFind;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneBinding_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_CurrentRow_MetaData)) };
	void Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventNormalHelperSceneBinding_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventNormalHelperSceneBinding_Parms), &Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_IndexToFind = { "IndexToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneBinding_Parms, IndexToFind), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_LevelSeqRef = { "LevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneBinding_Parms, LevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_IndexToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::NewProp_LevelSeqRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Helper Scene" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalHelperSceneBinding", nullptr, nullptr, sizeof(SQTEActorBinder_eventNormalHelperSceneBinding_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics
	{
		struct SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms
		{
			FName CurrentRow;
			bool Success;
			int32 IndexToFind;
			FName ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static void NewProp_Success_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_Success;
		static const UECodeGen_Private::FIntPropertyParams NewProp_IndexToFind;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_CurrentRow_MetaData)) };
	void Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_Success_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms*)Obj)->Success = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_Success = { "Success", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms), &Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_Success_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_IndexToFind = { "IndexToFind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms, IndexToFind), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms, ReturnValue), METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_Success,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_IndexToFind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::Function_MetaDataParams[] = {
		{ "Category", "Helper Scene" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalHelperSceneGetTargetID", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::SQTEActorBinder_eventNormalHelperSceneGetTargetID_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningSeqRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalOpeningSceneBinding_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_OpeningSeqRef = { "OpeningSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalOpeningSceneBinding_Parms, OpeningSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::NewProp_OpeningSeqRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Opening Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalOpeningSceneBinding", nullptr, nullptr, sizeof(SQTEActorBinder_eventNormalOpeningSceneBinding_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics
	{
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalSceneBinding_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::NewProp_CurrentRow,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::Function_MetaDataParams[] = {
		{ "Category", "Main Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalSceneBinding", nullptr, nullptr, sizeof(SQTEActorBinder_eventNormalSceneBinding_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x0C020800, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics
	{
		struct SQTEActorBinder_eventNormalSceneBindingSupport_Parms
		{
			FName CurrentRow;
			TMap<FName,FMovieSceneObjectBindingID> BindingData;
			FMovieSceneObjectBindingID RootBind;
			bool ReturnValue;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FStructPropertyParams NewProp_BindingData_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_BindingData_Key_KeyProp;
		static const UECodeGen_Private::FMapPropertyParams NewProp_BindingData;
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBind;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalSceneBindingSupport_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData_ValueProp = { "BindingData", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData_Key_KeyProp = { "BindingData_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData = { "BindingData", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalSceneBindingSupport_Parms, BindingData), EMapPropertyFlags::None, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_RootBind = { "RootBind", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventNormalSceneBindingSupport_Parms, RootBind), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	void Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventNormalSceneBindingSupport_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventNormalSceneBindingSupport_Parms), &Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_BindingData,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_RootBind,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::Function_MetaDataParams[] = {
		{ "Category", "Main Scenes" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "NormalSceneBindingSupport", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::SQTEActorBinder_eventNormalSceneBindingSupport_Parms), Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics
	{
		struct SQTEActorBinder_eventSetUpRoot_Parms
		{
			FMovieSceneObjectBindingID IDRef;
			ALevelSequenceActor* LevelSeqActorRef;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_IDRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_LevelSeqActorRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::NewProp_IDRef = { "IDRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventSetUpRoot_Parms, IDRef), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(nullptr, 0) }; // 3055205823
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::NewProp_LevelSeqActorRef = { "LevelSeqActorRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventSetUpRoot_Parms, LevelSeqActorRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::NewProp_IDRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::NewProp_LevelSeqActorRef,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::Function_MetaDataParams[] = {
		{ "Category", "Root Binder" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "SetUpRoot", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::SQTEActorBinder_eventSetUpRoot_Parms), Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_SetUpRoot()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_SetUpRoot_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics
	{
		struct SQTEActorBinder_eventValidOpeningSequence_Parms
		{
			FName CurrentRow;
			ALevelSequenceActor* OpeningLevelSeqRef;
			bool result;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentRow_MetaData[];
#endif
		static const UECodeGen_Private::FNamePropertyParams NewProp_CurrentRow;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OpeningLevelSeqRef;
		static void NewProp_result_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_result;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_CurrentRow_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_CurrentRow = { "CurrentRow", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventValidOpeningSequence_Parms, CurrentRow), METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_CurrentRow_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_CurrentRow_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_OpeningLevelSeqRef = { "OpeningLevelSeqRef", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(SQTEActorBinder_eventValidOpeningSequence_Parms, OpeningLevelSeqRef), Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_result_SetBit(void* Obj)
	{
		((SQTEActorBinder_eventValidOpeningSequence_Parms*)Obj)->result = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_result = { "result", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(SQTEActorBinder_eventValidOpeningSequence_Parms), &Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_result_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_CurrentRow,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_OpeningLevelSeqRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::NewProp_result,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::Function_MetaDataParams[] = {
		{ "Category", "Dynamic Opening" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_USQTEActorBinder, nullptr, "ValidOpeningSequence", nullptr, nullptr, sizeof(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::SQTEActorBinder_eventValidOpeningSequence_Parms), Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(USQTEActorBinder);
	UClass* Z_Construct_UClass_USQTEActorBinder_NoRegister()
	{
		return USQTEActorBinder::StaticClass();
	}
	struct Z_Construct_UClass_USQTEActorBinder_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_OwnerRef;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_OwnerTransform_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_OwnerTransform;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CurrentTableRef_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_CurrentTableRef;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_DynamicRowSequence_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_DynamicRowSequence_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_DynamicRowSequence_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_DynamicRowSequence;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_RootBinding_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_RootBinding;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ActorsListRef_ValueProp;
		static const UECodeGen_Private::FNamePropertyParams NewProp_ActorsListRef_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ActorsListRef_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ActorsListRef;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_USQTEActorBinder_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_QTEPlugin,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_USQTEActorBinder_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_USQTEActorBinder_BindAllActors, "BindAllActors" }, // 2972944141
		{ &Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenes, "DynamicHelperScenes" }, // 428163233
		{ &Z_Construct_UFunction_USQTEActorBinder_DynamicHelperScenesSupport, "DynamicHelperScenesSupport" }, // 3556886727
		{ &Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenes, "DynamicMainScenes" }, // 977239894
		{ &Z_Construct_UFunction_USQTEActorBinder_DynamicMainScenesSupport, "DynamicMainScenesSupport" }, // 1558207259
		{ &Z_Construct_UFunction_USQTEActorBinder_DynamicOpeningScenes, "DynamicOpeningScenes" }, // 4115645908
		{ &Z_Construct_UFunction_USQTEActorBinder_Initialize, "Initialize" }, // 3379153905
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalActorBinding, "NormalActorBinding" }, // 192927571
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneBinding, "NormalHelperSceneBinding" }, // 3673651306
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalHelperSceneGetTargetID, "NormalHelperSceneGetTargetID" }, // 2374917611
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalOpeningSceneBinding, "NormalOpeningSceneBinding" }, // 3248857877
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalSceneBinding, "NormalSceneBinding" }, // 2940948717
		{ &Z_Construct_UFunction_USQTEActorBinder_NormalSceneBindingSupport, "NormalSceneBindingSupport" }, // 1764053935
		{ &Z_Construct_UFunction_USQTEActorBinder_SetUpRoot, "SetUpRoot" }, // 1409091742
		{ &Z_Construct_UFunction_USQTEActorBinder_ValidOpeningSequence, "ValidOpeningSequence" }, // 2476240850
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "SQTEActorBinder.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerRef_MetaData[] = {
		{ "Category", "Owner" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
		{ "ToolTip", "This should always be the player character who this QTE affects" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerRef = { "OwnerRef", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, OwnerRef), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerRef_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerTransform_MetaData[] = {
		{ "Category", "Owner" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerTransform = { "OwnerTransform", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, OwnerTransform), Z_Construct_UScriptStruct_FTransform, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerTransform_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerTransform_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_CurrentTableRef_MetaData[] = {
		{ "Category", "Data Table" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_CurrentTableRef = { "CurrentTableRef", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, CurrentTableRef), Z_Construct_UClass_UDataTable_NoRegister, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_CurrentTableRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_CurrentTableRef_MetaData)) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_ValueProp = { "DynamicRowSequence", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_ALevelSequenceActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_Key_KeyProp = { "DynamicRowSequence_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_MetaData[] = {
		{ "Category", "Dynamic" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence = { "DynamicRowSequence", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, DynamicRowSequence), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_RootBinding_MetaData[] = {
		{ "Category", "RootBinding" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_RootBinding = { "RootBinding", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, RootBinding), Z_Construct_UScriptStruct_FMovieSceneObjectBindingID, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_RootBinding_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_RootBinding_MetaData)) }; // 3055205823
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_ValueProp = { "ActorsListRef", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 1, Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UECodeGen_Private::FNamePropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_Key_KeyProp = { "ActorsListRef_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Name, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_MetaData[] = {
		{ "Category", "BindingActors" },
		{ "ModuleRelativePath", "Public/SQTEActorBinder.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef = { "ActorsListRef", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(USQTEActorBinder, ActorsListRef), EMapPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_USQTEActorBinder_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_OwnerTransform,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_CurrentTableRef,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_DynamicRowSequence,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_RootBinding,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_USQTEActorBinder_Statics::NewProp_ActorsListRef,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_USQTEActorBinder_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<USQTEActorBinder>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_USQTEActorBinder_Statics::ClassParams = {
		&USQTEActorBinder::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_USQTEActorBinder_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::PropPointers),
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_USQTEActorBinder_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_USQTEActorBinder_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_USQTEActorBinder()
	{
		if (!Z_Registration_Info_UClass_USQTEActorBinder.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_USQTEActorBinder.OuterSingleton, Z_Construct_UClass_USQTEActorBinder_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_USQTEActorBinder.OuterSingleton;
	}
	template<> QTEPLUGIN_API UClass* StaticClass<USQTEActorBinder>()
	{
		return USQTEActorBinder::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(USQTEActorBinder);
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_USQTEActorBinder, USQTEActorBinder::StaticClass, TEXT("USQTEActorBinder"), &Z_Registration_Info_UClass_USQTEActorBinder, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(USQTEActorBinder), 1946447909U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_2438057442(TEXT("/Script/QTEPlugin"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_QTEPlugin_Source_QTEPlugin_Public_SQTEActorBinder_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
