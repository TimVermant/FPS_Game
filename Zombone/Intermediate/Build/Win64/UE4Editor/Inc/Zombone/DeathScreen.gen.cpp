// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zombone/DeathScreen.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDeathScreen() {}
// Cross Module References
	ZOMBONE_API UClass* Z_Construct_UClass_UDeathScreen_NoRegister();
	ZOMBONE_API UClass* Z_Construct_UClass_UDeathScreen();
	UMG_API UClass* Z_Construct_UClass_UUserWidget();
	UPackage* Z_Construct_UPackage__Script_Zombone();
// End Cross Module References
	void UDeathScreen::StaticRegisterNativesUDeathScreen()
	{
	}
	UClass* Z_Construct_UClass_UDeathScreen_NoRegister()
	{
		return UDeathScreen::StaticClass();
	}
	struct Z_Construct_UClass_UDeathScreen_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UDeathScreen_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UUserWidget,
		(UObject* (*)())Z_Construct_UPackage__Script_Zombone,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "DeathScreen.h" },
		{ "ModuleRelativePath", "DeathScreen.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UDeathScreen_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDeathScreen>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UDeathScreen_Statics::ClassParams = {
		&UDeathScreen::StaticClass,
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
		0x00B010A0u,
		METADATA_PARAMS(Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UDeathScreen_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UDeathScreen()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UDeathScreen_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UDeathScreen, 3846143643);
	template<> ZOMBONE_API UClass* StaticClass<UDeathScreen>()
	{
		return UDeathScreen::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UDeathScreen(Z_Construct_UClass_UDeathScreen, &UDeathScreen::StaticClass, TEXT("/Script/Zombone"), TEXT("UDeathScreen"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UDeathScreen);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
