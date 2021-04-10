// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, text);

#include "PredeterminedObstacleSpawner.h"

void APredeterminedObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	this->ObstacleSpawnTimer = PredeterminedObstacles[0].DelayBeforeSpawn;
}

void APredeterminedObstacleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	GameTimer += DeltaTime;
}

void APredeterminedObstacleSpawner::SpawnObstacle()
{
	if (PredeterminedObstacles[ListIndex].ObstacleType != nullptr && PredeterminedObstacles[ListIndex].DelayBeforeSpawn >= 0)
	{
		//Create Obstacle
		AObstacle* NewObstacle = GetWorld()->SpawnActor<AObstacle>(PredeterminedObstacles[ListIndex].ObstacleType, GetActorLocation(), FRotator(0, 0, 0));
		NewObstacle->SetDespawnLocation(this->GetActorLocation() + ObstacleDespawnLocation);

		UpdateListIndex();
		SetSpawnInterval();

		print("GameTime: " + FString::SanitizeFloat(GameTimer));

	}
}

//Stops the spawn delays from compounding
void APredeterminedObstacleSpawner::SetSpawnInterval()
{
	ObstacleSpawnTimer += PredeterminedObstacles[ListIndex].DelayBeforeSpawn;
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