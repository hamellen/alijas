// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Util/MainInstance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_H_MainInstance_generated_h
#error "MainInstance.generated.h already included, missing '#pragma once' in MainInstance.h"
#endif
#define PROJECT_H_MainInstance_generated_h

#define FID_Project_H_Source_Project_H_Util_MainInstance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMainInstance(); \
	friend struct Z_Construct_UClass_UMainInstance_Statics; \
public: \
	DECLARE_CLASS(UMainInstance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_H"), NO_API) \
	DECLARE_SERIALIZER(UMainInstance)


#define FID_Project_H_Source_Project_H_Util_MainInstance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMainInstance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMainInstance(UMainInstance&&); \
	UMainInstance(const UMainInstance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMainInstance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMainInstance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMainInstance) \
	NO_API virtual ~UMainInstance();


#define FID_Project_H_Source_Project_H_Util_MainInstance_h_12_PROLOG
#define FID_Project_H_Source_Project_H_Util_MainInstance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_H_Source_Project_H_Util_MainInstance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_H_Source_Project_H_Util_MainInstance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_H_API UClass* StaticClass<class UMainInstance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_H_Source_Project_H_Util_MainInstance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
