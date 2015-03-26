// Copyright 1998-2015 Epic Games, Inc. All Rights Reserved.
#pragma once 
#include "GameFramework/HUD.h"
#include "ProjectVR_v2HUD.generated.h"

UCLASS()
class AProjectVR_v2HUD : public AHUD
{
	GENERATED_BODY()

public:
	AProjectVR_v2HUD(const FObjectInitializer& ObjectInitializer);

	/** Primary draw call for the HUD */
	virtual void DrawHUD() override;

private:
	/** Crosshair asset pointer */
	class UTexture2D* CrosshairTex;

};

