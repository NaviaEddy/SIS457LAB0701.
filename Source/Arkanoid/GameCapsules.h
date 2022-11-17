 // Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/StaticMeshActor.h"
#include "GameCapsules.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AGameCapsules : public AStaticMeshActor
{
	GENERATED_BODY()
	

public:

	AGameCapsules();

protected:

	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	//Nombre de la capsula
	FString CapsuleName;

public:

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	FString GetCapsuleName();
};
