// Fill out your copyright notice in the Description page of Project Settings.
#include "PlayerSquare.h"

const int JumpHeight = 100;

// Sets default values
APlayerSquare::APlayerSquare()
{
 	// Set this pawn to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerSquare::BeginPlay()
{
	Super::BeginPlay();

}

// Called every frame
void APlayerSquare::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	
}

// Called to bind functionality to input
void APlayerSquare::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	PlayerInputComponent->BindAction("PlayerJump", IE_Pressed, this, &APlayerSquare::PlayerJump);
}

void APlayerSquare::PlayerJump()
{
	if (bIsJumping == false) 
	{
		CurrentVelocity = Gravity * JumpTime;
		bIsJumping = true;
	}
}
