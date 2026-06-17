#pragma once

#include "CoreMinimal.h"
#include "GameFramework/PlayerController.h"
#include "CH3_4_PlayerController.generated.h"

class UInputMappingContext;
class UInputAction;

UCLASS()
class CH3_4_API ACH3_4_PlayerController : public APlayerController
{
	GENERATED_BODY()
	
public:
	ACH3_4_PlayerController();

	// 에디터에서 세팅할 IMC
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputMappingContext* InputMappingContext;

	// IA_Move를 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* MoveAction;

	// IA_Look을 지정할 변수
	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Input")
	UInputAction* LookAction;

	virtual void BeginPlay() override;
};
