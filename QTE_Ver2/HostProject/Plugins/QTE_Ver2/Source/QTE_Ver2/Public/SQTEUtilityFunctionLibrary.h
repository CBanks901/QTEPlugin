// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Kismet/BlueprintFunctionLibrary.h"
#include "UQTEUtilities.h"
#include "SQTEUtilityFunctionLibrary.generated.h"

/**
 *
 */

class USQTEOwnerInputComponent;

UCLASS()
class QTE_VER2_API USQTEUtilityFunctionLibrary : public UBlueprintFunctionLibrary
{
	GENERATED_BODY()

public:

	UFUNCTION(BlueprintCallable, Category = "UtilityFunctions")
		static FInputData GetInputParameters(float EndTime, bool bHasOpeningSeq, FInputStruct inputRef);

	UFUNCTION(BlueprintCallable, Category = "Miscellaneous")
		static void SetSequenceName(FName& SequenceName, FName RowName)
	{
		SequenceName = RowName;
	}

	UFUNCTION(BlueprintCallable, Category = "DataTables")
		static bool bisValidRow(ALevelSequenceActor* CurrentSeq)
	{
		return (CurrentSeq) ? true : false;
	}

	UFUNCTION(BlueprintCallable, Category = "DataTables")
		static bool IsValidRow(UDataTable* DataTable, FName RowToFind)
	{
		if (DataTable)
		{
			TArray<FQTEInputDataTable*> AllRows;
			DataTable->GetAllRows("", AllRows);
			if (AllRows.IsEmpty() || RowToFind.IsNone())
			{
				return false;
			}
			else
			{
				FQTEInputDataTable* ItemToFind = DataTable->FindRow<FQTEInputDataTable>(RowToFind, "");
				int32 index = AllRows.Find(ItemToFind);

				return index >= 0 ? true : false;
			}
		}
		else
			return false;
	}

	UFUNCTION(BlueprintCallable, Category = "Sequences")
		static float GetSequenceEndTime(ALevelSequenceActor* CurrentSeq);

	UFUNCTION(BlueprintCallable, Category = "SubSequences")
		static bool IsLastTimedSubSeq(int32 CurrentIndex, FSubSequence SeqRef);

	UFUNCTION(BlueprintCallable, Category = "KeyHelpers")
		static bool SetUpOwnerKeyBinding(TArray<FKey> ListRef, APlayerController* PC);

	UFUNCTION(BlueprintCallable, Category = "KeyHelpers")
		static KeyResultData CheckKeys(TArray<FKey> CurrentKeys, TArray<FKey> DesiredKeys, APlayerController* PC);

	UFUNCTION(BlueprintCallable, Category = "KeyHelpers")
		static bool GetHeldDownKeys(TArray<FKey> KeysRef, APlayerController* PC, float HoldTimeRef);

	UFUNCTION(BlueprintCallable, Category = "KeyHelpers")
		static bool GetPressedKeys(TArray<FKey> KeysRef, APlayerController* PC);

	UFUNCTION()
		static bool VerifyStartTimes(const TArray<FKeyToTimeBindHelper> Ref);

	UFUNCTION(BlueprintCallable, Category = "ConditionalKeys")
		static void GetConditionalParameters(FConditionalQTE inRef, bool bHasOpening, FConditionalQTE& outRef, bool& Valid);
};
