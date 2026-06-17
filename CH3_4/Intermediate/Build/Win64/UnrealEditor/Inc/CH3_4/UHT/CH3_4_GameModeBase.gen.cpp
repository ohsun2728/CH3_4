// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CH3_4/Public/CH3_4_GameModeBase.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCH3_4_GameModeBase() {}

// Begin Cross Module References
CH3_4_API UClass* Z_Construct_UClass_ACH3_4_GameModeBase();
CH3_4_API UClass* Z_Construct_UClass_ACH3_4_GameModeBase_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CH3_4();
// End Cross Module References

// Begin Class ACH3_4_GameModeBase
void ACH3_4_GameModeBase::StaticRegisterNativesACH3_4_GameModeBase()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACH3_4_GameModeBase);
UClass* Z_Construct_UClass_ACH3_4_GameModeBase_NoRegister()
{
	return ACH3_4_GameModeBase::StaticClass();
}
struct Z_Construct_UClass_ACH3_4_GameModeBase_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CH3_4_GameModeBase.h" },
		{ "ModuleRelativePath", "Public/CH3_4_GameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACH3_4_GameModeBase>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACH3_4_GameModeBase_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CH3_4,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_GameModeBase_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACH3_4_GameModeBase_Statics::ClassParams = {
	&ACH3_4_GameModeBase::StaticClass,
	"Game",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009002ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACH3_4_GameModeBase_Statics::Class_MetaDataParams), Z_Construct_UClass_ACH3_4_GameModeBase_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACH3_4_GameModeBase()
{
	if (!Z_Registration_Info_UClass_ACH3_4_GameModeBase.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACH3_4_GameModeBase.OuterSingleton, Z_Construct_UClass_ACH3_4_GameModeBase_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACH3_4_GameModeBase.OuterSingleton;
}
template<> CH3_4_API UClass* StaticClass<ACH3_4_GameModeBase>()
{
	return ACH3_4_GameModeBase::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACH3_4_GameModeBase);
ACH3_4_GameModeBase::~ACH3_4_GameModeBase() {}
// End Class ACH3_4_GameModeBase

// Begin Registration
struct Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_GameModeBase_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACH3_4_GameModeBase, ACH3_4_GameModeBase::StaticClass, TEXT("ACH3_4_GameModeBase"), &Z_Registration_Info_UClass_ACH3_4_GameModeBase, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACH3_4_GameModeBase), 3939357803U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_GameModeBase_h_2034773260(TEXT("/Script/CH3_4"),
	Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_GameModeBase_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Unreal_Project_CH3_4_CH3_4_Source_CH3_4_Public_CH3_4_GameModeBase_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
