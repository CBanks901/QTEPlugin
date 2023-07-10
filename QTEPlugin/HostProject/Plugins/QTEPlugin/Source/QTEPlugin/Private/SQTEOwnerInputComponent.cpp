// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTEOwnerInputComponent.h"

// Sets default values for this component's properties
USQTEOwnerInputComponent::USQTEOwnerInputComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}


// Called when the game starts
void USQTEOwnerInputComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...

	ACharacter* Owner = CastChecked<ACharacter>(GetOwner());

	AController* OwnerController = Owner->GetController();

	if (OwnerController)
	{
		OwnerController->OnPossessedPawnChanged.AddDynamic(this, &USQTEOwnerInputComponent::OwnerPawnChanged);
	}

	if (Owner->InputComponent)
	{
		UInputComponent* InputComp = Owner->InputComponent;

		if (InputComp)
		{
			for (FKey Key : KeysToUse)
			{
				if (Key.IsValid())
				{
					InputComp->BindKey(Key, EInputEvent::IE_Pressed, this, &USQTEOwnerInputComponent::KeyPressed);
					InputComp->BindKey(Key, EInputEvent::IE_Released, this, &USQTEOwnerInputComponent::KeyReleased);
				}
			}
		}
	}
	


}

void USQTEOwnerInputComponent::KeyPressed(FKey Ref)
{
	if (bAnalogOnly)
	{
		if (!Ref.IsAnalog())
			return;
	}

	else if (bGamepadOnly)
	{
		if (!Ref.IsGamepadKey())
			return;
	}
	else if (bKeyBoardOnly)
	{
		if (Ref.IsAnalog() || Ref.IsGamepadKey() || Ref.IsMouseButton())
			return;
	}

	int32 index = 0;
	if (!ActiveKeys.Find(Ref, index))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("Key %s added to list."), *Ref.ToString()));
		ActiveKeys.Add(Ref);
	}
//	else
	//	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("Key %s already is active."), *Ref.ToString()));

}

void USQTEOwnerInputComponent::KeyReleased(FKey Ref)
{
	int32 index = 0;

	if (ActiveKeys.Find(Ref, index))
	{
		//GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("Key %s removed from list."), *Ref.ToString()));
		ActiveKeys.Remove(Ref);
	}
	//else
	//	GEngine->AddOnScreenDebugMessage(-1, 10.0f, FColor::Green, FString::Printf(TEXT("Key %s doesn't exist yet."), *Ref.ToString()));
}

void USQTEOwnerInputComponent::OwnerPawnChanged(APawn* NewPawn, APawn* OldPawn)
{
	if (NewPawn)
	{
		if (!TimerHandler.IsValid() )
		{
			TimerDelegate.BindUObject(this, &USQTEOwnerInputComponent::ResetData);
			GetWorld()->GetTimerManager().SetTimer(TimerHandler, TimerDelegate, 4.0f, false);
		}
	}
}

void USQTEOwnerInputComponent::ResetData()
{
	ACharacter* Owner = CastChecked<ACharacter>(GetOwner());
	if (Owner)
	{
		if (Owner->Controller)
		{
			if (Owner->Controller->InputComponent)
			{
				UInputComponent* InputComp = Owner->InputComponent;

				if (InputComp)
				{
					for (FKey Key : KeysToUse)
					{
						if (Key.IsValid())
						{
							InputComp->BindKey(Key, EInputEvent::IE_Pressed, this, &USQTEOwnerInputComponent::KeyPressed);
							InputComp->BindKey(Key, EInputEvent::IE_Released, this, &USQTEOwnerInputComponent::KeyReleased);
						}
					}
				}
			}
		}
	}
}

const FString USQTEOwnerInputComponent::GetActiveKeyData()
{
	FString RefValue("bGamepadOnly: ");
	bGamepadOnly ? RefValue.Append("True") : RefValue.Append("False");

	RefValue.Append("\nbAnalogOnly: ");
	bAnalogOnly ? RefValue.Append("True") : RefValue.Append("False");

	RefValue.Append("\nbKeyboardOnly: ");
	bKeyBoardOnly ? RefValue.Append("True") : RefValue.Append("False");

	RefValue.Append("\nKeys Utilizing:\n");

	if (KeysToUse.IsEmpty())
		RefValue.Append("Empty Reference......");
	else
	{
		for (FKey Key : KeysToUse)
		{
			if (Key.IsValid())
				RefValue.Append(Key.ToString() + "\n");
		}
	}

	return RefValue;
}

