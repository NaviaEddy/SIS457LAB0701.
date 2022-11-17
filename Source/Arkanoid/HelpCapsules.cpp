// Fill out your copyright notice in the Description page of Project Settings.


#include "HelpCapsules.h"
#include "CapsuleOfHealt.h"
#include "CapsuleOfMultiplication.h"
#include "CapsuleOfSpeed.h"

AGameCapsules* AHelpCapsules::CreateCapsule(FString NameCapsule)
{
    if (NameCapsule.Equals("Healt")) {
        return GetWorld()->SpawnActor<ACapsuleOfHealt>(ACapsuleOfHealt::StaticClass(), FVector(-100.0f, 0.0f, 340.0f), FRotator::ZeroRotator);
    }
    else if (NameCapsule.Equals("Multiplication")) {
        return GetWorld()->SpawnActor<ACapsuleOfMultiplication>(ACapsuleOfMultiplication::StaticClass(), FVector(0.0f, 0.0f, 340.0f), FRotator::ZeroRotator);
    }
    else if (NameCapsule.Equals("Speed")) {
        return GetWorld()->SpawnActor<ACapsuleOfSpeed>(ACapsuleOfSpeed::StaticClass(), FVector(100.0f, 0.0f, 340.0f), FRotator::ZeroRotator);
    }else return nullptr; //Devuelve nada si el nombre de la capsula no existe
}
