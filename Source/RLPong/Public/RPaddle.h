#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RPaddle.generated.h"

UCLASS()
class RLPONG_API ARPaddle : public AActor
{
    GENERATED_BODY()

public:
    ARPaddle();

protected:
    virtual void BeginPlay() override;

public:
    virtual void Tick(float DeltaTime) override;


    UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Components")
    UStaticMeshComponent* PaddleMesh;


    UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
    float MoveSpeed;
};
