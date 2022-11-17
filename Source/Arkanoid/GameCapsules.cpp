// Fill out your copyright notice in the Description page of Project Settings.


#include "GameCapsules.h"


AGameCapsules::AGameCapsules()
{
	PrimaryActorTick.bCanEverTick = true;

	static ConstructorHelpers::FObjectFinder<UStaticMesh> MeshCapsule(TEXT("StaticMesh'/Game/Assets/Meshes/SM_Capsule.SM_Capsule'"));
	GetStaticMeshComponent()->SetStaticMesh(MeshCapsule.Object);
	GetStaticMeshComponent()->SetCollisionProfileName(UCollisionProfile::Pawn_ProfileName);
	GetStaticMeshComponent()->SetMobility(EComponentMobility::Movable);
	GetStaticMeshComponent()->SetRelativeScale3D_Direct(FVector(0.5f, 1.25f, 0.5f));
	SetActorEnableCollision(true);

}

void AGameCapsules::BeginPlay()
{
	Super::BeginPlay();
}

void AGameCapsules::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

FString AGameCapsules::GetCapsuleName()
{
	return CapsuleName;
}
