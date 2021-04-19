// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Obstacle.h"
#include "ObstacleSpawner.generated.h"

UENUM()
enum SpawnPoint {
	SpawnPoint1 UMETA(DisplayName = "Spawn Point 1"),
	SpawnPoint2 UMETA(DisplayName = "Spawn Point 2"),
};

UCLASS()
class DISSONANCE_API AObstacleSpawner : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, EditFixedSize, meta = (MakeEditWidget), Category = "Spawning and Despawning")
		TArray<FVector> SpawnLocations;

	UPROPERTY(EditAnywhere, meta = (MakeEditWidget), Category = "Spawning and Despawning")
		FVector ObstacleDespawnLocation;

	float ObstacleSpawnTimer;



public:
	// Sets default values for this actor's properties
	AObstacleSpawner();

	virtual void Tick(float DeltaTime) override;

	virtual void SpawnObstacle();
};
