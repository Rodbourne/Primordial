// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.

#include "PrimordialGameMode.h"
#include "PrimordialPlayerController.h"
#include "PrimordialCharacter.h"
#include "UObject/ConstructorHelpers.h"

APrimordialGameMode::APrimordialGameMode()
{
	// use our custom PlayerController class
	PlayerControllerClass = APrimordialPlayerController::StaticClass();

	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/TopDownCPP/Blueprints/TopDownCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}