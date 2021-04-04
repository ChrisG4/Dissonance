// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.h"
#include "ObstacleSpawner.generated.h"

UCLASS()
class DISSONANCE_API AObstacleSpawner : public AActor
{
	GENERATED_BODY()
	
protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly, Category = "Obstacle Spawning")
	TArray<TSubclassOf<AObstacle>> Obstacles;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget))
	FVector ObstacleDespawnLocation;

	float ObstacleSpawnInterval = 5;

	float ObstacleSpawnTimer;

public:
	// Sets default values for this actor's properties
	AObstacleSpawner();

	virtual void Tick(float DeltaTime) override;

	void SpawnObstacle();
};
