// Fill out your copyright notice in the Description page of Project Settings.


#include "PredeterminedObstacleSpawner.h"

void APredeterminedObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	this->ObstacleSpawnTimer = PredeterminedObstacles[0].DelayBeforeSpawn;
}

void APredeterminedObstacleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (ObstacleSpawnTimer <= 0)
	{
		SpawnObstacle();
	}
}

void APredeterminedObstacleSpawner::SpawnObstacle()
{
	if (PredeterminedObstacles[ListIndex].ObstacleType != nullptr && PredeterminedObstacles[ListIndex].DelayBeforeSpawn >= 0)
	{
		//Create Obstacle
		AObstacle* NewObstacle = GetWorld()->SpawnActor<AObstacle>(PredeterminedObstacles[ListIndex].ObstacleType, GetActorLocation(), FRotator(0, 0, 0));
		NewObstacle->SetDespawnLocation(this->GetActorLocation() + ObstacleDespawnLocation);

		UpdateListIndex();

		ObstacleSpawnTimer = PredeterminedObstacles[ListIndex].DelayBeforeSpawn;
	}
}

void APredeterminedObstacleSpawner::UpdateListIndex()
{
	if (ListIndex < PredeterminedObstacles.Num() - 1)
	{
		ListIndex++;
	}
	else if (bListLoops == true)
	{
		ListIndex = 0;
	}
	else
	{
		this->Destroy();
	}
}