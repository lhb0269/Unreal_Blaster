// Fill out your copyright notice in the Description page of Project Settings.

#pragma once

#include "CoreMinimal.h"
#include "WheeledVehiclePawn.h"
#include "VehiclePawn.generated.h"

/**
 * 
 */
UCLASS()
class UNREALNETPROJECT_API AVehiclePawn : public AWheeledVehiclePawn
{
	GENERATED_BODY()
	
public:
	AVehiclePawn();

	virtual void Tick(float DeltaTIme)override;

	virtual void SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)override;

	void ApplyThrottle(float val);
	void ApplySerring(float val);

	void LookUp(float val);
	void Turn(float val);

	void OnHandbreakPressed();
	void OnHandBreakReleased();

	void UpdateInAirControl(float DeltaTime);

protected:
	UPROPERTY(Category = Camera,EditDefaultsOnly,BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UspringArmComponent* SpringArm;
	UPROPERTY(Category = Camera, EditDefaultsOnly, BlueprintReadOnly, meta = (AllowPrivateAccess = "true"))
	class UspringArmComponent* Camera;
};
