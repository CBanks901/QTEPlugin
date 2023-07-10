// Fill out your copyright notice in the Description page of Project Settings.


#include "SQTEEntityComponent.h"

// Sets default values for this component's properties
USQTEEntityComponent::USQTEEntityComponent()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = false;

	// ...
}

void USQTEEntityComponent::GetStartKeys(UDataTable* TableRef, bool& Result, TArray<FKey>& Keys)
{
	Result = false;
	Keys = TArray<FKey>();

	if (TableRef)
	{
		FEntityDataHelper *Ref = QTETableSettings.EntityData.Find(TableRef);
		if (Ref)
		{
			for (FKey KeysCopy : Ref->KeyToStart)
			{
				if (!KeysCopy.IsValid())
					return;
			}

			Result = true;
			Keys = Ref->KeyToStart;
		}
	}
}



/*
// Called when the game starts
void USQTEEntityComponent::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}*/

/*
// Called every frame
void USQTEEntityComponent::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}
*/
