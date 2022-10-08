// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zombone/ZomboneGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZomboneGameMode() {}
// Cross Module References
	ZOMBONE_API UClass* Z_Construct_UClass_AZomboneGameMode_NoRegister();
	ZOMBONE_API UClass* Z_Construct_UClass_AZomboneGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Zombone();
// End Cross Module References
	void AZomboneGameMode::StaticRegisterNativesAZomboneGameMode()
	{
	}
	UClass* Z_Construct_UClass_AZomboneGameMode_NoRegister()
	{
		return AZomboneGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AZomboneGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZomboneGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Zombone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZomboneGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZomboneGameMode.h" },
		{ "ModuleRelativePath", "ZomboneGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZomboneGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZomboneGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZomboneGameMode_Statics::ClassParams = {
		&AZomboneGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AZomboneGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZomboneGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZomboneGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZomboneGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZomboneGameMode, 3693049729);
	template<> ZOMBONE_API UClass* StaticClass<AZomboneGameMode>()
	{
		return AZomboneGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZomboneGameMode(Z_Construct_UClass_AZomboneGameMode, &AZomboneGameMode::StaticClass, TEXT("/Script/Zombone"), TEXT("AZomboneGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZomboneGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
