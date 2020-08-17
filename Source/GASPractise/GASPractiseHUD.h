// Copyright Epic Games, Inc. All Rights Reserved.

#pragma once 

#include "CoreMinimal.h"
#include "GameFramework/HUD.h"
#include "GASPractiseHUD.generated.h"

UCLASS()
class AGASPractiseHUD : public AHUD
{
	GENERATED_BODY()

public:
	AGASPractiseHUD();

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

