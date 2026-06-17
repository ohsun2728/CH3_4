// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_4/Public/CH3_4_Player.h"
#include "EnhancedInput/Public/InputActionValue.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_4_Player() {}

// Begin Cross Module References
CH3_4_API UClass* Z_Construct_UClass_ACH3_4_Player();
CH3_4_API UClass* Z_Construct_UClass_ACH3_4_Player_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_APawn();
ENGINE_API UClass* Z_Construct_UClass_UCameraComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_UCapsuleComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USkeletalMeshComponent_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_USpringArmComponent_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputAction_NoRegister();
ENHANCEDINPUT_API UClass* Z_Construct_UClass_UInputMappingContext_NoRegister();
ENHANCEDINPUT_API UScriptStruct* Z_Construct_UScriptStruct_FInputActionValue();
UPackage* Z_Construct_UPackage__Script_CH3_4();
// End Cross Module References

// Begin Class ACH3_4_Player Function Look
struct Z_Construct_UFunction_ACH3_4_Player_Look_Statics
{
	struct CH3_4_Player_eventLook_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_4_Player_Look_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_4_Player_eventLook_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_4_Player_Look_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_4_Player_Look_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Look_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_4_Player_Look_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_4_Player, nullptr, "Look", nullptr, nullptr, Z_Construct_UFunction_ACH3_4_Player_Look_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Look_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_4_Player_Look_Statics::CH3_4_Player_eventLook_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Look_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_4_Player_Look_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_4_Player_Look_Statics::CH3_4_Player_eventLook_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_4_Player_Look()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_4_Player_Look_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_4_Player::execLook)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Look(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ACH3_4_Player Function Look

// Begin Class ACH3_4_Player Function Move
struct Z_Construct_UFunction_ACH3_4_Player_Move_Statics
{
	struct CH3_4_Player_eventMove_Parms
	{
		FInputActionValue value;
	};
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Move\xec\x99\x80 IA_Look\xec\x9d\x98 \xed\x95\xa8\xec\x88\x98 \xec\x9b\x90\xed\x98\x95\n// Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\x9c\xeb\x8b\xa4.\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move\xec\x99\x80 IA_Look\xec\x9d\x98 \xed\x95\xa8\xec\x88\x98 \xec\x9b\x90\xed\x98\x95\nEnhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x80 FInputActionValue\xeb\xa1\x9c \xec\xa0\x84\xeb\x8b\xac\xeb\x90\x9c\xeb\x8b\xa4." },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_value_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FStructPropertyParams NewProp_value;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static const UECodeGen_Private::FFunctionParams FuncParams;
};
const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_ACH3_4_Player_Move_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000008000182, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(CH3_4_Player_eventMove_Parms, value), Z_Construct_UScriptStruct_FInputActionValue, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_value_MetaData), NewProp_value_MetaData) }; // 494646648
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_ACH3_4_Player_Move_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_ACH3_4_Player_Move_Statics::NewProp_value,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Move_Statics::PropPointers) < 2048);
const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_ACH3_4_Player_Move_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_ACH3_4_Player, nullptr, "Move", nullptr, nullptr, Z_Construct_UFunction_ACH3_4_Player_Move_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Move_Statics::PropPointers), sizeof(Z_Construct_UFunction_ACH3_4_Player_Move_Statics::CH3_4_Player_eventMove_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00480401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_ACH3_4_Player_Move_Statics::Function_MetaDataParams), Z_Construct_UFunction_ACH3_4_Player_Move_Statics::Function_MetaDataParams) };
static_assert(sizeof(Z_Construct_UFunction_ACH3_4_Player_Move_Statics::CH3_4_Player_eventMove_Parms) < MAX_uint16);
UFunction* Z_Construct_UFunction_ACH3_4_Player_Move()
{
	static UFunction* ReturnFunction = nullptr;
	if (!ReturnFunction)
	{
		UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_ACH3_4_Player_Move_Statics::FuncParams);
	}
	return ReturnFunction;
}
DEFINE_FUNCTION(ACH3_4_Player::execMove)
{
	P_GET_STRUCT_REF(FInputActionValue,Z_Param_Out_value);
	P_FINISH;
	P_NATIVE_BEGIN;
	P_THIS->Move(Z_Param_Out_value);
	P_NATIVE_END;
}
// End Class ACH3_4_Player Function Move

// Begin Class ACH3_4_Player
void ACH3_4_Player::StaticRegisterNativesACH3_4_Player()
{
	UClass* Class = ACH3_4_Player::StaticClass();
	static const FNameNativePtrPair Funcs[] = {
		{ "Look", &ACH3_4_Player::execLook },
		{ "Move", &ACH3_4_Player::execMove },
	};
	FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_4_Player);
UClass* Z_Construct_UClass_ACH3_4_Player_NoRegister()
{
	return ACH3_4_Player::StaticClass();
}
struct Z_Construct_UClass_ACH3_4_Player_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "// Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9d\x84 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4\n" },
#endif
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "CH3_4_Player.h" },
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "Enhanced Input\xec\x97\x90\xec\x84\x9c \xec\x95\xa1\xec\x85\x98 \xea\xb0\x92\xec\x9d\x84 \xeb\xb0\x9b\xec\x9d\x84 \xeb\x95\x8c \xec\x82\xac\xec\x9a\xa9\xed\x95\x98\xeb\x8a\x94 \xea\xb5\xac\xec\xa1\xb0\xec\xb2\xb4" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CapsuleComp_MetaData[] = {
		{ "Category", "CapsuleComp" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xba\xa1\xec\x8a\x90 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xba\xa1\xec\x8a\x90 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SkeletalMeshComp_MetaData[] = {
		{ "Category", "SkeletalMesh" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xec\xbc\x88\xeb\xa0\x88\xed\x83\x88 \xeb\xa9\x94\xec\x89\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xec\xbc\x88\xeb\xa0\x88\xed\x83\x88 \xeb\xa9\x94\xec\x89\xac \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_SpringArmComp_MetaData[] = {
		{ "Category", "Camara" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x8a\xa4\xed\x94\x84\xeb\xa7\x81 \xec\x95\x94 \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_CameraComp_MetaData[] = {
		{ "Category", "Camera" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8\n" },
#endif
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xec\xbb\xb4\xed\x8f\xac\xeb\x84\x8c\xed\x8a\xb8" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveSpeed_MetaData[] = {
		{ "Category", "Movement" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\x9d\xb4\xeb\x8f\x99 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_InputMappingContext_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IMC\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IMC" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_MoveAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Move\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Move" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_LookAction_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// IA_Look\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "IA_Look" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_RotationSpeed_MetaData[] = {
		{ "Category", "Input" },
#if !UE_BUILD_SHIPPING
		{ "Comment", "// \xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84\n" },
#endif
		{ "ModuleRelativePath", "Public/CH3_4_Player.h" },
#if !UE_BUILD_SHIPPING
		{ "ToolTip", "\xec\xb9\xb4\xeb\xa9\x94\xeb\x9d\xbc \xed\x9a\x8c\xec\xa0\x84 \xec\x86\x8d\xeb\x8f\x84" },
#endif
	};
#endif // WITH_METADATA
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CapsuleComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SkeletalMeshComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_SpringArmComp;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_CameraComp;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_MoveSpeed;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_InputMappingContext;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_MoveAction;
	static const UECodeGen_Private::FObjectPropertyParams NewProp_LookAction;
	static const UECodeGen_Private::FFloatPropertyParams NewProp_RotationSpeed;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
	static UObject* (*const DependentSingletons[])();
	static constexpr FClassFunctionLinkInfo FuncInfo[] = {
		{ &Z_Construct_UFunction_ACH3_4_Player_Look, "Look" }, // 1117254251
		{ &Z_Construct_UFunction_ACH3_4_Player_Move, "Move" }, // 478107558
	};
	static_assert(UE_ARRAY_COUNT(FuncInfo) < 2048);
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_4_Player>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_CapsuleComp = { "CapsuleComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, CapsuleComp), Z_Construct_UClass_UCapsuleComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CapsuleComp_MetaData), NewProp_CapsuleComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_SkeletalMeshComp = { "SkeletalMeshComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, SkeletalMeshComp), Z_Construct_UClass_USkeletalMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SkeletalMeshComp_MetaData), NewProp_SkeletalMeshComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_SpringArmComp = { "SpringArmComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, SpringArmComp), Z_Construct_UClass_USpringArmComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_SpringArmComp_MetaData), NewProp_SpringArmComp_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_CameraComp = { "CameraComp", nullptr, (EPropertyFlags)0x00200800000a001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, CameraComp), Z_Construct_UClass_UCameraComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_CameraComp_MetaData), NewProp_CameraComp_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_MoveSpeed = { "MoveSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, MoveSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveSpeed_MetaData), NewProp_MoveSpeed_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_InputMappingContext = { "InputMappingContext", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, InputMappingContext), Z_Construct_UClass_UInputMappingContext_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_InputMappingContext_MetaData), NewProp_InputMappingContext_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_MoveAction = { "MoveAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, MoveAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_MoveAction_MetaData), NewProp_MoveAction_MetaData) };
const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_LookAction = { "LookAction", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, LookAction), Z_Construct_UClass_UInputAction_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_LookAction_MetaData), NewProp_LookAction_MetaData) };
const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_RotationSpeed = { "RotationSpeed", nullptr, (EPropertyFlags)0x0020080000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(ACH3_4_Player, RotationSpeed), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_RotationSpeed_MetaData), NewProp_RotationSpeed_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ACH3_4_Player_Statics::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_CapsuleComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_SkeletalMeshComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_SpringArmComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_CameraComp,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_MoveSpeed,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_InputMappingContext,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_MoveAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_LookAction,
	(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ACH3_4_Player_Statics::NewProp_RotationSpeed,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_Player_Statics::PropPointers) < 2048);
UObject* (*const Z_Construct_UClass_ACH3_4_Player_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_APawn,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_Player_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_4_Player_Statics::ClassParams = {
	&ACH3_4_Player::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	FuncInfo,
	Z_Construct_UClass_ACH3_4_Player_Statics::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	UE_ARRAY_COUNT(FuncInfo),
	UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_Player_Statics::PropPointers),
	0,
	0x009000A4u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_Player_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_4_Player_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_4_Player()
{
	if (!Z_Registration_Info_UClass_ACH3_4_Player.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_4_Player.OuterSingleton, Z_Construct_UClass_ACH3_4_Player_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_4_Player.OuterSingleton;
}
template<> CH3_4_API UClass* StaticClass<ACH3_4_Player>()
{
	return ACH3_4_Player::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_4_Player);
ACH3_4_Player::~ACH3_4_Player() {}
// End Class ACH3_4_Player

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_4_Player, ACH3_4_Player::StaticClass, TEXT("ACH3_4_Player"), &Z_Registration_Info_UClass_ACH3_4_Player, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_4_Player), 365552206U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_3103959708(TEXT("/Script/CH3_4"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
