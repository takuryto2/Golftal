// Copyright Epic Games, Inc. All Rights Reserved.

#include "Golftal_V2GameMode.h"
#include "Golftal_V2Character.h"
#include "UObject/ConstructorHelpers.h"

AGolftal_V2GameMode::AGolftal_V2GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/BP_FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

}
