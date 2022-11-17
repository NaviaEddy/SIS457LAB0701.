// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsules.h"
#include "CapsuleOfHealt.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ACapsuleOfHealt : public AGameCapsules
{
	GENERATED_BODY()

public:

	ACapsuleOfHealt();

protected:

	virtual void BeginPlay() override;
	
};
