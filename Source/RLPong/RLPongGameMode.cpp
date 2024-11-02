// Fill out your copyright notice in the Description page of Project Settings.


// RLPongGameMode.cpp
#include "RLPongGameMode.h"
#include "Kismet/GameplayStatics.h"
#include "EngineUtils.h"
#include "GameFramework/PlayerController.h"

ARLPongGameMode::ARLPongGameMode()
{

}

void ARLPongGameMode::BeginPlay()
{
    Super::BeginPlay();

    APlayerController* PC = UGameplayStatics::GetPlayerController(GetWorld(), 0);
    if (PC)
    {

        AActor* CameraActor = UGameplayStatics::GetActorOfClass(GetWorld(), AActor::StaticClass());
        if (CameraActor)
        {
            PC->SetViewTargetWithBlend(CameraActor, 3.f, EViewTargetBlendFunction::VTBlend_Cubic);
        }
    }
}
