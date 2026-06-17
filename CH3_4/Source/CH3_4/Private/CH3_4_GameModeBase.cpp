
#include "CH3_4_GameModeBase.h"
#include "CH3_4_Player.h"
#include "CH3_4_PlayerController.h"

ACH3_4_GameModeBase::ACH3_4_GameModeBase()
{
	DefaultPawnClass = ACH3_4_Player::StaticClass();
	
	PlayerControllerClass = ACH3_4_PlayerController::StaticClass();
}