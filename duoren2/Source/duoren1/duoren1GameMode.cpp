// Copyright Epic Games, Inc. All Rights Reserved.

#include "duoren1GameMode.h"
#include "duoren1Character.h"
#include "UObject/ConstructorHelpers.h"

Aduoren1GameMode::Aduoren1GameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPersonCPP/Blueprints/ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
