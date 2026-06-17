// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CH3_4_Player.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FInputActionValue;
#ifdef CH3_4_CH3_4_Player_generated_h
#error "CH3_4_Player.generated.h already included, missing '#pragma once' in CH3_4_Player.h"
#endif
#define CH3_4_CH3_4_Player_generated_h

#define FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execLook); \
	DECLARE_FUNCTION(execMove);


#define FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACH3_4_Player(); \
	friend struct Z_Construct_UClass_ACH3_4_Player_Statics; \
public: \
	DECLARE_CLASS(ACH3_4_Player, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CH3_4"), NO_API) \
	DECLARE_SERIALIZER(ACH3_4_Player)


#define FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACH3_4_Player(ACH3_4_Player&&); \
	ACH3_4_Player(const ACH3_4_Player&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACH3_4_Player); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACH3_4_Player); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACH3_4_Player) \
	NO_API virtual ~ACH3_4_Player();


#define FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_15_PROLOG
#define FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_INCLASS_NO_PURE_DECLS \
	FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h_18_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CH3_4_API UClass* StaticClass<class ACH3_4_Player>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_Player_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
