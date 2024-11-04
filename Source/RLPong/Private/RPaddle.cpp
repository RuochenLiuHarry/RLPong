#include "RPaddle.h"

ARPaddle::ARPaddle()
{
    PrimaryActorTick.bCanEverTick = true;


    PaddleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("PaddleMesh"));
    RootComponent = PaddleMesh;

    MoveSpeed = 200.0f; 
}

void ARPaddle::BeginPlay()
{
    Super::BeginPlay();
}

void ARPaddle::Tick(float DeltaTime)
{
    Super::Tick(DeltaTime);
}
