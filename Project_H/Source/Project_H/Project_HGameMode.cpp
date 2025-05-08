// Copyright Epic Games, Inc. All Rights Reserved.

#include "Project_HGameMode.h"
#include "Project_HCharacter.h"
#include "UObject/ConstructorHelpers.h"

AProject_HGameMode::AProject_HGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
