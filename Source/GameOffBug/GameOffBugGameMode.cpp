// Copyright Epic Games, Inc. All Rights Reserved.

#include "GameOffBugGameMode.h"
#include "GameOffBugCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGameOffBugGameMode::AGameOffBugGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
