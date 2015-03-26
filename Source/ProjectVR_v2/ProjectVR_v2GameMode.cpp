// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.

#include "ProjectVR_v2.h"
#include "ProjectVR_v2GameMode.h"
#include "ProjectVR_v2HUD.h"
#include "ProjectVR_v2Character.h"

AProjectVR_v2GameMode::AProjectVR_v2GameMode(const FObjectInitializer& ObjectInitializer)
	: Super(ObjectInitializer)
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnClassFinder(TEXT("/Game/FirstPerson/Blueprints/FirstPersonCharacter"));
	DefaultPawnClass = PlayerPawnClassFinder.Class;

	// use our custom HUD class
	HUDClass = AProjectVR_v2HUD::StaticClass();
}
