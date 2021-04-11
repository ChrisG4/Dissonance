// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "Components/StaticMeshComponent.h"
#include "PaperSpriteComponent.h"
#include "PaperSpriteComponent.h"
#include "GameFramework/Pawn.h"
#include "PlayerSquare.generated.h"

UCLASS()
class DISSONANCE_API APlayerSquare : public APawn
{
	GENERATED_BODY()

protected:
	// Called when the game starts or when spawned
	UPROPERTY(EditDefaultsOnly)
	UStaticMeshComponent* PlayerBody;

	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere)
	float Gravity;

	UPROPERTY(EditAnywhere)
	float JumpHeight;

	//How long it take to reach the jump height
	UPROPERTY(EditAnywhere)
	float JumpTime;

	UPROPERTY(EditAnywhere)
	float JumpVelocity;

	float CurrentVelocity = 0;

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Jumping")
	bool bIsJumping = false;

	UPROPERTY(VisibleAnywhere)
	float JumpTimer = 0;

	UPaperSpriteComponent* SpriteTest;

public:
	APlayerSquare();

	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void PlayerJump();

};
