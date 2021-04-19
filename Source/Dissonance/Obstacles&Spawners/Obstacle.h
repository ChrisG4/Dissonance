// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/StaticMeshComponent.h"
#include "Components/SceneComponent.h"
#include "Obstacle.generated.h"

UCLASS()
class DISSONANCE_API AObstacle : public AActor
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	USceneComponent* ObstacleRoot;

	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* ObstacleMesh;

	float ObstacleSpeed;
	
	float XDespawnPoint;

	float Lifetime = 4.0f;

public:	

	AObstacle();
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	void SetDespawnLocation(FVector DespawnLocation);

};
