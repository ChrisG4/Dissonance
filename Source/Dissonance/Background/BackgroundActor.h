// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Actor.h"
#include "Components/SceneComponent.h"
#include "PaperSpriteComponent.h"
#include "BackgroundActor.generated.h"

UCLASS()
class DISSONANCE_API ABackgroundActor : public AActor
{
	GENERATED_BODY()
	
public:	
	// Sets default values for this actor's properties
	ABackgroundActor();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditDefaultsOnly)
		USceneComponent* ActorRoot;

	UPROPERTY(EditDefaultsOnly)
		UPaperSpriteComponent* ActorSprite;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

};
