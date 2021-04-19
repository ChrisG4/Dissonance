// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/SphereComponent.h"
#include "HazardSphere.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DISSONANCE_API UHazardSphere : public USphereComponent
{
	GENERATED_BODY()
	
public:
	UHazardSphere();

	void BeginPlay() override;

	UFUNCTION()
		void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
