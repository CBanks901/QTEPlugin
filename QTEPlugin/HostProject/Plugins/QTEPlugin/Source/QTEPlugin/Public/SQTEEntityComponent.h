// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "UQTEUtilities.h"
#include "SQTEEntityComponent.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class QTEPLUGIN_API USQTEEntityComponent : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	USQTEEntityComponent();

protected:

public:	
	// Called every frame
	//virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	UFUNCTION(BlueprintCallable, Category = "Keys")
	void GetStartKeys(UDataTable* TableRef, bool &Result, TArray<FKey> &Keys);

public:

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "DataTables")
	FQTEEntitySettings QTETableSettings;

};
