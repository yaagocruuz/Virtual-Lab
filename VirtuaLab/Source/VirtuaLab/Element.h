// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Element.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VIRTUALAB_API UElement : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UElement();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int32 GetElementId();

	void SetElementId(int NewId);

protected:
	// Element Id
	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int Id;
};
