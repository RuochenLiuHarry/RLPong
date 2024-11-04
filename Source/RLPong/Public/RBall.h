// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "RBall.generated.h"

UCLASS()
class RLPONG_API ARBall : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ARBall();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;
	UPROPERTY(VisibleAnywhere, BlueprintReadWrite, Category = "Components")
	UStaticMeshComponent* BallMesh;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float BallSpeed;
};
