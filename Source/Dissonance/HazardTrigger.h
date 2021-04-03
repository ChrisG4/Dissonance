// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Engine/TriggerBox.h"
#include "HazardTrigger.generated.h"

/**
 * 
 */
UCLASS()
class DISSONANCE_API AHazardTrigger : public ATriggerBox
{
	GENERATED_BODY()

public:
	AHazardTrigger();

	void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor);
	
	UFUNCTION()
	void OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor);
	
};
