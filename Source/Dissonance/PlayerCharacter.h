// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Character.h"
#include "PlayerCharacter.generated.h"

UCLASS()
class DISSONANCE_API APlayerCharacter : public ACharacter
{
	GENERATED_BODY()

public:
	// Sets default values for this character's properties
	APlayerCharacter();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Jumping")
	float VerticalDeceleration = 0;

	UPROPERTY(EditAnywhere, Category = "Jumping")
	float VerticalVelocity = 0;

	float JumpHeight = 200;

	float CurrentVelocity;

	bool bIsJumping;

	float Timer = 0;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void StartJump();
	void StopJump();

};
