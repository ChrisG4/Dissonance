// Fill out your copyright notice in the Description page of Project Settings.
#include "HazardBox.h"

#include "PlayerCharacter.h"

UHazardBox::UHazardBox()
{
	PrimaryComponentTick.bCanEverTick = true;
	OnComponentBeginOverlap.AddDynamic(this, &UHazardBox::OnOverlapBegin);
}

void UHazardBox::BeginPlay()
{

}

void UHazardBox::OnOverlapBegin(class UPrimitiveComponent* OverlappedComp, class AActor* OtherActor, class UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	if (OverlappedComp && Cast<APlayerCharacter>(OtherActor))
	{
		Cast<APlayerCharacter>(OtherActor)->GameOver();
	}
}
