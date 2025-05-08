// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_H/Main_Instance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMain_Instance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROJECT_H_API UClass* Z_Construct_UClass_UMain_Instance();
PROJECT_H_API UClass* Z_Construct_UClass_UMain_Instance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_H();
// End Cross Module References

// Begin Class UMain_Instance
void UMain_Instance::StaticRegisterNativesUMain_Instance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMain_Instance);
UClass* Z_Construct_UClass_UMain_Instance_NoRegister()
{
	return UMain_Instance::StaticClass();
}
struct Z_Construct_UClass_UMain_Instance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Main_Instance.h" },
		{ "ModuleRelativePath", "Main_Instance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMain_Instance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMain_Instance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_H,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Instance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMain_Instance_Statics::ClassParams = {
	&UMain_Instance::StaticClass,
	nullptr,
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	nullptr,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	0,
	0,
	0x009000A8u,
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMain_Instance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMain_Instance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMain_Instance()
{
	if (!Z_Registration_Info_UClass_UMain_Instance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMain_Instance.OuterSingleton, Z_Construct_UClass_UMain_Instance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMain_Instance.OuterSingleton;
}
template<> PROJECT_H_API UClass* StaticClass<UMain_Instance>()
{
	return UMain_Instance::StaticClass();
}
UMain_Instance::UMain_Instance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMain_Instance);
UMain_Instance::~UMain_Instance() {}
// End Class UMain_Instance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Main_Instance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMain_Instance, UMain_Instance::StaticClass, TEXT("UMain_Instance"), &Z_Registration_Info_UClass_UMain_Instance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMain_Instance), 1777312804U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Main_Instance_h_3163466203(TEXT("/Script/Project_H"),
	Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Main_Instance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Main_Instance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
