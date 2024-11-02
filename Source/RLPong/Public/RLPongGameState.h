// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/GameStateBase.h"
#include "RLPongGameState.generated.h"

UCLASS()
class RLPONG_API ARLPongGameState : public AGameStateBase
{
    GENERATED_BODY()

public:
    ARLPongGameState();


    UPROPERTY(BlueprintReadOnly, Category = "Game")
    int32 PlayerScore;

    UPROPERTY(BlueprintReadOnly, Category = "Game")
    int32 AIScore;


    void AddPlayerScore();
    void AddAIScore();
};