// Copyright Epic Games, Inc. All Rights Reserved.

#include "GASPractiseGameMode.h"
#include "GASPractiseHUD.h"
#include "GASPractiseCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGASPractiseGameMode::AGASPractiseGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AGASPractiseHUD::StaticClass();
}
