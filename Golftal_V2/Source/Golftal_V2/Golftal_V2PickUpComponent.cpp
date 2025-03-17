// Copyright Epic Games, Inc. All Rights Reserved.

#include "Golftal_V2PickUpComponent.h"

UGolftal_V2PickUpComponent::UGolftal_V2PickUpComponent()
{
	// Setup the Sphere Collision
	SphereRadius = 32.f;
}

void UGolftal_V2PickUpComponent::BeginPlay()
{
	Super::BeginPlay();

	// Register our Overlap Event
	OnComponentBeginOverlap.AddDynamic(this, &UGolftal_V2PickUpComponent::OnSphereBeginOverlap);
}

void UGolftal_V2PickUpComponent::OnSphereBeginOverlap(UPrimitiveComponent* OverlappedComponent, AActor* OtherActor, UPrimitiveComponent* OtherComp, int32 OtherBodyIndex, bool bFromSweep, const FHitResult& SweepResult)
{
	// Checking if it is a First Person Character overlapping
	AGolftal_V2Character* Character = Cast<AGolftal_V2Character>(OtherActor);
	if(Character != nullptr)
	{
		// Notify that the actor is being picked up
		OnPickUp.Broadcast(Character);

		// Unregister from the Overlap Event so it is no longer triggered
		OnComponentBeginOverlap.RemoveAll(this);
	}
}
