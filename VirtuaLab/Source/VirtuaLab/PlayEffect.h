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

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isSmoke;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isColorChange;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		bool isFire;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		ATriggerVolume *PressurePlate;

	UPROPERTY(BlueprintReadWrite, EditAnywhere)
		int ActiveMixtureId;

	UPROPERTY(EditAnywhere)
		int Mixture1Qty;

	UPROPERTY(EditAnywhere)
		int Mixture2Qty;

public:	
	// Called every frame
	virtual void TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction) override;

	// Methods
	int32 CorrectElementsCount();
	void setIsFire(bool newIsFire);
	void setIsSmoke(bool newIsSmoke);
	void setIsColorChange(bool newIsColorChange);
	void setActiveMixtureId(int newActiveMixtureId);
};
