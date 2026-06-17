#pragma once

#include "CoreMinimal.h"
#include "GameFramework/Pawn.h"
#include "CH3_4_Player.generated.h"

class USpringArmComponent;      // 스프링 암 컴포넌트 전방 선언
class UCameraComponent; // 카메라 컴포넌트 전방 선언
class UCapsuleComponent; // 캡슐 컴포넌트 전방 선언
class USkeletalMeshComponent; // 스켈레탈 메쉬 컴포넌트 전방 선언
class UFloatingPawnMovement;

struct FInputActionValue;	// Enhanced Input에서 액션 값을 받을 때 사용하는 구조체

UCLASS()
class CH3_4_API ACH3_4_Player : public APawn
{
	GENERATED_BODY()

public:
	ACH3_4_Player();

protected:
	// 캡슐 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "CapsuleComp")
	UCapsuleComponent* CapsuleComp;

	// 스켈레탈 메쉬 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "SkeletalMesh")
	USkeletalMeshComponent* SkeletalMeshComp;

	// 스프링 암 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camara")
	USpringArmComponent* SpringArmComp;

	// 카메라 컴포넌트
	UPROPERTY(VisibleAnywhere, BlueprintReadOnly, Category = "Camera")
	UCameraComponent* CameraComp;

	virtual void BeginPlay() override;

	// IA_Move와 IA_Look의 함수 원형
	// Enhanced Input에서 액션 값은 FInputActionValue로 전달된다.
	UFUNCTION()
	void Move(const FInputActionValue& value);
	UFUNCTION()
	void Look(const FInputActionValue& value);

	UPROPERTY(EditAnywhere, BlueprintReadWrite, Category = "Movement")
	float MoveSpeed = 500.0f;
public:
	virtual void Tick(float DeltaTime) override;

	// 입력 바인딩을 처리할 함수
	virtual void SetupPlayerInputComponent(class UInputComponent* PlayerInputComponent) override;

};
