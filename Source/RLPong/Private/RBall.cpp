// Fill out your copyright notice in the Description page of Project Settings.


#include "RBall.h"

// Sets default values
ARBall::ARBall()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;
	BallMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("BallMesh"));
	RootComponent = BallMesh;

	BallSpeed = 300.0f;
	BallMesh->SetCollisionProfileName(TEXT("BlockAll"));
	BallMesh->SetSimulatePhysics(true);  
}

// Called when the game starts or when spawned
void ARBall::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ARBall::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

