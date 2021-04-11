// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "BackgroundActor.h"
#include "PurpleStar.generated.h"

/**
 * 
 */
UCLASS()
class DISSONANCE_API APurpleStar : public ABackgroundActor
{
	GENERATED_BODY()

protected:
	void BeginPlay() override;


	UPROPERTY(EditDefaultsOnly)
		float RotateSpeed;

	bool bIsPulsing = false;
	bool bIsSpinning = true;

	bool bIsGrowing;
	bool bIsRotatingAnticlockwise;

public:

	void Tick(float DeltaTime) override;
	
	void Pulse(float DeltaTime);
	void Spin(float DeltaTime);
};
