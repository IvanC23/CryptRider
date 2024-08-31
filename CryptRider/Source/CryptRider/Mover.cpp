// Fill out your copyright notice in the Description page of Project Settings.

#include "Mover.h"
#include "Math/UnrealMathUtility.h"

// Sets default values for this component's properties
UMover::UMover()
{
	// Set this component to be initialized when the game starts, and to be ticked every frame.  You can turn these features
	// off to improve performance if you don't need them.
	PrimaryComponentTick.bCanEverTick = true;

	// ...
}

// Called when the game starts
void UMover::BeginPlay()
{
	Super::BeginPlay();

	OriginalLocation = GetOwner()->GetActorLocation(); // Get the original location of the owner of this component

	// ...
}

// Called every frame
void UMover::TickComponent(float DeltaTime, ELevelTick TickType, FActorComponentTickFunction *ThisTickFunction)
{
	Super::TickComponent(DeltaTime, TickType, ThisTickFunction);

	FVector TargetLocation = OriginalLocation;

	if (ShouldMove)
	{
		TargetLocation += MoveOffset; // If the owner of this component should move, add the move offset to the target location
	}

	FVector CurrentLocation = GetOwner()->GetActorLocation();					  // Get the current location of the owner of this component
	float Speed = MoveOffset.Length() / MoveTime; // Calculate the speed based on the distance between the current location and the target location

	FVector NewLocation = FMath::VInterpConstantTo(CurrentLocation, TargetLocation, DeltaTime, Speed); // Interpolate the current location to the target location with a constant speed

	GetOwner()->SetActorLocation(NewLocation); // Set the new location of the owner of this component
											   // ...
}
