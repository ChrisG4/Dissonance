// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/BoxComponent.h"
#include "HazardBox.generated.h"

/**
 * 
 */
UCLASS(Blueprintable)
class DISSONANCE_API UHazardBox : public UBoxComponent
{
	GENERATED_BODY()
	
public:
	UHazardBox();

	void BeginPlay() override;

	UFUNCTION()
	void OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult);
};
