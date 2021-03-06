
#include "PredeterminedObstacleSpawner.h"

void APredeterminedObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();

	if (PredeterminedObstacles.Num() > 0) 
	{
		this->ObstacleSpawnTimer = PredeterminedObstacles[0].DelayBeforeSpawn;
	}
	else
	{
		this->Destroy();
	}
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
		FVector ObstacleSpawnLocation = GetActorLocation() + SpawnLocations[PredeterminedObstacles[ListIndex].ObstacleSpawnPoint];

		AObstacle* NewObstacle = GetWorld()->SpawnActor<AObstacle>(PredeterminedObstacles[ListIndex].ObstacleType, ObstacleSpawnLocation, FRotator(0, 0, 0));
		NewObstacle->SetDespawnLocation(this->GetActorLocation() + ObstacleDespawnLocation);

		UpdateListIndex();
		SetSpawnInterval();

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