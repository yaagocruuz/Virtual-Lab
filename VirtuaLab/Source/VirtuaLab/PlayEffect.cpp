// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayEffect.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "EngineUtils.h"
#include "Element.h"

// Sets default values for this component's properties
UPlayEffect::UPlayEffect()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;
}


// Called when the game starts
void UPlayEffect::BeginPlay()
{
	Super::BeginPlay();

	// Set the active mixture to 1 every time the game is restarted
	setActiveMixtureId(1);
	Mixture1Qty = 2;
	Mixture2Qty = 2;

	setIsFire(false);
	setIsSmoke(false);
	
}

// Called every frame
void UPlayEffect::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	int32 ElementsInPlace = CorrectElementsCount();

	if (ActiveMixtureId == 1) {
		if (ElementsInPlace == Mixture1Qty) {
			setIsFire(true);
			setActiveMixtureId(2);
		}
	}
	else if (ActiveMixtureId == 2) {
		if (ElementsInPlace == Mixture2Qty) {
			setIsSmoke(true);
			setActiveMixtureId(3);
		}
	}

}

int UPlayEffect::CorrectElementsCount()
{
	int MixtureCount = 0;

	TArray<AActor*> EmptyArray;
	EmptyArray.Empty();
	
	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	if (OverlappingActors == EmptyArray) {
		return MixtureCount;
	} else {
		for (auto* Actor : OverlappingActors)
		{
			int ElementRefId = Actor->FindComponentByClass<UElement>()->GetElementId();
			UE_LOG(LogTemp, Error, TEXT("%s on pressure plate"), *Actor->GetName());
			UE_LOG(LogTemp, Error, TEXT("ELEMENT ID = %d"), ElementRefId);
			UE_LOG(LogTemp, Error, TEXT("ACTIVE MIXTURE ID = %d"), ActiveMixtureId);

		
			if (ElementRefId == ActiveMixtureId) {
				MixtureCount++;
				//Actor->Destroy();
			}
			else {
				MixtureCount--;
			}
		}
	}

	return MixtureCount;
}

void UPlayEffect::setIsFire(bool newIsFire) {
	this->isFire = newIsFire;
}

void UPlayEffect::setIsSmoke(bool newIsSmoke) {
	this->isSmoke = newIsSmoke;
}

void UPlayEffect::setIsColorChange(bool newIsColorChange) {
	this->isColorChange = newIsColorChange;
}

void UPlayEffect::setActiveMixtureId(int newActiveMixtureId) {
	this->ActiveMixtureId = newActiveMixtureId;
}