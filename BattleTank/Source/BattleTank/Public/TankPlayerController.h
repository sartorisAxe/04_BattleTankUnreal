// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "GameFramework/PlayerController.h"
#include "TankPlayerController.generated.h" //must be the last include

class ATank;
/**
 * 
 */
UCLASS()
class BATTLETANK_API ATankPlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ATank* GetControlledTank() const;	

	virtual void BeginPlay() override;

	virtual void Tick(float DeltaTime) override;

	/*Start the tank moving the barrel so that a shot would hit 
	where the crosshair intersects the world*/
	void AimTowardsCrosshair();

	//Return an OUT parameter. True if hit landscape
	bool GetSightRayHitLocation(FVector& OutHitLocation) const;

private:
	UPROPERTY(EditAnywhere)
	float CrosshairXLocation = .5f;

	UPROPERTY(EditAnywhere)
	float CrosshairYLocation = .3333f;

	UPROPERTY(EditAnywhere)
	float LineTraceRange = 1000000;

	bool GetLookDirection(FVector2D ScreenLocation, FVector& LookDirection) const;
	bool GetLookVectorHitLocation(FVector LookDirection, FVector& OutHitLocation) const;
};
