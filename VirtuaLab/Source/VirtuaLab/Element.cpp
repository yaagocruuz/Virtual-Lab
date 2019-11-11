// Fill out your copyright notice in the Description page of Project Settings.

#include "Element.h"

// Sets default values for this component's properties
UElement::UElement()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UElement::BeginPlay()
{
	Super::BeginPlay();

	this->SetElementId(1);
	
}


// Called every frame
void UElement::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	// ...
}


int32 UElement::GetElementId()
{
	return this->Id;
}

void UElement::SetElementId(int NewId)
{
	this->Id = NewId;
}