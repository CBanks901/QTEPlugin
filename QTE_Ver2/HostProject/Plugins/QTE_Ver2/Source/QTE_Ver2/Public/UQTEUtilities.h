// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/DataTable.h"
#include "LevelSequence.h"
#include "LevelSequenceActor.h"
#include "LevelSequencePlayer.h"
#include "UQTEUtilities.generated.h"

/**
 *
 */

UENUM(BlueprintType)
enum class KeyResultData : uint8
{
	Success,
	Incomplete,		// Incomplete means one or a part of the keys were pressed only but not the entirety of the sequence
	Fail
};

UENUM(BlueprintType)
enum class QTEInputPath : uint8
{
	KeyPressOnly,
	MultiKeys,
	SequentialKeys,
	MultiSequentialKeys
};

USTRUCT(BlueprintType)
struct FSubSequenceHelper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Keys")
		TArray<FKey> Keys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "KeyAttributes")
		bool bHoldKey = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bHoldKey"), Category = "KeyAttributes")
		float HoldTime = 0.0f;

	UPROPERTY()
		FString FailExplanation;
	void operator=(const FSubSequenceHelper& Other)
	{
		for (FKey KeyRef : Other.Keys)
		{
			Keys.AddUnique(KeyRef);
		}

		bHoldKey = Other.bHoldKey;
		HoldTime = Other.HoldTime;
	}

	bool IsValid()
	{
		bool Result = false;

		if (Keys.Num() == 0 || Keys.Num() > 5)
		{
			if (FailExplanation.IsEmpty())
				FailExplanation = "Key Number is 0 or is greater than 5. Current key num: ";
			else
				FailExplanation.Append("Key Number is 0 or is greater than 5. Current key num: ");
			FailExplanation.Append(FString::FromInt(Keys.Num()));
			FailExplanation.Append("\n");
			return Result;
		}

		for (int32 i = 0; i < Keys.Num(); i++)
		{
			if (!Keys[i].IsValid())
			{
				FailExplanation.Append("Key index '");
				FailExplanation.Append(FString::FromInt(i));
				FailExplanation.Append("' is not valid.\n");
				return Result;
			}
		}

		Result = true;
		return Result;
	}
};



USTRUCT(BlueprintType)
struct FSubSequence
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Holds the key(s) that must be held or pressed together"), Category = "KeyArray")
		TArray<FSubSequenceHelper> KeyMap;

	void operator=(const FSubSequence& Other)
	{
		if (Other.KeyMap.Num() > 0)
		{
			KeyMap.AddZeroed(Other.KeyMap.Num());
			for (int32 i = 0; i < Other.KeyMap.Num(); i++)
			{
				KeyMap[i] = Other.KeyMap[i];
			}
		}
	}
};

USTRUCT(BlueprintType)
struct FPrecisionKeys
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Keys")
		TArray<FKey> Keys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "This value is how long the sequence is. It extends the rate but note keys presses are only valid if pressed within about 75% of the sequence that follows"), Category = "Sequence Attributes", meta = (UIMin = 2.0, ClampMin = 2.0f))
		float TimeLength = 2.0;

	UPROPERTY()
		FString FailExplanation;

	void operator=(const FPrecisionKeys& Other)
	{
		if (Other.Keys.Num() > 0)
		{
			for (FKey KeyRef : Other.Keys)
			{
				if (KeyRef.IsValid())
					Keys.AddUnique(KeyRef);
			}

			TimeLength = Other.TimeLength;
		}
	}

	bool ValidKeys()
	{
		if (Keys.Num() == 0)
		{
			if (FailExplanation.IsEmpty())
				FailExplanation = "Number of precision keys is equal to 0. Must be 1 or higher\n";
			else
				FailExplanation.Append("Number of precision keys is equal to 0. Must be 1 or higher\n");
			return false;
		}

		for (FKey KeyRef : Keys)
		{
			if (!KeyRef.IsValid())
			{
				if (FailExplanation.IsEmpty())
					FailExplanation = "One of the key references in precision keys is not valid\n";
				else
					FailExplanation.Append("One of the key references in precision keys is not valid\n");
				return false;
			}
		}

		for (int32 i = 0; i < Keys.Num(); i++)
		{
			if (i != Keys.Num() - 1)
			{
				for (int32 l = i + 1; l < Keys.Num(); l++)
				{
					if (Keys[i] == Keys[l])
					{
						if (FailExplanation.IsEmpty())
							FailExplanation = "Error, duplicate precision key detected. ALL precision keys in a single sequence must be unique\n";
						else
							FailExplanation.Append("Error, duplicate precision key detected. ALL precision keys in a single sequence must be unique\n");

						FailExplanation.Append("Key in index '");
						FailExplanation.Append(FString::FromInt(i));
						FailExplanation.Append("' is equal to the key in index '");
						FailExplanation.Append(FString::FromInt(l));
						FailExplanation.Append("\n");
						return false;
					}
				}
			}
		}

		return true;
	}
};

// Beginning of Input data
USTRUCT(BlueprintType)
struct FKeyToTimeBindHelper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Disables subsequences. Basically this means that a key has to be pressed during a specific window. Differs from normal because there is a wait time involved"), Category = "Key Attributes")
		bool bPrecision = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bPrecision"), Category = "Key Choice")
		TArray<FPrecisionKeys> PreciseKeys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bPrecision", ToolTip = "Instead of just one key or a group of keys to press/hold simultanoeously, this allows you to add a sequence of keys that need to be pressed and or held during the time window"), Category = "Key Attributes")
		bool bHasSubSequence = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bHasSubSequence && !bPrecision", ToolTip = "Sequence within the overall sequence. I.E 10 second sequence at the 5 second mark means at 5 seconds, a unique set of keys will have to be pressed within the desired time window"), Category = "Key Choice")
		FSubSequence SubSeq;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bHasSubSequence && !bPrecision", ToolTip = "The key or keys that need to be pressed at this specific time in order to be successful"), Category = "Key Choice")
		TArray<FKey> Key;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "When this timed input begins"), Category = "Key Attributes")
		float StartTime = 0.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bPrecision", ToolTip = "How long you have to press the desired key. When subsequences are involved, this becomes the total time to press all keys within involved in the sequence. "), Category = "Key Attributes")
		float TimeWindow = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bPrecision", ToolTip = "The time slow once we start to approach the TimeRange threshold"), Category = "Key Attributes")
		bool bShouldDelayTime = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Can only range from 0.02 to 1.99. Higher values means shorter timeframe, shorter values means longer timeframes", EditCondition = "bShouldDelayTime && !bPrecision", UIMin = 0.02, ClampMin = 0.02, UIMax = 1.99, ClamMax = 1.99), Category = "Key Attributes")
		float DelayTime= 0.03f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bHasSubSequence"), Category = "Key Attributes")
		bool bHoldKeysDown = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bHoldKeysDown && !bHasSubSequence && !bPrecision"), Category = "Key Attributes")
		float HoldDownTime = 0.0f;

	UPROPERTY()
		FString FailedReasoning;

	void operator=(const FKeyToTimeBindHelper& Other)
	{
		this->bHasSubSequence = Other.bHasSubSequence;
		this->bPrecision = Other.bPrecision;

		if (bPrecision)
		{
			for (FPrecisionKeys PrecisionKeysRef : Other.PreciseKeys)
			{
				PreciseKeys.Add(PrecisionKeysRef);
			}
		}
		else if (!bHasSubSequence)
		{
			for (FKey KeyRef : Other.Key)
			{
				if (KeyRef.IsValid())
				{
					this->Key.Add(KeyRef);
				}
			}
		}
		else
		{
			Key.Empty();
			this->SubSeq = Other.SubSeq;
		}


		this->StartTime = Other.StartTime;
		this->TimeWindow = Other.TimeWindow;
		this->bShouldDelayTime = Other.bShouldDelayTime;
		this->DelayTime = Other.DelayTime;
		this->bHoldKeysDown = Other.bHoldKeysDown;
		this->HoldDownTime = Other.HoldDownTime;
	}

	bool IsValid(float EndTime)
	{
		if (bHasSubSequence)
		{
			if (SubSeq.KeyMap.Num() > 0)
			{
				for (FSubSequenceHelper SubSeqData : SubSeq.KeyMap)
				{
					for (FKey KeyCheck : SubSeqData.Keys)
					{
						if (!KeyCheck.IsValid())
						{
							FailedReasoning.Append("Keys in subsequence are not valid\n");
							return false;
						}
					}

					if (SubSeqData.bHoldKey)
					{
						if (SubSeqData.HoldTime >= EndTime)
						{
							FailedReasoning.Append("SubSequence is enabled and hold key is enabled BUT hold time in that sequence is greater than the end time.");
							FailedReasoning.Append("End Time = ");
							FailedReasoning.Append(FString::SanitizeFloat(EndTime));
							FailedReasoning.Append("\n");
							return false;
						}
					}
				}
			}
			else
			{
				FailedReasoning.Append("SubSeq key map is 0 with bHasSubSequence enabled.\n");
				return false;
			}
		}
		else
		{
			if (Key.Num() > 0)
			{
				for (FKey KeyRef : this->Key)
				{
					if (!KeyRef.IsValid())
					{
						FailedReasoning.Append("SubSequence not enabled and Precision also not enabled. One of the key references is not valid.\n");
						return false;
					}
				}
			}
			else if (bPrecision)
			{
				if (PreciseKeys.Num() == 0)
				{
					FailedReasoning.Append("bPrecision enabled BUT precision keys array is 0. At least one key must be added.\n");
					return false;
				}

				for (int32 i = 0; i < PreciseKeys.Num(); i++)
				{
					if (!PreciseKeys[i].ValidKeys())
					{
						FailedReasoning.Append("One of the precision keys in precisekeys list is not correct.\n");
						return false;
					}

					if (PreciseKeys[i].TimeLength <= 0.0f)
					{
						FailedReasoning.Append("PreciseKeys index '");
						FailedReasoning.Append(FString::FromInt(i));
						FailedReasoning.Append("' time length is less than 0. Has to be greater than 0, preferably 3 seconds.\n");
						return false;
					}
				}
			}
			else
			{
				FailedReasoning.Append("Subsequence is not enabled.. precision is not enabled and key size is 0. One of these must be set.\n");
				return false;
			}
		}

		if (StartTime >= EndTime)
		{
			FailedReasoning.Append("Start time is greater than End Time. Start Time: ");
			FailedReasoning.Append(FString::SanitizeFloat(StartTime));
			FailedReasoning.Append(" End Time: ");
			FailedReasoning.Append(FString::SanitizeFloat(EndTime));
			FailedReasoning.Append(". Please shrink start time.\n");
			return false;
		}

		if (!bPrecision && TimeWindow <= 0.0f)
		{
			FailedReasoning.Append("TimeWindow is less than 0.0f");
			FailedReasoning.Append("\n");
			return false;
		}

		if (bShouldDelayTime)
		{
			if (DelayTime <= 0.01 || DelayTime >= 2.0f)
			{
				FailedReasoning.Append("Delay time is not between 0.01 and 2.0f");
				FailedReasoning.Append("\n");
				return false;
			}
		}

		return true;
	}
};

USTRUCT(BlueprintType)
struct FKeyToTimeBinding
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Whether the keys need to be pressed at specific points in time. When true reveals the KeyTimebind variable."), Category = "Key Attributes")
		bool bTimed = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bTimed", EditConditionHides, ToolTip = "This only applies if you want a QTE that has time specific input. Each entry is only a point in time on the sequence and values are grouped as one. Sub sequences within this are supported if you want multiple sub sequences within a sequence "), Category = "Key Choice")
		TArray<FKeyToTimeBindHelper> KeyTimeBind;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bTimed", EditConditionHides, ToolTip = "The keys added here all need to be pressed at once. These should be limited to four or however many realistic keys can be pressed at once"), Category = "Key Choice")
		TArray<FKey> KeyCombos;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bTimed", EditConditionHides, ToolTip = ""), Category = "Keys Attributes")
		bool bHoldKeysDown = false;
};

USTRUCT(BlueprintType)
struct FKeyInfo
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Number of keys has to at least be greater than 1. Only means 1 or more keys together"), Category = "Sequence Data")
		bool bHasSequence = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Can the scene go in the reverse direction"), Category = "Sequence Data")
		bool bCanRegress = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCanRegress", ToolTip = "The amount of time that the user has until the scene regresses. This also applies to the beginning as well", ClampMin = 0), Category = "Sequence Data")
		float NoInputTimeDelay = 2.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCanRegress", ToolTip = "When a key is not pressed after a period or the wrong key is pressed this goes back in the sequence by a certain amount. If set to 0 it continues until the beginning or a valid key is pressed", ClampMin = 0.12, ClampMax = 100.0), Category = "Sequence Data")
		float RegressDistance = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCanRegress", ToolTip = "If the number of wrong keys are held/pressed, then we start to regress the sequence. This is constantly reset when activated", ClampMin = 0), Category = "Sequence Data")
		int32 AttemptsToRegress = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "What a successful input means in terms of scale. This must at least be .1 or higher", ClampMin = 0.12, ClampMax = 5.0), Category = "Sequence Data")
		float SuccessDistance = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Should the sequence fail if the wrong key is pressed"), Category = "Sequence Data")
		bool bInstantFailure = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bInstantFailure", ToolTip = "If the number of attempts goes beyond this point, it automatically stops the sequennce and fails", ClampMin = 0), Category = "Sequence Data")
		int32 MaxAttemptsToFail = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bHasSequence", EditConditionHides), Category = "Key Choice")
		FKeyToTimeBinding KeySequence;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bHasSequence", EditConditionHides), Category = "Key Choice")
		FKey KeyToPress;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bHasSequence", EditConditionHides), Category = "Key Attributes")
		bool bHoldKeyDown = false;
};

USTRUCT(BlueprintType)
struct FInputStruct
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Key Info Struct")
		FKeyInfo KeyData;
};

USTRUCT(BlueprintType)
struct FInputData
{
	GENERATED_BODY()

public:

	FInputData()
	{
		bValidInput = false;
		bCanRegress = false;
		NoInputTimeDelay = -1.0f;
		RegressDistance = -1.0f;
		AttemptsToRegress = 0;
		SuccessDistance = -1.0f;
		bInstantFailure = false;
		MaxAttemptsToFail = 0;
		bHasOpeningSequence = false;
		bHasSequence = false;
		bTimed = false;
		bHoldDownKeys = false;
		Keys.Empty();
		KeyToTimeBinder.Empty();
	};

	UPROPERTY(BlueprintReadOnly, Category = "Check")
		bool bValidInput;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "Can the scene go in the reverse direction"), Category = "Sequence data Copy")
		bool bCanRegress;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "The amount of time that the user has until the scene regresses. This also applies to the beginning as well"), Category = "Sequence data Copy")
		float NoInputTimeDelay;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "When a key is not pressed after a period or the wrong key is pressed this goes back in the sequence by a certain amount. If set to 0 it continues until the beginning or a valid key is pressed"), Category = "Sequence data Copy")
		float RegressDistance;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "If the number of wrong keys are held/pressed, then we start to regress the sequence. This is constantly reset when activated"), Category = "Sequence data Copy")
		int32 AttemptsToRegress;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "What a successful input means in terms of scale. This must at least be .1 or higher"), Category = "Sequence data Copy")
		float SuccessDistance;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "Should the sequence fail if the wrong key is pressed"), Category = "Sequence data Copy")
		bool bInstantFailure;

	UPROPERTY(BlueprintReadWrite, meta = (ToolTip = "If the number of attempts goes beyond this point, it automatically stops the sequennce and fails"), Category = "Sequence data Copy")
		int32 MaxAttemptsToFail;

	UPROPERTY(BlueprintReadWrite, Category = "Sequence data Copy")
		bool bHasOpeningSequence;

	UPROPERTY(BlueprintReadWrite, Category = "Sequence data Copy")
		bool bHasSequence;

	UPROPERTY(BlueprintReadOnly, Category = "Sequence data Copy")
		bool bTimed;

	UPROPERTY(BlueprintReadWrite, Category = "Sequence data Copy")
		TArray<FKeyToTimeBindHelper> KeyToTimeBinder;

	// This section only applies if the KeyToTimeBinder variable isn't valid.
	UPROPERTY(BlueprintReadWrite, Category = "Sequence data Copy")
		TArray<FKey> Keys;

	UPROPERTY(BlueprintReadWrite, Category = "Sequence data Copy")
		bool bHoldDownKeys;

	void operator=(const FInputData& Other)
	{

		bValidInput = Other.bValidInput;

		bCanRegress = Other.bCanRegress;

		NoInputTimeDelay = Other.NoInputTimeDelay;

		RegressDistance = Other.RegressDistance;

		AttemptsToRegress = Other.AttemptsToRegress;

		SuccessDistance = Other.SuccessDistance;

		bInstantFailure = Other.bInstantFailure;

		MaxAttemptsToFail = Other.MaxAttemptsToFail;

		bHasOpeningSequence = Other.bHasOpeningSequence;

		bHasSequence = Other.bHasSequence;

		bTimed = Other.bTimed;

		bHoldDownKeys = Other.bHoldDownKeys;

		Keys.Empty();

		if (Other.Keys.Num() > 0)
		{
			for (FKey KeyRef : Other.Keys)
			{
				Keys.AddUnique(KeyRef);
			}
		}

		else if (Other.KeyToTimeBinder.Num() > 0)
		{
			int32 KeyBinderSize = Other.KeyToTimeBinder.Num();
			KeyToTimeBinder.AddDefaulted(KeyBinderSize);

			for (int32 indexCounter = 0; indexCounter < Other.KeyToTimeBinder.Num(); indexCounter++)
			{
				KeyToTimeBinder[indexCounter] = Other.KeyToTimeBinder[indexCounter];
			}
		}

	}
};

UENUM(BlueprintType)
enum class QTEConditionalInput : uint8
{
	KeysOnly,
	Precision,
	SubSequence
};

USTRUCT(BlueprintType)
struct FConditionalQTEHelperData
{
	GENERATED_BODY()

public:

	FConditionalQTEHelperData()
	{
		Threshold = -1;
		Keys.Keys.Empty();
		PreciseKeys.Empty();
		subSeq.KeyMap.Empty();
		InputChoice = QTEConditionalInput::KeysOnly;
	}

	FConditionalQTEHelperData(FSubSequenceHelper& Other, int32 ThresholdCopy)
	{
		Keys = Other;
		PreciseKeys.Empty();
		subSeq.KeyMap.Empty();
		InputChoice = QTEConditionalInput::KeysOnly;
		Threshold = ThresholdCopy;
	}

	FConditionalQTEHelperData(TArray<FPrecisionKeys>& Other, int32 ThresholdCopy)
	{
		for (int32 i = 0; i < Other.Num(); i++)
		{
			if (Other[i].ValidKeys())
			{
				PreciseKeys.AddZeroed();
				PreciseKeys[i] = Other[i];
			}
		}

		Keys.Keys.Empty();
		subSeq.KeyMap.Empty();
		InputChoice = QTEConditionalInput::Precision;
		Threshold = ThresholdCopy;
	}

	FConditionalQTEHelperData(FSubSequence Other, int32 ThresholdCopy)
	{
		subSeq = Other;
		Keys.Keys.Empty();
		PreciseKeys.Empty();
		InputChoice = QTEConditionalInput::SubSequence;
		Threshold = ThresholdCopy;
	}

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "These should go up with each data entry. This value correlates deeper into the sequence as it increases"), Category = "Starting Condition")
		int32 Threshold;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "This is not a subsequence but uses the elements inside of it as a build. This is the normal value"), Category = "Conditional Key Choice")
		FSubSequenceHelper Keys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Conditional Key Choice")
		TArray<FPrecisionKeys> PreciseKeys;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Conditional Key Choice")
		FSubSequence subSeq;

	UPROPERTY(BlueprintReadOnly, meta = (ToolTip = "Can't be set in blueprint but helps us to know which of the three above the user decided. The first filled in the table is the first chosen"), Category = "Sequence Helper")
		QTEConditionalInput InputChoice;
};

USTRUCT(BlueprintType)
struct FConditionalQTEHelper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = ""), Category = "Conditional Data Array")
		TArray<FConditionalQTEHelperData> Data;
};

// Delete this section later Beginning
USTRUCT(BlueprintType)
struct FResultSequenceBinding
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "If this is the root of the scene it means that the scene will start from this object"), Category = "Root Check")
		bool bIsRoot = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, meta = (ToolTip = "Is this binding a success input or failure version"), Category = "Binding Version")
		bool bResult = false;

	UPROPERTY(BlueprintReadWrite, EditAnywhere, Category = "Sequence Binding ID")
		FMovieSceneObjectBindingID Binding;
};
// End of Deletion 

USTRUCT(BlueprintType)
struct FConditionalSequencesSupport
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "LevelSequence")
		ULevelSequence* LevelSequenceRef;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Scene Rate", meta = (UIMin = 0.01, ClampMin = 0.01))
		float PlayRate = 1.0f;
};

USTRUCT(BlueprintType)
struct FConditionalSequences
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "NameSequenceMap", meta = (TitleProperty = "This sequence has a play rate of {PlayRate}"))
		TMap<FName, FConditionalSequencesSupport> Sequences;

	bool IsValidConditionalSequence(const FName NameRef)
	{
		if (!NameRef.IsNone())
		{
			FConditionalSequencesSupport* Ref = Sequences.Find(NameRef);
			if (Ref)
			{
				if (Ref->PlayRate > 0.0f && Ref->LevelSequenceRef)
					return true;
				else
					UE_LOG(LogTemp, Warning, TEXT("Play Rate is 0 on conditional sequence or the level sequence itself has not been set."));
			}
			else
				UE_LOG(LogTemp, Warning, TEXT("Unable to find condtional pair with matching string name %s"), *NameRef.ToString());
		}
		else
			UE_LOG(LogTemp, Warning, TEXT("The nameref passed in at FConditionalSequences is an emtpy name. Not a valid conditional sequence"));

		return false;
	}

	void operator=(const FConditionalSequences& Other)
	{
		if (Other.Sequences.Num() > 0)
		{
			for (const TPair<FName, FConditionalSequencesSupport>& SeqPair : Other.Sequences)
			{
				if (!SeqPair.Key.IsNone() && SeqPair.Value.PlayRate > 0.0f && SeqPair.Value.LevelSequenceRef)
					Sequences.Add(SeqPair);
			}
		}
	}
};

USTRUCT(BlueprintType)
struct FConditionalQTE
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Conditional Data")
		bool bInstantFailure = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bInstantFailure", ToolTip = "Determines when the sequence completely fails. If 0 then it cannot fail IF InstantFailure is disabled", ClampMin = 0), Category = "Conditional Data")
		int32 FailureLimit = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Determines when the sequence completely succeeds", UIMin = 1, ClampMin = 1), Category = "Conditional Data")
		int32 SuccessLimit = 10;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bInstantFailure", ToolTip = "Determines how far a failed input contributes to the failure limit. Defines what a failure means exactly", UIMin = 1, ClampMin = 1), Category = "Conditional Data")
		int32 FailRatio = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Determines how far a successful input goes towards the success limit. Defines what success means exactly", UIMin = 1, ClampMin = 1), Category = "Conditional Data")
		int32 SuccessRatio = 1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Matches a threshold input to some input type of your choice. Precision/Normal/Subsequence"), Category = "Conditional Input Data")
		FConditionalQTEHelper inputData;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "This allows you to play helper scenes that play during the main sequence when a input fails or succeeds but the overall sequence itself is yet to be terminated and will continue afterwords"), Category = "Conditional Data")
		bool bPlayHelperSequences = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bPlayHelperSequences", ToolTip = "Only determines when to play a success sequence, NOT total success. This limit is constantly challenged against the current sequence and will repeat when this threshold is passed each time ", UIMin = 1, ClampMin = 1), Category = "Conditional Data")
		int32 SuccessThreshold = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bPlayHelperSequences && !bInstantFailure", ToolTip = "Only determines when to play a fail sequence, NOT total failure. This limit is constantly challenged against the current sequence and will repeat when this threshold is passed each time", UIMin = 1, ClampMin = 1), Category = "Conditional Data")
		int32 FailThreshold = 0;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bInstantFailure && bPlayHelperSequences", ToolTip = "This is not a complete failure. This is optional if you want to make so that when a key isn't pressed a certain failure sequence plays then goes back to normal. This can be blank but if more than one is used a random one will play"), Category = "Conditional Branch Data")
		FConditionalSequences FailInput;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bPlayHelperSequences", ToolTip = "This is not a complete success. This is optional if you want a sequence to play when a certain threshold is reached. This can be blank but if more than one is used a random one will play."), Category = "Conditional Branch Data")
		FConditionalSequences SuccessInput;

	UPROPERTY(BlueprintReadOnly, Category = "Conditional Data")
		bool bHasOpeningSequence = false;

	void operator=(const FConditionalQTE& Other)
	{
		this->bInstantFailure = Other.bInstantFailure;
		this->FailureLimit = Other.FailureLimit;
		this->SuccessLimit = Other.SuccessLimit;
		this->FailRatio = Other.FailRatio;
		this->SuccessRatio = Other.SuccessRatio;
		this->inputData = Other.inputData;
		this->bHasOpeningSequence = Other.bHasOpeningSequence;
		this->bPlayHelperSequences = Other.bPlayHelperSequences;

		if (bPlayHelperSequences)
		{
			this->SuccessThreshold = Other.SuccessThreshold;
			this->FailThreshold = Other.FailThreshold;
			this->FailInput = Other.FailInput;
			this->SuccessInput = Other.SuccessInput;
		}

	}
};

USTRUCT(BlueprintType)
struct FSequenceNode
{
	GENERATED_BODY()

public:

	UPROPERTY(BlueprintReadOnly, Category = "Miscallaneous")
		FName SequenceName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ClampMin = 0.1, UIMin = 0.1), Category = "Scene Rate")
		float SceneRate = 0.1;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "If true then you need to set up bindings inside the dynamic openings function and dynamic sequenees function for all opening or sequences that require it"), Category = "Dynamic")
		bool bDynamicScenes = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bCinematicOnly", EditConditionHides, ToolTip = "Differs from normal QTE's. These types are based on winning and losing conditions and won't stop until those conditions are met. When enabled the CurrentSequence reference will loop continously"), Category = "ConditionalQTE data")
		bool bIsConditionalQTE = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bIsConditionalQTE && !bCinematicOnly", EditConditionHides), Category = "Conditional QTE Data")
		FConditionalQTE conditionalQTE;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bCinematicOnly", EditConditionHides, ToolTip = "Opening Cinematic if it has one"), Category = "Opening Sequence")
		ULevelSequence* OpeningSeq;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "The current scene to play. This has to be set to something. If not nothing will occur"), Category = "Main Sequence")
		ULevelSequence* CurrentSeq;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bCinematicOnly", EditConditionHides, ToolTip = "This name should match a Row name in the graph. Has to be exact. If not nothing will happen. Leave blank if irrelavent"), Category = "Fail Row")
		FName FailName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bCinematicOnly", EditConditionHides, ToolTip = "This name should match a Row name in the graph. Has to be exact. If not nothing will happen. Leave blank if irrelavent"), Category = "Success Row")
		FName SuccessName;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, Category = "Cinematic Option")
		bool bCinematicOnly = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly", EditConditionHides), Category = "Exeuctions")
		bool bExecution = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "The time after the scene ends to destroy the actor(s)", EditCondition = "bExecution", EditConitionHides, ClampMin = 1.0, UIMin = 1.0), Category = "Executions")
		float DestroyTime = 1.0f;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution", EditConditionHides, ToolTip = "Execute all actors involved in this sequence"), Category = "Executions")
		bool bAll = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution && !bAll", EditConditionHides, ToolTip = "Should the owner be executed when the sequence ends"), Category = "Executions")
		bool bOwner = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution && !bAll && !bOwner", EditConditionHides), Category = "Executions")
		bool bAllExeceptOwner = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution && !bAll && !bAllExeceptOwner", EditConditionHides), Category = "Executions")
		bool bUseIndex = false;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution && !bAll && !bAllExeceptOwner && !bUseIndex", EditConditionHides, ToolTip = "Any additional actors with the exception of the owner. Should be the same name used when store data is call from the helper component"), Category = "Executions")
		TArray<FName> ActorToExecute;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "bCinematicOnly && bExecution && bUseIndex", EditConditionHides), Category = "Executions")
		TArray<int32> ActorIndices;

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (EditCondition = "!bCinematicOnly && !bIsConditionalQTE", EditConditionHides), Category = "Normal QTE Data")
		FInputStruct SequenceInput;
};

USTRUCT(BlueprintType)
struct FQTEInputDataTable : public FTableRowBase
{
	GENERATED_BODY()

public:

	UPROPERTY(EditDefaultsOnly, BlueprintReadOnly, meta = (ToolTip = "Contains all data within the table"), Category = "Binding")
		FSequenceNode SeqData;
};
// End of Input Data

// Beginning of recipient attachment component
USTRUCT(BlueprintType)
struct FEntityDataHelper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (NoElementDuplicate), Category = "RunData")
		TArray<FKey> KeyToStart;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RunData")
		bool bCompletedSequence = false;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "RunData")
		bool bIsRepeatable = false;

	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "RunData")
		int32 Runs = 0;
};

USTRUCT(BlueprintType)
struct FQTEEntitySettings
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (NoElementDuplicate), Category = "Table Data Map")
		TMap<UDataTable*, FEntityDataHelper> EntityData;
};

// End of recipient attachment component


USTRUCT(BlueprintType)
struct FTimeSequenceHelper
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Start Time")
		float StartTimeCopy = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, meta = (ToolTip = "The amount of time you have to press a key if you are in a subsequence or multi subsequnce"), Category = "Time Window")
		float TimeWindowCopy = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DelayTime")
		float TimeDelayCopy = 0.0f;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "HoldDownTime")
		float HoldDownKeyTimeCopy = 0.0f;
};