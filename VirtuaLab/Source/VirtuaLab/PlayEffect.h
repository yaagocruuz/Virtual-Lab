// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/ActorComponent.h"
#include "Engine/TriggerVolume.h"
#include "PlayEffect.generated.h"


UCLASS( ClassGroup=(Custom), meta=(BlueprintSpawnableComponent) )
class VIRTUALAB_API UPlayEffect : public UActorComponent
{
	GENERATED_BODY()

public:	
	// Sets default values for this component's properties
	UPlayEffect();

protected:
	// Called when the game starts
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	int32 ShouldActivateEffect();

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isSmoke;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isColorChange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isFire = true;

private:
	UPROPERTY(EditAnywhere)
		ATriggerVolume *PressurePlate;

	UPROPERTY(EditAnywhere)
		int32 ActiveMixture;

};
