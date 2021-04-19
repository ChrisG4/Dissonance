// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "PlayerCharacter.h"
#include "PlayerPawn.generated.h"

UCLASS()
class DISSONANCE_API APlayerPawn : public APawn
{
	GENERATED_BODY()

public:
	// Sets default values for this pawn's properties
	APlayerPawn();

protected:
	// Called when the game starts or when spawned
	virtual void BeginPlay() override;

	UPROPERTY(EditAnywhere, Category = "Characters")
	APlayerCharacter* BottomCharacter;

	UPROPERTY(EditAnywhere, Category = "Characters")
	APlayerCharacter* TopCharacter;

public:	
	// Called every frame
	virtual void Tick(float DeltaTime) override;

	// Called to bind functionality to input
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

	void TopStartJump();
	void TopStopJump();
	void BottomStartJump();
	void BottomStopJump();

};
