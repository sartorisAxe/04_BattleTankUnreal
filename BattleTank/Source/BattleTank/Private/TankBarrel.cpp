// Fill out your copyright notice in the Description page of Project Settings.

#include "BattleTank.h"
#include "TankBarrel.h"

void UTankBarrel::Elevate(float DegreesPerSecond)
{
	//move the barrel the right direction this frame

	//given a max elevation speed, and frame time

	UE_LOG(LogTemp, Warning, TEXT("Barrel->Elevate() called at speed %f"), DegreesPerSecond);

}



