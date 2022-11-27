// Copyright Epic Games, Inc. All Rights Reserved.

#include "My_ProjectGameMode.h"
#include "My_ProjectHUD.h"
#include "My_ProjectCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMy_ProjectGameMode::AMy_ProjectGameMode()
	: Super()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPersonCPP/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AMy_ProjectHUD::StaticClass();
}
