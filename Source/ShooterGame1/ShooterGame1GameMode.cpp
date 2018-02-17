// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "ShooterGame1GameMode.h"
#include "ShooterGame1HUD.h"
#include "ShooterGame1Character.h"
#include "UObject/ConstructorHelpers.h"

AShooterGame1GameMode::AShooterGame1GameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AShooterGame1HUD::StaticClass();
}
