// Copyright Epic Games, Inc. All Rights Reserved.

#include "FlappyFlightCPPGameMode.h"
#include "FlappyFlightCPPCharacter.h"
#include "UObject/ConstructorHelpers.h"

AFlappyFlightCPPGameMode::AFlappyFlightCPPGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
