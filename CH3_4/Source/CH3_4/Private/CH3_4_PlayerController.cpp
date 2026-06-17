
#include "CH3_4_PlayerController.h"

#include "EnhancedInputSubsystems.h"
// Enhanced Input System의 Local Player Subsystem을 사용하기 위해 포함

ACH3_4_PlayerController::ACH3_4_PlayerController()
	:InputMappingContext(nullptr),
	MoveAction(nullptr),
	LookAction(nullptr)
{
}

void ACH3_4_PlayerController::BeginPlay()
{
	Super::BeginPlay();

	// 현재 PlayerController에 연결된 Local Player 객체를 가져옴
	if (ULocalPlayer* LocalPlayer = GetLocalPlayer())
	{
		// Local Player에서 EnhancedInputLocalPlayerSubsystem을 획득
		if (UEnhancedInputLocalPlayerSubsystem* Subsystem
			= LocalPlayer->GetSubsystem<UEnhancedInputLocalPlayerSubsystem>())
		{
			if (InputMappingContext)
			{
				// Subsystem을 통해 할당한 IMC를 활성화
				// 우선순위는 0이 가장 높은 우선 순위
				Subsystem->AddMappingContext(InputMappingContext, 0);
			}
		}
	}
}