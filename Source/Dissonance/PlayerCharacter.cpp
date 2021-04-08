// Fill out your copyright notice in the Description page of Project Settings.
#define print(text) if(GEngine)GEngine->AddOnScreenDebugMessage(-1, 1.0f, FColor::Green, text);

#include "PlayerCharacter.h"
#include "GameFramework/CharacterMovementComponent.h"

// Sets default values
APlayerCharacter::APlayerCharacter()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void APlayerCharacter::BeginPlay()
{
	Super::BeginPlay();

	this->XPosition = this->GetActorLocation().X;
	
}

// Called every frame
void APlayerCharacter::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

	if (GetActorLocation().X != XPosition)
	{
		SetActorLocation(FVector(XPosition, GetActorLocation().Y, GetActorLocation().Z));
	}
}

// Called to bind functionality to input
void APlayerCharacter::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);
}

void APlayerCharacter::StartJump()
{
	this->bPressedJump = true;
}

void APlayerCharacter::StopJump()
{
	this->bPressedJump = false;
}

void APlayerCharacter::GameOver()
{
	print("Game Over");
}