// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleOfSpeed.h"

/*ACapsuleOfSpeed::ACapsuleOfSpeed()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialCapsule(TEXT("Material'/Game/Assets/Materials/M_CpSpeed.M_CpSpeed'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialCapsule.Object);
}*/

void ACapsuleOfSpeed::BeginPlay()
{
	Super::BeginPlay();

	CapsuleName = "velocidad";
}
