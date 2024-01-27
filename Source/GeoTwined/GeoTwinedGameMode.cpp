// Copyright Epic Games, Inc. All Rights Reserved.

#include "GeoTwinedGameMode.h"
#include "GeoTwinedCharacter.h"
#include "UObject/ConstructorHelpers.h"

AGeoTwinedGameMode::AGeoTwinedGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
