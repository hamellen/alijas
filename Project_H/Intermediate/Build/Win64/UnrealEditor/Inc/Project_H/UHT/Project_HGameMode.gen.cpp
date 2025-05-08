// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_H/Project_HGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeProject_HGameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
PROJECT_H_API UClass* Z_Construct_UClass_AProject_HGameMode();
PROJECT_H_API UClass* Z_Construct_UClass_AProject_HGameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_H();
// End Cross Module References

// Begin Class AProject_HGameMode
void AProject_HGameMode::StaticRegisterNativesAProject_HGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AProject_HGameMode);
UClass* Z_Construct_UClass_AProject_HGameMode_NoRegister()
{
	return AProject_HGameMode::StaticClass();
}
struct Z_Construct_UClass_AProject_HGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Project_HGameMode.h" },
		{ "ModuleRelativePath", "Project_HGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AProject_HGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AProject_HGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_H,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_HGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AProject_HGameMode_Statics::ClassParams = {
	&AProject_HGameMode::StaticClass,
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
	0x008802ACu,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AProject_HGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AProject_HGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AProject_HGameMode()
{
	if (!Z_Registration_Info_UClass_AProject_HGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AProject_HGameMode.OuterSingleton, Z_Construct_UClass_AProject_HGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AProject_HGameMode.OuterSingleton;
}
template<> PROJECT_H_API UClass* StaticClass<AProject_HGameMode>()
{
	return AProject_HGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AProject_HGameMode);
AProject_HGameMode::~AProject_HGameMode() {}
// End Class AProject_HGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Project_HGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AProject_HGameMode, AProject_HGameMode::StaticClass, TEXT("AProject_HGameMode"), &Z_Registration_Info_UClass_AProject_HGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AProject_HGameMode), 2866767999U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Project_HGameMode_h_2387419674(TEXT("/Script/Project_H"),
	Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Project_HGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Project_HGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
