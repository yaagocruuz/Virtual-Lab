// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayEffect.h"

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

	// switch (nao sei se é viavel, mas se for, melhor do que usar if e else)
	// case 1: mistura que pega fogo, desabilita todos os outros elementos que não são dessa mistura 
				// e checa se no trigger existe todos os elementos,
				// se tiver, "isFire = true;" e destrói elementos da mistura 1;
}


