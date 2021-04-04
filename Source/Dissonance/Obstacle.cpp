// Fill out your copyright notice in the Description page of Project Settings.

#include "Obstacle.h"

// Sets default values
AObstacle::AObstacle()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ObstacleRoot = CreateDefaultSubobject<USceneComponent>(TEXT("ObstacleRoot"));
	SetRootComponent(ObstacleRoot);

	ObstacleMesh = CreateDefaultSubobject<UStaticMeshComponent>(TEXT("ObstacleMesh"));
	ObstacleMesh->SetupAttachment(RootComponent);

}

// Called when the game starts or when spawned
void AObstacle::BeginPlay()
{
	Super::BeginPlay();

	ObstacleSpeed = -1000;
}

// Called every frame
void AObstacle::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	SetActorLocation(GetActorLocation() + (FVector(ObstacleSpeed * DeltaTime, 0, 0)));

	if (GetActorLocation().X <= XDespawnPoint)
	{
		this->Destroy();
	}
}

void AObstacle::SetDespawnLocation(FVector DespawnLocation)
{
	XDespawnPoint = DespawnLocation.X;
}

