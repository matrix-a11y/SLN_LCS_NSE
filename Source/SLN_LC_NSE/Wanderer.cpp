// Fill out your copyright notice in the Description page of Project Settings.


#include "Wanderer.h"

// Sets default values
AWanderer::AWanderer()
{
 	// Set this character to call Tick() every frame.  You can turn this off to improve performance if you don't need it.
	PrimaryActorTick.bCanEverTick = true;

}

// Called when the game starts or when spawned
void AWanderer::BeginPlay()
{
	Super::BeginPlay();
	
}

// Called every frame
void AWanderer::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

// Called to bind functionality to input
void AWanderer::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

}

