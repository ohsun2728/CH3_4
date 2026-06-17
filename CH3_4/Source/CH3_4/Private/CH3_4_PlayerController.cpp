#include "CH3_4_PlayerController.h"
#include "EnhancedInputSubsystems.h"
#include "InputMappingContext.h"
#include "InputAction.h"
#include "UObject/ConstructorHelpers.h"

ACH3_4_PlayerController::ACH3_4_PlayerController()
{
	static ConstructorHelpers::FObjectFinder<UInputMappingContext> IMC_Asset(TEXT("/Game/Inputs/IMC_Player.IMC_Player"));
	if (IMC_Asset.Succeeded())
	{
		InputMappingContext = IMC_Asset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> IA_Move_Asset(TEXT("/Game/Inputs/IA_Move.IA_Move"));
	if (IA_Move_Asset.Succeeded())
	{
		MoveAction = IA_Move_Asset.Object;
	}

	static ConstructorHelpers::FObjectFinder<UInputAction> IA_Look_Asset(TEXT("/Game/Inputs/IA_Look.IA_Look"));
	if (IA_Look_Asset.Succeeded())
	{
		LookAction = IA_Look_Asset.Object;
	}
}

void ACH3_4_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem
			= LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}
