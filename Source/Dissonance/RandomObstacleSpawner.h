// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObstacleSpawner.h"
#include "RandomObstacleSpawner.generated.h"

/**
 * 
 */
UCLASS()
class DISSONANCE_API ARandomObstacleSpawner : public AObstacleSpawner
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float SpawnInterval = 4;

	UPROPERTY(EditAnywhere)
	TArray<TSubclassOf<AObstacle>> RandomObstacles;

public:
	void Tick(float DeltaTime) override;

	void SpawnObstacle() override;

};
