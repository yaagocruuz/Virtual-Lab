// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef VIRTUALAB_PlayEffect_generated_h
#error "PlayEffect.generated.h already included, missing '#pragma once' in PlayEffect.h"
#endif
#define VIRTUALAB_PlayEffect_generated_h

#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_RPC_WRAPPERS
#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayEffect(); \
	friend struct Z_Construct_UClass_UPlayEffect_Statics; \
public: \
	DECLARE_CLASS(UPlayEffect, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtuaLab"), NO_API) \
	DECLARE_SERIALIZER(UPlayEffect)


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_INCLASS \
private: \
	static void StaticRegisterNativesUPlayEffect(); \
	friend struct Z_Construct_UClass_UPlayEffect_Statics; \
public: \
	DECLARE_CLASS(UPlayEffect, UActorComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/VirtuaLab"), NO_API) \
	DECLARE_SERIALIZER(UPlayEffect)


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayEffect(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayEffect) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayEffect); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayEffect(UPlayEffect&&); \
	NO_API UPlayEffect(const UPlayEffect&); \
public:


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayEffect(UPlayEffect&&); \
	NO_API UPlayEffect(const UPlayEffect&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayEffect); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayEffect); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UPlayEffect)


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PressurePlate() { return STRUCT_OFFSET(UPlayEffect, PressurePlate); } \
	FORCEINLINE static uint32 __PPO__Mixture() { return STRUCT_OFFSET(UPlayEffect, Mixture); } \
	FORCEINLINE static uint32 __PPO__isSmoke() { return STRUCT_OFFSET(UPlayEffect, isSmoke); } \
	FORCEINLINE static uint32 __PPO__isColorChange() { return STRUCT_OFFSET(UPlayEffect, isColorChange); } \
	FORCEINLINE static uint32 __PPO__isFire() { return STRUCT_OFFSET(UPlayEffect, isFire); }


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_11_PROLOG
#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_PRIVATE_PROPERTY_OFFSET \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_RPC_WRAPPERS \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_INCLASS \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_PRIVATE_PROPERTY_OFFSET \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_INCLASS_NO_PURE_DECLS \
	VirtuaLab_Source_VirtuaLab_PlayEffect_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> VIRTUALAB_API UClass* StaticClass<class UPlayEffect>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID VirtuaLab_Source_VirtuaLab_PlayEffect_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
