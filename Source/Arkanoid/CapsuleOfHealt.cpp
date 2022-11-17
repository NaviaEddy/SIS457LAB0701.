// Fill out your copyright notice in the Description page of Project Settings.


#include "CapsuleOfHealt.h"

ACapsuleOfHealt::ACapsuleOfHealt()
{
	static ConstructorHelpers::FObjectFinder<UMaterialInterface> MaterialCapsule(TEXT("Material'/Game/Assets/Materials/M_CpHealt.M_CpHealt'"));
	GetStaticMeshComponent()->SetMaterial(0, MaterialCapsule.Object);
}

void ACapsuleOfHealt::BeginPlay()
{
	Super::BeginPlay();

	CapsuleName = "Vida";
}
