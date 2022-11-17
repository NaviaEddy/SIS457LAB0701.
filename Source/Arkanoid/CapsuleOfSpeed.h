// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameCapsules.h"
#include "CapsuleOfSpeed.generated.h"

/**
 * 
 */
UCLASS()
class ARKANOID_API ACapsuleOfSpeed : public AGameCapsules
{
	GENERATED_BODY()

/*public:

	ACapsuleOfSpeed();*/
	
protected:

	virtual void BeginPlay() override;

};
