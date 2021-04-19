// Fill out your copyright notice in the Description page of Project Settings.


#include "PurpleStar.h"

void APurpleStar::BeginPlay()
{
	Super::BeginPlay();
	
	bIsPulsing = FMath::RandBool();;

	if (bIsPulsing)
	{
		SetActorScale3D(FVector(1, 1, 1) * FMath::RandRange(0, 3.0));
	}

	if (bIsSpinning)
	{
		SetActorRotation(FRotator(1, 0, 0) * FMath::RandRange(0, 360));
	}

	bIsRotatingAnticlockwise = FMath::RandBool();
	if (!bIsRotatingAnticlockwise)
	{
		RotateSpeed = -RotateSpeed;
	}

}

void APurpleStar::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	
	if (bIsPulsing)
	{
		Pulse(DeltaTime);
	}
	
	if (bIsSpinning)
	{
		Spin(DeltaTime);
	}

}

void APurpleStar::Pulse(float DeltaTime)
{
	if (GetActorScale().X <= 1.0)
	{
		bIsGrowing = true;
	}
	else if(GetActorScale().X >= 3.0f)
	{
		bIsGrowing = false;
	}

	if(bIsGrowing)
	{
		SetActorScale3D(GetActorScale() + (DeltaTime * FVector(1, 1, 1)));
	}
	else
	{
		SetActorScale3D(GetActorScale() - (DeltaTime * FVector(1, 1, 1)));
	}
}

void APurpleStar::Spin(float DeltaTime)
{
	FQuat QuatRotation = FRotator(RotateSpeed * DeltaTime, 0, 0).Quaternion();

	AddActorLocalRotation(QuatRotation, false, 0, ETeleportType::None);
}