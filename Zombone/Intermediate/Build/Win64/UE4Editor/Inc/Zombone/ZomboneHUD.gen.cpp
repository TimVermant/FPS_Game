// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zombone/ZomboneHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZomboneHUD() {}
// Cross Module References
	ZOMBONE_API UClass* Z_Construct_UClass_AZomboneHUD_NoRegister();
	ZOMBONE_API UClass* Z_Construct_UClass_AZomboneHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_Zombone();
// End Cross Module References
	void AZomboneHUD::StaticRegisterNativesAZomboneHUD()
	{
	}
	UClass* Z_Construct_UClass_AZomboneHUD_NoRegister()
	{
		return AZomboneHUD::StaticClass();
	}
	struct Z_Construct_UClass_AZomboneHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZomboneHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_Zombone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZomboneHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "ZomboneHUD.h" },
		{ "ModuleRelativePath", "ZomboneHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZomboneHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZomboneHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZomboneHUD_Statics::ClassParams = {
		&AZomboneHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AZomboneHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZomboneHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZomboneHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZomboneHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZomboneHUD, 1247186677);
	template<> ZOMBONE_API UClass* StaticClass<AZomboneHUD>()
	{
		return AZomboneHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZomboneHUD(Z_Construct_UClass_AZomboneHUD, &AZomboneHUD::StaticClass, TEXT("/Script/Zombone"), TEXT("AZomboneHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZomboneHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
