// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "CapsuleCreator.h"
#include "HelpCapsules.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API AHelpCapsules : public ACapsuleCreator
{
	GENERATED_BODY()

public:

	//Creacion de capsulas. Es puramente virtual por lo que no necesita una implementacion
	virtual AGameCapsules* CreateCapsule(FString NameCapsule) override;
	
};
