// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayEffect.h"
#include "GameFramework/Actor.h"
#include "Engine/World.h"
#include "EngineUtils.h"


// Sets default values for this component's properties
UPlayEffect::UPlayEffect()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}


// Called when the game starts
void UPlayEffect::BeginPlay()
{
	Super::BeginPlay();

	// ...
	
}


// Called every frame
void UPlayEffect::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction* ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	//if (ShouldActivateEffect === ActiveMixture->TotalAmountOfElements()) { [AQUI TEM QUE SETAR A VARIAVEL BOOL PRA CADA EFEITO DINAMICAMENTE] }
}


int32 UPlayEffect::ShouldActivateEffect()
{
	int32 MixtureCount = 0;

	TArray<AActor*> OverlappingActors;
	PressurePlate->GetOverlappingActors(OUT OverlappingActors);

	//Tenho que criar essa classe que vai ser atribuida a todos os frascos. Sendo que cada frasco vai ter o valor da sua mistura salva nele.
	//Classe* = Element

	for (auto* Actor : OverlappingActors)
	{
		// Element = *Actor;
		//if (Element->GetMixture() === ActiveMixture) { MixtureCount++ }
	}

	return MixtureCount;
}