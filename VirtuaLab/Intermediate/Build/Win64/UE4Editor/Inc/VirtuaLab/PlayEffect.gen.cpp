// Copyright 1998-2019 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "VirtuaLab/PlayEffect.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayEffect() {}
// Cross Module References
	VIRTUALAB_API UClass* Z_Construct_UClass_UPlayEffect_NoRegister();
	VIRTUALAB_API UClass* Z_Construct_UClass_UPlayEffect();
	ENGINE_API UClass* Z_Construct_UClass_UActorComponent();
	UPackage* Z_Construct_UPackage__Script_VirtuaLab();
	ENGINE_API UClass* Z_Construct_UClass_ATriggerVolume_NoRegister();
// End Cross Module References
	void UPlayEffect::StaticRegisterNativesUPlayEffect()
	{
	}
	UClass* Z_Construct_UClass_UPlayEffect_NoRegister()
	{
		return UPlayEffect::StaticClass();
	}
	struct Z_Construct_UClass_UPlayEffect_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isFire_MetaData[];
#endif
		static void NewProp_isFire_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isFire;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isColorChange_MetaData[];
#endif
		static void NewProp_isColorChange_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isColorChange;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_isSmoke_MetaData[];
#endif
		static void NewProp_isSmoke_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_isSmoke;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Mixture_MetaData[];
#endif
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_Mixture;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PressurePlate_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PressurePlate;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UPlayEffect_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UActorComponent,
		(UObject* (*)())Z_Construct_UPackage__Script_VirtuaLab,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::Class_MetaDataParams[] = {
		{ "BlueprintSpawnableComponent", "" },
		{ "ClassGroupNames", "Custom" },
		{ "IncludePath", "PlayEffect.h" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire_MetaData[] = {
		{ "Category", "PlayEffect" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
	void Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire_SetBit(void* Obj)
	{
		((UPlayEffect*)Obj)->isFire = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire = { "isFire", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayEffect), &Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange_MetaData[] = {
		{ "Category", "PlayEffect" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
	void Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange_SetBit(void* Obj)
	{
		((UPlayEffect*)Obj)->isColorChange = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange = { "isColorChange", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayEffect), &Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke_MetaData[] = {
		{ "Category", "PlayEffect" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
	void Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke_SetBit(void* Obj)
	{
		((UPlayEffect*)Obj)->isSmoke = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke = { "isSmoke", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UPlayEffect), &Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke_SetBit, METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::NewProp_Mixture_MetaData[] = {
		{ "Category", "PlayEffect" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UClass_UPlayEffect_Statics::NewProp_Mixture = { "Mixture", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayEffect, Mixture), METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::NewProp_Mixture_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::NewProp_Mixture_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UPlayEffect_Statics::NewProp_PressurePlate_MetaData[] = {
		{ "Category", "PlayEffect" },
		{ "ModuleRelativePath", "PlayEffect.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_UPlayEffect_Statics::NewProp_PressurePlate = { "PressurePlate", nullptr, (EPropertyFlags)0x0040000000000001, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UPlayEffect, PressurePlate), Z_Construct_UClass_ATriggerVolume_NoRegister, METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::NewProp_PressurePlate_MetaData, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::NewProp_PressurePlate_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UPlayEffect_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayEffect_Statics::NewProp_isFire,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayEffect_Statics::NewProp_isColorChange,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayEffect_Statics::NewProp_isSmoke,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayEffect_Statics::NewProp_Mixture,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UPlayEffect_Statics::NewProp_PressurePlate,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UPlayEffect_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UPlayEffect>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UPlayEffect_Statics::ClassParams = {
		&UPlayEffect::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UPlayEffect_Statics::PropPointers,
		nullptr,
		ARRAY_COUNT(DependentSingletons),
		0,
		ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::PropPointers),
		0,
		0x00B000A4u,
		METADATA_PARAMS(Z_Construct_UClass_UPlayEffect_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_UPlayEffect_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UPlayEffect()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UPlayEffect_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UPlayEffect, 899585254);
	template<> VIRTUALAB_API UClass* StaticClass<UPlayEffect>()
	{
		return UPlayEffect::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UPlayEffect(Z_Construct_UClass_UPlayEffect, &UPlayEffect::StaticClass, TEXT("/Script/VirtuaLab"), TEXT("UPlayEffect"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UPlayEffect);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
