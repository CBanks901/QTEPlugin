// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "UObject/NoExportTypes.h"
#include "MovieSceneObjectBindingID.h"
#include "UQTEUtilities.h"
#include "SQTEActorBinder.generated.h"

/**
 * 
 */


UCLASS(Blueprintable)
class QTEPLUGIN_API USQTEActorBinder : public UObject
{
	GENERATED_BODY()
	
public:

	UFUNCTION(BlueprintCallable, Category = "Initialization")
	void Initialize(UDataTable* InDataTable, AActor* Owner, const TMap<FName, ALevelSequenceActor*> RowSequence, TMap<FName, AActor*> ActorsList);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Main Scenes")
	void DynamicMainScenes(const FName CurrentRow);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Opening Scenes")
	void DynamicOpeningScenes(const FName CurrentRow, ALevelSequenceActor* LevelSeqRef);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Helper Scenes")
	void DynamicHelperScenes(const FName CurrentRow, ALevelSequenceActor* LevelSeqRef, int32 IndexToFind, bool bFailedInput);

	UFUNCTION(BlueprintCallable, Category = "Root Binder")
	void SetUpRoot(FMovieSceneObjectBindingID IDRef, ALevelSequenceActor* LevelSeqActorRef);

	UFUNCTION(BlueprintCallable, Category = "Dynamic Opening")
	void ValidOpeningSequence(const FName CurrentRow, ALevelSequenceActor* OpeningLevelSeqRef, bool &result);

	UFUNCTION(BlueprintCallable, meta = (ToolTip = "Has a name and sequence binding attachement. Both should be valid. The name entered here should correspond to a map inside the ActorsListRef. ActorsListRef corresponds to Bind Dynamic Actors when you call Store Data in the QTE Helper"), Category = "Scene Binding")
	bool BindAllActors(ALevelSequenceActor* LevelSeqRef, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID OwnerBinding, FMovieSceneObjectBindingID RootBindingRef);

	UFUNCTION(BlueprintCallable, Category = "Helper Scenes")
	FName DynamicHelperScenesSupport(const FName CurrentRow, int32 IndexToFind, bool bFailedInput);

	UFUNCTION(BlueprintCallable, Category = "Main Scenes")
	bool DynamicMainScenesSupport(const FName CurrentRow, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID OwnerBinding, FMovieSceneObjectBindingID RootBindingRef);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Main Scenes")
	void NormalSceneBinding(const FName CurrentRow);

	UFUNCTION(BlueprintCallable, Category = "Main Scenes")
	bool NormalSceneBindingSupport(const FName CurrentRow, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID RootBind);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Helper Scene")
	void NormalHelperSceneBinding(const FName CurrentRow, bool Success, int32 IndexToFind, ALevelSequenceActor* LevelSeqRef);

	UFUNCTION(BlueprintCallable, Category = "Helper Scene")
	FName NormalHelperSceneGetTargetID(const FName CurrentRow, bool Success, int32 IndexToFind);

	UFUNCTION(BlueprintCallable, Category = "Normal Bindings")
	bool NormalActorBinding(ALevelSequenceActor* LevelSeqRef, TMap<FName, FMovieSceneObjectBindingID> BindingData, FMovieSceneObjectBindingID RootBind);

	UFUNCTION(BlueprintCallable, BlueprintImplementableEvent, Category = "Opening Scenes")
	void NormalOpeningSceneBinding(const FName CurrentRow, ALevelSequenceActor* OpeningSeqRef);

public:

	UPROPERTY(BlueprintReadOnly, Category = "Owner", meta = (ToolTip = "This should always be the player character who this QTE affects"), Category = "Owner")
	AActor* OwnerRef;

	UPROPERTY(BlueprintReadOnly, Category = "Owner")
	FTransform OwnerTransform;

	UPROPERTY(BlueprintReadOnly, Category = "Data Table")
	UDataTable* CurrentTableRef;

	UPROPERTY(BlueprintReadOnly, Category = "Dynamic")
	TMap<FName, ALevelSequenceActor*> DynamicRowSequence;

	UPROPERTY(BlueprintReadWrite, Category = "RootBinding")
	FMovieSceneObjectBindingID RootBinding;

	UPROPERTY(BlueprintReadOnly, Category = "BindingActors")
	TMap<FName, AActor*> ActorsListRef;
};
