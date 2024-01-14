// Fill out your copyright notice in the Description page of Project Settings.


#include "VehiclePawn.h"
#include "Components/SkeletalMeshComponent.h"
#include"GameFramework/SpringArmComponent.h"
#include"Camera/CameraComponent.h"
#include"Components/InputComponent.h"
#include "ChaosWheeledVehicleMovementComponent.h"
AVehiclePawn::AVehiclePawn()
{
	UChaosWheeledVehicleMovementComponent* VehicleMovement = CastChecked< UChaosWheeledVehicleMovementComponent>(GetVehicleMovement());

	VehicleMovement->MAXRPM = 0.0f;
}

void AVehiclePawn::Tick(float DeltaTIme)
{

}

void AVehiclePawn::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{

}

void AVehiclePawn::ApplyThrottle(float val)
{

}

void AVehiclePawn::ApplySerring(float val)
{

}

void AVehiclePawn::LookUp(float val)
{
}

void AVehiclePawn::Turn(float val)
{

}

void AVehiclePawn::OnHandbreakPressed()
{

}

void AVehiclePawn::OnHandBreakReleased()
{

}

void AVehiclePawn::UpdateInAirControl(float DeltaTime)
{

}
