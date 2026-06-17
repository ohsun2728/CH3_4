#include "CH3_4_Player.h"
#include "CH3_4_PlayerController.h"
#include "EnhancedInputComponent.h"
#include "Components/CapsuleComponent.h"
#include "Camera/CameraComponent.h"
#include "GameFramework/SpringArmComponent.h"

ACH3_4_Player::ACH3_4_Player()
{
	PrimaryActorTick.bCanEverTick = false;

	CapsuleComp = CreateDefaultSubobject<UCapsuleComponent>(TEXT("Capsule"));
	SetRootComponent(CapsuleComp);

	SkeletalMeshComp = CreateDefaultSubobject<USkeletalMeshComponent>(TEXT("SkeletalMesh"));
	SkeletalMeshComp->SetupAttachment(RootComponent);

	static ConstructorHelpers::FObjectFinder<USkeletalMesh>MeshAsset(TEXT("/Engine/EngineMeshes/SkeletalCube.SkeletalCube"));
	if (MeshAsset.Succeeded())
	{
		SkeletalMeshComp->SetSkeletalMesh(MeshAsset.Object);
	}

	SpringArmComp = CreateDefaultSubobject<USpringArmComponent>(TEXT("SpringArm"));
	SpringArmComp->SetupAttachment(RootComponent);
	SpringArmComp->TargetArmLength = 300.0f;
	SpringArmComp->bUsePawnControlRotation = false;
	
	CameraComp = CreateDefaultSubobject<UCameraComponent>(TEXT("Camera"));
	CameraComp->SetupAttachment(SpringArmComp, USpringArmComponent::SocketName);
	CameraComp->bUsePawnControlRotation = false;

	bUseControllerRotationYaw = false;
	bUseControllerRotationPitch = false;
	bUseControllerRotationRoll = false;
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

	// 입력 값 가져오기
	const FVector2D MoveInput = value.Get<FVector2D>();
	float DeltaTime = GetWorld()->GetDeltaSeconds();

	// 언리얼 로컬 좌표계에 맞춰 축 스왑
	// X(Forward) = MoveInput.Y (W/S)
	// Y(Right)   = MoveInput.X (A/D)
	FVector DeltaLocation = FVector(MoveInput.Y, MoveInput.X, 0.0f) * MoveSpeed * DeltaTime;

	AddActorLocalOffset(DeltaLocation, false);
}

void ACH3_4_Player::Look(const FInputActionValue& value)
{
	FVector2D LookInput = value.Get<FVector2D>();
	float DeltaTime = GetWorld()->GetDeltaSeconds();
	
	// 좌우 회전 (Yaw) 계산 및 적용
	float YawAmount = LookInput.X * RotationSpeed * DeltaTime;
	FRotator YawRotation = FRotator(0.0f, YawAmount, 0.0f);
	AddActorLocalRotation(YawRotation);

	// 상하 회전 (Pitch) 계산 및 적용
	float PitchAmount = -LookInput.Y * RotationSpeed * DeltaTime;
	FRotator PitchRotation = FRotator(PitchAmount, 0.0f, 0.0f);
	
	if (SpringArmComp)
	{
		SpringArmComp->AddLocalRotation(PitchRotation);
	}
}

void ACH3_4_Player::SetupPlayerInputComponent(UInputComponent* PlayerInputComponent)
{
	Super::SetupPlayerInputComponent(PlayerInputComponent);

	if (UEnhancedInputComponent* EnhancedInput = Cast<UEnhancedInputComponent>(PlayerInputComponent))
	{
		if (ACH3_4_PlayerController* PlayerController = Cast<ACH3_4_PlayerController>(GetController()))
		{
			if (PlayerController->MoveAction)
			{
				EnhancedInput->BindAction(PlayerController->MoveAction, ETriggerEvent::Triggered, this, &ACH3_4_Player::Move);
			}
			if (PlayerController->LookAction)
			{
				EnhancedInput->BindAction(PlayerController->LookAction, ETriggerEvent::Triggered, this, &ACH3_4_Player::Look);
			}
		}
	}
}
