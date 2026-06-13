// Copyright Epic Games, Inc. All Rights Reserved.


#include "TP_FastUnreal_1stPPlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "Engine/LocalPlayer.h"
#include "InputMappingContext.h"
#include "TP_FastUnreal_1stPCameraManager.h"
#include "Blueprint/UserWidget.h"
#include "TP_FastUnreal_1stP.h"
#include "Widgets/Input/SVirtualJoystick.h"

ATP_FastUnreal_1stPPlayerController::ATP_FastUnreal_1stPPlayerController()
{
	// set the player camera manager class
	PlayerCameraManagerClass = ATP_FastUnreal_1stPCameraManager::StaticClass();
}

void ATP_FastUnreal_1stPPlayerController::BeginPlay()
{
	Super::BeginPlay();

	
	// only spawn touch controls on local player controllers
	if (IsLocalPlayerController() && ShouldUseTouchControls())
	{
		// spawn the mobile controls widget
		MobileControlsWidget = CreateWidget<UUserWidget>(this, MobileControlsWidgetClass);

		if (MobileControlsWidget)
		{
			// add the controls to the player screen
			MobileControlsWidget->AddToPlayerScreen(0);

		} else {

			UE_LOG(LogTP_FastUnreal_1stP, Error, TEXT("Could not spawn mobile controls widget."));

		}

	}
}

void ATP_FastUnreal_1stPPlayerController::SetupInputComponent()
{
	Super::SetupInputComponent();

	// only add IMCs for local player controllers
	if (IsLocalPlayerController())
	{
		// Add Input Mapping Context
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
		{
			for (UInputMappingContext* CurrentContext : DefaultMappingContexts)
			{
				Subsystem->AddMappingContext(CurrentContext, 0);
			}

			// only add these IMCs if we're not using mobile touch input
			if (!ShouldUseTouchControls())
			{
				for (UInputMappingContext* CurrentContext : MobileExcludedMappingContexts)
				{
					Subsystem->AddMappingContext(CurrentContext, 0);
				}
			}
		}
	}
	
}

bool ATP_FastUnreal_1stPPlayerController::ShouldUseTouchControls() const
{
	// are we on a mobile platform? Should we force touch?
	return SVirtualJoystick::ShouldDisplayTouchInterface() || bForceTouchControls;
}
