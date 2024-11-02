// Fill out your copyright notice in the Description page of Project Settings.

// RLPongGameMode.h
#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameModeBase.h"
#include "RLPongGameMode.generated.h"

UCLASS()
class RLPONG_API ARLPongGameMode : public AGameModeBase
{
    GENERATED_BODY()

public:
    ARLPongGameMode();

protected:
    virtual void BeginPlay() override;
};