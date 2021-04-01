// Fill out your copyright notice in the Description page of Project Settings.


#include "PlayerPawn.h"

// Sets default values
APlayerPawn::APlayerPawn()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerPawn::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void APlayerPawn::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void APlayerPawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);


	PlayerInputComponent->BindAction("TopPlayerJump", IE_Pressed, this, &APlayerPawn::TopStartJump);
	PlayerInputComponent->BindAction("TopPlayerJump", IE_Released, this, &APlayerPawn::TopStopJump);
	PlayerInputComponent->BindAction("BottomPlayerJump", IE_Pressed, this, &APlayerPawn::BottomStartJump);
	PlayerInputComponent->BindAction("BottomPlayerJump", IE_Released, this, &APlayerPawn::BottomStopJump);

}

void APlayerPawn::TopStartJump()
{
	TopCharacter->StartJump();
}

void APlayerPawn::TopStopJump()
{
	TopCharacter->StopJump();
}

void APlayerPawn::BottomStartJump()
{
	BottomCharacter->StartJump();
}

void APlayerPawn::BottomStopJump()
{
	BottomCharacter->StopJump();
}
