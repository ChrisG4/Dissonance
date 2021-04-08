// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, text);

#include "ObstacleSpawner.h"
#include "Engine/World.h"

// Sets default values
AObstacleSpawner::AObstacleSpawner()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

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

}

void AObstacleSpawner::SpawnObstacle()
{

}

