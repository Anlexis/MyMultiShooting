// Copyright Epic Games, Inc. All Rights Reserved.

#include "MyMultiShootingGameMode.h"
#include "MyMultiShootingCharacter.h"
#include "UObject/ConstructorHelpers.h"

AMyMultiShootingGameMode::AMyMultiShootingGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
