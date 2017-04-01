// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.

#include "Whoot.h"
#include "WhootGameMode.h"
#include "WhootHUD.h"
#include "WhootCharacter.h"

AWhootGameMode::AWhootGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AWhootHUD::StaticClass();
}
