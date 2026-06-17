#include "CH3_4_Player.h"
#include "CH3_4_PlayerController.h"
#include "EnhancedInputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ACH3_4_Player::ACH3_4_Player()
{
	PrimaryActorTick.bCanEverTick = true;

	// 캡슐 컴포넌트 생성
	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	// 캡슐 컴포넌트를 루트 컴포넌트로 설정
	SetRootComponent(CapsuleComp);

	// 스켈레탈 메쉬 컴포넌트 생성
	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	// 스켈레탈 메쉬를 루트 컴포넌트에 부착
	SkeletalMeshComp->SetupAttachment(RootComponent);

	// 스프링 암 컴포넌트 생성
	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	// 스프링 암을 루트 컴포넌트(CapsuleComponent)에 부착
	SpringArmComp->SetupAttachment(RootComponent);
	// 캐릭터와 카메라 사이의 거리 기본값 300으로 설정
	SpringArmComp->TargetArmLength = 300.0f;
	// 컨트롤러 회전에 따라 스프링 암도 회전하도록 설정
	SpringArmComp->bUsePawnControlRotation = true;
	
	// 카메라 컴포넌트 생성
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	// 스프링 암의 끝 위치에 카메라 부착
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	// 카메라는 스프링 암의 회전을 따르므로 PawnControlRotation은 해제
	CameraComp->bUsePawnControlRotation = false;

}

void ACH3_4_Player::BeginPlay()
{
	Super::BeginPlay();
	

}

void ACH3_4_Player::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);

}

void ACH3_4_Player::Move(const FInputActionValue& value)
{
	if (!Controller) return;

	// 입력 값 가져오기 (Vector2D : X는 전후, Y는 좌우)
	const FVector2D MoveInput = value.Get<FVector2D>();
}