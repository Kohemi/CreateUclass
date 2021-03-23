// Copyright Epic Games, Inc. All Rights Reserved.


#include "CppTestGameModeBase.h"

void ACppTestGameModeBase::BeginPlay() 
{
	ACppTestGameModeBase * gm = Cast<ACppTestGameModeBase>(GetWorld()->GetAuthGameMode());
	
	if (gm)
	{
		// Create object
		UUserProfile* newobject = NewObject<UUserProfile>((UObject*)GetTransientPackage(),
			UUserProfile::StaticClass());
		// Destroy object
		if (newobject)
		{
			newobject->ConditionalBeginDestroy();
			newobject = nullptr;
		}
	}

}