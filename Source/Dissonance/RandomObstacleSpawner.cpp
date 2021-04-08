// Fill out your copyright notice in the Description page of Project Settings.


#include "RandomObstacleSpawner.h"

void ARandomObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	ObstacleSpawnTimer = SpawnInterval;
}

void ARandomObstacleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
}

void ARandomObstacleSpawner::SpawnObstacle()
{
	if (RandomObstacles.Num() > 0) {
		int32 ObstacleChoice = FMath::RandRange(0, RandomObstacles.Num() - 1);

		if (RandomObstacles[ObstacleChoice] != nullptr)
		{
			AObstacle* NewObstacle = GetWorld()->SpawnActor<AObstacle>(RandomObstacles[ObstacleChoice], GetActorLocation(), FRotator(0, 0, 0));
			NewObstacle->SetDespawnLocation(this->GetActorLocation() + ObstacleDespawnLocation);

			ObstacleSpawnTimer = SpawnInterval;
		}
	}
}