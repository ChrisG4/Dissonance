// Fill out your copyright notice in the Description page of Project Settings.
#include "HazardSphere.h"

#include "..\Player&Input/PlayerCharacter.h"

UHazardSphere::UHazardSphere()
{
	PrimaryComponentTick.bCanEverTick = true;
	OnComponentBeginOverlap.AddDynamic(this, &UHazardSphere::OnOverlapBegin);
}

void UHazardSphere::BeginPlay()
{

}

void UHazardSphere::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp && Cast<APlayerCharacter>(OtherActor))
	{
		Cast<APlayerCharacter>(OtherActor)->GameOver();
	}
}