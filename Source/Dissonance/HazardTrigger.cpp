// Fill out your copyright notice in the Description page of Project Settings.

#include "DrawDebugHelpers.h"

#include "HazardTrigger.h"
#include "PlayerCharacter.h"

AHazardTrigger::AHazardTrigger()
{
	PrimaryActorTick.bCanEverTick = true;
	OnActorBeginOverlap.AddDynamic(this, &AHazardTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AHazardTrigger::OnOverlapEnd);
}

void AHazardTrigger::BeginPlay()
{
	DrawDebugBox(GetWorld(), GetActorLocation(), GetComponentsBoundingBox().GetExtent(), FColor::Red, true, -1, 0, 5);

	PrimaryActorTick.bCanEverTick = true;
	OnActorBeginOverlap.AddDynamic(this, &AHazardTrigger::OnOverlapBegin);
	OnActorEndOverlap.AddDynamic(this, &AHazardTrigger::OnOverlapEnd);
}

void AHazardTrigger::OnOverlapBegin(class AActor* OverlappedActor, class AActor* OtherActor)
{
	if (OverlappedActor && Cast<APlayerCharacter>(OtherActor))
	{
		Cast<APlayerCharacter>(OtherActor)->GameOver();
	}
}

void AHazardTrigger::OnOverlapEnd(class AActor* OverlappedActor, class AActor* OtherActor)
{

}