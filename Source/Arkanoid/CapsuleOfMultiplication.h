// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsules.h"
#include "CapsuleOfMultiplication.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ACapsuleOfMultiplication : public AGameCapsules
{
	GENERATED_BODY()

protected:

	virtual void BeginPlay() override;
};
