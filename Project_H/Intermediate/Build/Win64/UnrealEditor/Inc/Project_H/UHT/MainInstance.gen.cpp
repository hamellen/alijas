// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Project_H/Util/MainInstance.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMainInstance() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_UGameInstance();
PROJECT_H_API UClass* Z_Construct_UClass_UMainInstance();
PROJECT_H_API UClass* Z_Construct_UClass_UMainInstance_NoRegister();
UPackage* Z_Construct_UPackage__Script_Project_H();
// End Cross Module References

// Begin Class UMainInstance
void UMainInstance::StaticRegisterNativesUMainInstance()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UMainInstance);
UClass* Z_Construct_UClass_UMainInstance_NoRegister()
{
	return UMainInstance::StaticClass();
}
struct Z_Construct_UClass_UMainInstance_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
#if !UE_BUILD_SHIPPING
		{ "Comment", "/**\n * \n */" },
#endif
		{ "IncludePath", "Util/MainInstance.h" },
		{ "ModuleRelativePath", "Util/MainInstance.h" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UMainInstance>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_UMainInstance_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_UGameInstance,
	(UObject* (*)())Z_Construct_UPackage__Script_Project_H,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_UMainInstance_Statics::ClassParams = {
	&UMainInstance::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UMainInstance_Statics::Class_MetaDataParams), Z_Construct_UClass_UMainInstance_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_UMainInstance()
{
	if (!Z_Registration_Info_UClass_UMainInstance.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UMainInstance.OuterSingleton, Z_Construct_UClass_UMainInstance_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_UMainInstance.OuterSingleton;
}
template<> PROJECT_H_API UClass* StaticClass<UMainInstance>()
{
	return UMainInstance::StaticClass();
}
UMainInstance::UMainInstance(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
DEFINE_VTABLE_PTR_HELPER_CTOR(UMainInstance);
UMainInstance::~UMainInstance() {}
// End Class UMainInstance

// Begin Registration
struct Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Util_MainInstance_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UMainInstance, UMainInstance::StaticClass, TEXT("UMainInstance"), &Z_Registration_Info_UClass_UMainInstance, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UMainInstance), 1256121704U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Util_MainInstance_h_109572743(TEXT("/Script/Project_H"),
	Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Util_MainInstance_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Project_H_Source_Project_H_Util_MainInstance_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
