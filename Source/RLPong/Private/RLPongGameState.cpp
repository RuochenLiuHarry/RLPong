// Fill out your copyright notice in the Description page of Project Settings.


// RLPongGameState.cpp
#include "RLPongGameState.h"

ARLPongGameState::ARLPongGameState()
{
    PlayerScore = 0;
    AIScore = 0;
}

void ARLPongGameState::AddPlayerScore()
{
    PlayerScore++;
}

void ARLPongGameState::AddAIScore()
{
    AIScore++;
}