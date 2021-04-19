// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "ObstacleSpawner.h"
#include "PredeterminedObstacleSpawner.generated.h"

USTRUCT()
struct FPredeterminedObstacle
{
	GENERATED_BODY()

public:

	UPROPERTY(EditAnywhere)
	TEnumAsByte<SpawnPoint> ObstacleSpawnPoint;

	UPROPERTY(EditAnywhere, Category = "Obstacle List")
	float DelayBeforeSpawn = 4;
		
	UPROPERTY(EditAnywhere, Category = "Obstacle List")
	TSubclassOf<AObstacle> ObstacleType;


};

UCLASS()
class DISSONANCE_API APredeterminedObstacleSpawner : public AObstacleSpawner
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;

	//Does the list begin again upon reaching the end of the list
	UPROPERTY(EditAnywhere, Category = "Obstacle List")
	bool bListLoops = false;

	UPROPERTY(EditAnywhere, Category = "Obstacle List")
	TArray<FPredeterminedObstacle> PredeterminedObstacles;

	int32 ListIndex = 0;

	float GameTimer = 0.0f;
public:
	void Tick(float DeltaTime) override;

	void SpawnObstacle() override;
	void SetSpawnInterval();

	void UpdateListIndex();

};
