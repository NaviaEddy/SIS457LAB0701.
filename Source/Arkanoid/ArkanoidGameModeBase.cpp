// Copyright Epic Games, Inc. All Rights Reserved.


#include "ArkanoidGameModeBase.h"
#include "HelpCapsules.h"

AArkanoidGameModeBase::AArkanoidGameModeBase()
{
}

void AArkanoidGameModeBase::BeginPlay()
{
	Super::BeginPlay();

	//Spawn de las capsulas de ayuda
	ACapsuleCreator* HC = GetWorld()->SpawnActor<AHelpCapsules>(AHelpCapsules::StaticClass());

	//Spawn de la capsula de vida
	AGameCapsules* Capsule = HC->OrdenCapsule("Healt");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Turquoise, FString::Printf(TEXT("Capsula de %s"),  * Capsule->GetCapsuleName()));

	//Spawn de la capsula de multiplicacion
	Capsule = HC->OrdenCapsule("Multiplication");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Cyan, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));

	//Spawn de la capsula de velocidad
	Capsule = HC->OrdenCapsule("Speed");
	GEngine->AddOnScreenDebugMessage(-1, 15.f, FColor::Green, FString::Printf(TEXT("Capsula de %s"), *Capsule->GetCapsuleName()));
}
