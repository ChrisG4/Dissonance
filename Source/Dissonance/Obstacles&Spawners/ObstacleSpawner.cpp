// Fill out your copyright notice in the Description page of Project Settings.

#include "ObstacleSpawner.h"
#include "Engine/World.h"
#include "Kismet/GameplayStatics.h"

// Sets default values
AObstacleSpawner::AObstacleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	SpawnLocations.Init(FVector(0, 0, 0), 2);
}

// Called when the game starts or when spawned
void AObstacleSpawner::BeginPlay()
{
	Super::BeginPlay();
}

// Called every frame
void AObstacleSpawner::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	ObstacleSpawnTimer -= DeltaTime;

	if (ObstacleSpawnTimer <= 0.0f)
	{
		SpawnObstacle();
	}
}

void AObstacleSpawner::SpawnObstacle()
{

}

