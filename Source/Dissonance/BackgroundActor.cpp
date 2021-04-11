// Fill out your copyright notice in the Description page of Project Settings.


#include "BackgroundActor.h"

// Sets default values
ABackgroundActor::ABackgroundActor()
{
 	// Set this actor to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

	ActorRoot = CreateDefaultSubobject<USceneComponent>(TEXT("Actor Root"));
	SetRootComponent(ActorRoot);

	ActorSprite = CreateDefaultSubobject<UPaperSpriteComponent>(TEXT("Actor Sprite"));
	ActorSprite->SetupAttachment(ActorRoot);

}

// Called when the game starts or when spawned
void ABackgroundActor::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void ABackgroundActor::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

