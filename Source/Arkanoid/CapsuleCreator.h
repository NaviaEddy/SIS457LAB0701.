// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "GameCapsules.h"
#include "CapsuleCreator.generated.h"
UCLASS()
class ARKANOID_API ACapsuleCreator : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ACapsuleCreator();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	//Creacion de capsulas. Es puramente virtual por lo que no necesita una implementacion
	virtual AGameCapsules* CreateCapsule(FString NameCapsule) PURE_VIRTUAL(ACapsuleCreator::CreateCapsule, return nullptr;);

	//Ordena la creacion de una categoria especifica de capsula
	AGameCapsules* OrdenCapsule(FString Category);

};
