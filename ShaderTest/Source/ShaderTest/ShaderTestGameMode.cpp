// Copyright Epic Games, Inc. All Rights Reserved.

#include "ShaderTestGameMode.h"
#include "ShaderTestCharacter.h"
#include "UObject/ConstructorHelpers.h"

AShaderTestGameMode::AShaderTestGameMode()
{
	// set default pawn class to our Blueprinted character
	static ConstructorHelpers::FClassFinder<APawn> PlayerPawnBPClass(TEXT("/Game/ThirdPerson/Blueprints/BP_ThirdPersonCharacter"));
	if (PlayerPawnBPClass.Class != NULL)
	{
		DefaultPawnClass = PlayerPawnBPClass.Class;
	}
}
