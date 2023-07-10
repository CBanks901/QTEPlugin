// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTEUtilityFunctionLibrary.h"
#include "SQTEOwnerInputComponent.h"

FInputData USQTEUtilityFunctionLibrary::GetInputParameters(float EndTime, bool bHasOpeningSeq, FInputStruct inputRef)
{
	// Beginning of Default settings
	FInputData dataRef;
	dataRef.bValidInput = true;
	dataRef.bInsantFailure = inputRef.KeyData.bInsantFailure;
	dataRef.MaxAttemptsToFail = abs(inputRef.KeyData.MaxAttemptsToFail);
	dataRef.AttemptsToRegress = inputRef.KeyData.AttemptsToRegress;

	dataRef.bHasOpeningSequence = bHasOpeningSeq; 

	dataRef.SuccessDistance = abs(inputRef.KeyData.SuccessDistance);


	// Regress handling
	if (inputRef.KeyData.bCanRegress)
	{
		dataRef.bCanRegress = true;

		dataRef.NoInputTimeDelay = inputRef.KeyData.NoInputTimeDelay;
		
		dataRef.RegressDistance = inputRef.KeyData.RegressDistance;
		
	}
	// End of Default settings


	if (!inputRef.KeyData.bHasSequence)
	{
		if (inputRef.KeyData.KeyToPress.IsValid())
		{
			dataRef.Keys.Add(inputRef.KeyData.KeyToPress);
			dataRef.bHoldDownKeys = inputRef.KeyData.bHoldKeyDown;
		}
		else
			dataRef.bValidInput = false;

		UE_LOG(LogTemp, Warning, TEXT("No sequence detected. Using regular key press only"));
	}
	else
	{
		dataRef.bHasSequence = true;

		UE_LOG(LogTemp, Warning, TEXT("Sequence detected."));
		// If there is no timed sequence tied to this
		if (!inputRef.KeyData.KeySequence.bTimed)
		{
			for (FKey Key : inputRef.KeyData.KeySequence.KeyCombos)
			{
				if (Key.IsValid())
				{
					dataRef.Keys.Add(Key);
					dataRef.bHoldDownKeys = inputRef.KeyData.KeySequence.bHoldKeysDown;
				}
				else
					dataRef.bValidInput = false;
			}
			
			UE_LOG(LogTemp, Warning, TEXT("Sequence detected but no timed event, so using combo keys"));
		}
		else
		{
			dataRef.bTimed = true;

			if (VerifyStartTimes(inputRef.KeyData.KeySequence.KeyTimeBind) == true)
			{
				for (FKeyToTimeBindHelper KeyBinding : inputRef.KeyData.KeySequence.KeyTimeBind)
				{
					if (KeyBinding.IsValid(EndTime))
						dataRef.KeyToTimeBinder.Add(KeyBinding);
					else
					{
						UE_LOG(LogTemp, Warning, TEXT("Something is wrong with the sequence binding for this reference. These keys are not valid."));
						dataRef.bValidInput = false;
					}
				}
				UE_LOG(LogTemp, Warning, TEXT("Sequence detected and timed event detected. Using time bound sequence"));
			}
			else
			{
				dataRef.bValidInput = false;
				UE_LOG(LogTemp, Warning, TEXT("Error, start times in all sequence bindings are not in order."));
			}
		}
	}

	//UE_LOG(LogTemp, Warning, TEXT("Returning input data stats."));
	return dataRef.bValidInput ? dataRef : FInputData();
}

bool USQTEUtilityFunctionLibrary::SetUpOwnerKeyBinding(TArray<FKey> ListRef, APlayerController* PC)
{
	UInputComponent* InputComponent = PC->InputComponent;
	if (!InputComponent)
		return false;
	else
	{

		return true;
		// Alternate method for binding key input
		/*
		// Bind to all keys
		const FKey Key = EKeys::AnyKey;

		FKeyPressedDelegate Delegate;
		// Listen for key pressed
		FInputKeyBinding KBP(FInputChord(Key, false, false, false, false), EInputEvent::IE_Pressed);
		KBP.bConsumeInput = true;
		KBP.bExecuteWhenPaused = false;
		KBP.KeyDelegate.GetDelegateWithKeyForManualSet().BindLambda([=](const FKey& Key) {
			Delegate.ExecuteIfBound(Key, true);
			});
		InputComponent->KeyBindings.Add(KBP);

		// Listen for key released
		FInputKeyBinding KBR(FInputChord(Key, false, false, false, false), EInputEvent::IE_Released);
		KBR.bConsumeInput = true;
		KBR.bExecuteWhenPaused = false;
		KBR.KeyDelegate.GetDelegateWithKeyForManualSet().BindLambda([=](const FKey& Key) {
			Delegate.ExecuteIfBound(Key, false);
			});
		InputComponent->KeyBindings.Add(KBR);

		return true;*/
	}
}

bool USQTEUtilityFunctionLibrary::IsLastTimedSubSeq(int32 CurrentIndex, FSubSequence SeqRef)
{
	return CurrentIndex == SeqRef.KeyMap.Num() - 1;
}

KeyResultData USQTEUtilityFunctionLibrary::CheckKeys(TArray<FKey> CurrentKeys, TArray<FKey> DesiredKeys, APlayerController* PC)
{
	if (!PC || DesiredKeys.Num() == 0)
		return KeyResultData::Fail;

	if (CurrentKeys.Num() == 0)
		return KeyResultData::Incomplete;

	int32 tracker = 0;
	KeyResultData KeyCheckResult = KeyResultData::Fail;
	if (CurrentKeys.Num() < DesiredKeys.Num())
	{
		for (int32 i = 0; i < CurrentKeys.Num(); i++)
		{
			tracker = DesiredKeys.Find(CurrentKeys[i]);	

			if (tracker == INDEX_NONE)
			{
				KeyCheckResult = KeyResultData::Fail;
				break;
			}
		}

		if (tracker != INDEX_NONE)
			KeyCheckResult = KeyResultData::Incomplete;
	}

	else if (CurrentKeys.Num() == DesiredKeys.Num())
	{
		for (int32 i = 0; i < DesiredKeys.Num(); i++)
		{
			tracker = DesiredKeys.Find(CurrentKeys[i]);

		    if (tracker == INDEX_NONE)
			{
				KeyCheckResult = KeyResultData::Fail;
				break;
			}
		}

		if (tracker != INDEX_NONE)
			KeyCheckResult = KeyResultData::Success;
	}

	return KeyCheckResult;
}

bool USQTEUtilityFunctionLibrary::GetHeldDownKeys(TArray<FKey> KeysRef, APlayerController* PC, float HoldTimeRef)
{
	bool result = false;

	if (!PC)
		return result;

	switch (KeysRef.Num())
	{
		case 1:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef)
				result = true;
			break;
		case 2:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[1]) >= HoldTimeRef)
				result = true;
			break;
		case 3:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[1]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[2]) >= HoldTimeRef)
				result = true;
			break;
		case 4:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[1]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[2]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[3]) >= HoldTimeRef)
				result = true;
			break;
		case 5:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[1]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[2]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[3]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[4]) >= HoldTimeRef)
				result = true;
			break;
		case 6:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[1]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[2]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[3]) >= HoldTimeRef
				&& PC->GetInputKeyTimeDown(KeysRef[4]) >= HoldTimeRef && PC->GetInputKeyTimeDown(KeysRef[5]) >= HoldTimeRef)
				result = true;
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("Size is either out of bounds or is 0."));
			break;
	}

	return result;
}

bool USQTEUtilityFunctionLibrary::GetPressedKeys(TArray<FKey> KeysRef, APlayerController* PC)
{
	if (!PC || KeysRef.Num() == 0)
		return false;

	bool result = false;
	float timeVal = 2.0f;

	if (KeysRef.Num() != 0)
	{
		switch (KeysRef.Num())
		{
		case 1:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal)
				result = true;
			break;
		case 2:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal)
				result = true;
			break;
		case 3:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[2]) <= timeVal)
				result = true;
			break;
		case 4:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[2]) <= timeVal
				&& PC->GetInputKeyTimeDown(KeysRef[3]) <= timeVal)
				result = true;
			break;
		case 5:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[2]) <= timeVal
				&& PC->GetInputKeyTimeDown(KeysRef[3]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[4]) <= timeVal)
				result = true;
			break;
		case 6:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[2]) <= timeVal
				&& PC->GetInputKeyTimeDown(KeysRef[3]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[4]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[5]) <= timeVal)
				result = true;
			break;
		case 7:
			if (PC->GetInputKeyTimeDown(KeysRef[0]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[1]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[2]) <= timeVal
				&& PC->GetInputKeyTimeDown(KeysRef[3]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[4]) <= timeVal && PC->GetInputKeyTimeDown(KeysRef[5]) <= timeVal
				&& PC->GetInputKeyTimeDown(KeysRef[6]) <= timeVal)
				result = true;
			break;
		default:
			UE_LOG(LogTemp, Warning, TEXT("Number of keys exceeds limit of 7"));
		}
	}

	return result;
}

bool USQTEUtilityFunctionLibrary::VerifyStartTimes(const TArray<FKeyToTimeBindHelper> Ref)
{
	int32 size = Ref.Num();
	if (size <= 0)
		return false;

	bool result = true;
	for (int32 i = 0; i < size; i++)
	{
		if (i != size - 1)
		{
			if (!(Ref[i].StartTime < Ref[i + 1].StartTime))
			{
				result = false;
				break;
			}
		}
	}

	return result;
}

void USQTEUtilityFunctionLibrary::GetConditionalParameters(FConditionalQTE inRef, bool bHasOpening, FConditionalQTE& outRef, bool& Valid)
{
	outRef.bHasOpeningSequence = bHasOpening;
	outRef.bInstantFailure = inRef.bInstantFailure;
	outRef.bPlayHelperSequences = inRef.bPlayHelperSequences;
	outRef.FailRatio = inRef.FailRatio;
	outRef.SuccessRatio = inRef.SuccessRatio;
	outRef.FailureLimit = inRef.FailureLimit;
	outRef.SuccessLimit = inRef.SuccessLimit;

	// Optional Data capture
	if (outRef.bPlayHelperSequences)
	{
		outRef.SuccessThreshold = inRef.SuccessThreshold;
		outRef.FailThreshold = inRef.FailThreshold;
		
		if (inRef.SuccessInput.Sequences.Num() > 0)
		{
			outRef.SuccessInput.Sequences = inRef.SuccessInput.Sequences;
		}

		if (inRef.FailInput.Sequences.Num() > 0)
		{
			outRef.FailInput.Sequences = inRef.FailInput.Sequences;
		}
	}
	// End of Optional Data
	
	if (inRef.inputData.Data.Num() > 0)
	{
		for (int32 i = 0; i < inRef.inputData.Data.Num(); i++)
		{
			
			if (inRef.inputData.Data[i].Keys.IsValid())
			{
				outRef.inputData.Data.Add(FConditionalQTEHelperData(inRef.inputData.Data[i].Keys, inRef.inputData.Data[i].Threshold));

				if (!outRef.inputData.Data[i].Keys.IsValid())
				{
					Valid = false;
					UE_LOG(LogTemp, Warning, TEXT("Key choices aren't valid in conditional QTE key selection"));
					return;
				}
			}
			else if (inRef.inputData.Data[i].PreciseKeys.Num() > 0)
			{
				outRef.inputData.Data.Add(FConditionalQTEHelperData(inRef.inputData.Data[i].PreciseKeys, inRef.inputData.Data[i].Threshold));

				for (FPrecisionKeys PrecKeys: outRef.inputData.Data[i].PreciseKeys)
				{
					if (!PrecKeys.ValidKeys() )
					{
						Valid = false;
						UE_LOG(LogTemp, Warning, TEXT("Precision keys aren't valid"));
						return;
					}
				}
			}

			else if (inRef.inputData.Data[i].subSeq.KeyMap.Num() > 0)
			{
				outRef.inputData.Data.Add(FConditionalQTEHelperData(inRef.inputData.Data[i].subSeq, inRef.inputData.Data[i].Threshold));

				if (outRef.inputData.Data[i].subSeq.KeyMap.Num() > 0)
				{
					for (FSubSequenceHelper Helper: outRef.inputData.Data[i].subSeq.KeyMap)
					{
						if (!Helper.IsValid())
						{
							Valid = false;
							UE_LOG(LogTemp, Warning, TEXT("SubSequence map isn't valid"));
							return;
						}
					}
				}
			}

			else
			{
				UE_LOG(LogTemp, Warning, TEXT("Error. input is not a key, precision key nor subsequence or their values are empty"));
				Valid = false;
				return;
			}

			int32 l = i + 1;
			if (l != inRef.inputData.Data.Num())
			{
				if (inRef.inputData.Data[i].Threshold > inRef.inputData.Data[l].Threshold)
				{
					Valid = false;
					UE_LOG(LogTemp, Warning, TEXT("Thresholds are not in order. One or more of the previous is higher than the following in the array"));
					return;
				}
			}
		}
	}
	else
	{
		Valid = false;
		UE_LOG(LogTemp, Warning, TEXT("InputData has no references at all"));
		return;
	}

	Valid = true;
}
