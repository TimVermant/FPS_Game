// Copyright Epic Games, Inc. All Rights Reserved.

#include "ZomboneGameMode.h"
#include "ZomboneHUD.h"
#include "ZomboneCharacter.h"
#include "UObject/ConstructorHelpers.h"

AZomboneGameMode::AZomboneGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AZomboneHUD::StaticClass();
}
