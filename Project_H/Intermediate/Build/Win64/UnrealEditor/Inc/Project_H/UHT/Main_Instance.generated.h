// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Main_Instance.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef PROJECT_H_Main_Instance_generated_h
#error "Main_Instance.generated.h already included, missing '#pragma once' in Main_Instance.h"
#endif
#define PROJECT_H_Main_Instance_generated_h

#define FID_Project_H_Source_Project_H_Main_Instance_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUMain_Instance(); \
	friend struct Z_Construct_UClass_UMain_Instance_Statics; \
public: \
	DECLARE_CLASS(UMain_Instance, UGameInstance, COMPILED_IN_FLAGS(0 | CLASS_Transient), CASTCLASS_None, TEXT("/Script/Project_H"), NO_API) \
	DECLARE_SERIALIZER(UMain_Instance)


#define FID_Project_H_Source_Project_H_Main_Instance_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UMain_Instance(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UMain_Instance(UMain_Instance&&); \
	UMain_Instance(const UMain_Instance&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UMain_Instance); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UMain_Instance); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UMain_Instance) \
	NO_API virtual ~UMain_Instance();


#define FID_Project_H_Source_Project_H_Main_Instance_h_12_PROLOG
#define FID_Project_H_Source_Project_H_Main_Instance_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Project_H_Source_Project_H_Main_Instance_h_15_INCLASS_NO_PURE_DECLS \
	FID_Project_H_Source_Project_H_Main_Instance_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> PROJECT_H_API UClass* StaticClass<class UMain_Instance>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Project_H_Source_Project_H_Main_Instance_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
