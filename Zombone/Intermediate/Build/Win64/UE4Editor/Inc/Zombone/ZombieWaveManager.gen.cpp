// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Zombone/ZombieWaveManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeZombieWaveManager() {}
// Cross Module References
	ZOMBONE_API UClass* Z_Construct_UClass_AZombieWaveManager_NoRegister();
	ZOMBONE_API UClass* Z_Construct_UClass_AZombieWaveManager();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Zombone();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FRotator();
	ZOMBONE_API UClass* Z_Construct_UClass_AZombie_NoRegister();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FTimerHandle();
// End Cross Module References
	DEFINE_FUNCTION(AZombieWaveManager::execSpawnZombie)
	{
		P_GET_STRUCT_REF(FVector,Z_Param_Out_location);
		P_GET_STRUCT_REF(FRotator,Z_Param_Out_rotator);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->SpawnZombie(Z_Param_Out_location,Z_Param_Out_rotator);
		P_NATIVE_END;
	}
	void AZombieWaveManager::StaticRegisterNativesAZombieWaveManager()
	{
		UClass* Class = AZombieWaveManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "SpawnZombie", &AZombieWaveManager::execSpawnZombie },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics
	{
		struct ZombieWaveManager_eventSpawnZombie_Parms
		{
			FVector location;
			FRotator rotator;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_location_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_location;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_rotator_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_rotator;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_location_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_location = { "location", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieWaveManager_eventSpawnZombie_Parms, location), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_location_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_location_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_rotator_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_rotator = { "rotator", nullptr, (EPropertyFlags)0x0010000008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ZombieWaveManager_eventSpawnZombie_Parms, rotator), Z_Construct_UScriptStruct_FRotator, METADATA_PARAMS(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_rotator_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_rotator_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_location,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::NewProp_rotator,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AZombieWaveManager, nullptr, "SpawnZombie", nullptr, nullptr, sizeof(ZombieWaveManager_eventSpawnZombie_Parms), Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_AZombieWaveManager_SpawnZombie()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_AZombieWaveManager_SpawnZombie_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_AZombieWaveManager_NoRegister()
	{
		return AZombieWaveManager::StaticClass();
	}
	struct Z_Construct_UClass_AZombieWaveManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_m_ActiveZombieList_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_m_ActiveZombieList_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_m_ActiveZombieList;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorToSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ActorToSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveAmounts_MetaData[];
#endif
		static const UE4CodeGen_Private::FUnsizedIntPropertyParams NewProp_WaveAmounts;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_WaveTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_WaveTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AZombieWaveManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Zombone,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_AZombieWaveManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AZombieWaveManager_SpawnZombie, "SpawnZombie" }, // 2823219570
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieWaveManager_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "ZombieWaveManager.h" },
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList_Inner = { "m_ActiveZombieList", nullptr, (EPropertyFlags)0x0000000000020000, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UClass_AZombie_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList_MetaData[] = {
		{ "Category", "ZombieManager" },
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList = { "m_ActiveZombieList", nullptr, (EPropertyFlags)0x0040000000020001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieWaveManager, m_ActiveZombieList), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_ActorToSpawn_MetaData[] = {
		{ "AllowPrivateAccess", "true" },
		{ "Category", "ZombieWaveManager" },
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_ActorToSpawn = { "ActorToSpawn", nullptr, (EPropertyFlags)0x0044000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieWaveManager, ActorToSpawn), Z_Construct_UClass_AActor_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_ActorToSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_ActorToSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveAmounts_MetaData[] = {
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveAmounts = { "WaveAmounts", nullptr, (EPropertyFlags)0x0040000000000000, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieWaveManager, WaveAmounts), METADATA_PARAMS(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveAmounts_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveAmounts_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveTimer_MetaData[] = {
		{ "ModuleRelativePath", "ZombieWaveManager.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveTimer = { "WaveTimer", nullptr, (EPropertyFlags)0x0010000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AZombieWaveManager, WaveTimer), Z_Construct_UScriptStruct_FTimerHandle, METADATA_PARAMS(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AZombieWaveManager_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_m_ActiveZombieList,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_ActorToSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveAmounts,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AZombieWaveManager_Statics::NewProp_WaveTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AZombieWaveManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AZombieWaveManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AZombieWaveManager_Statics::ClassParams = {
		&AZombieWaveManager::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AZombieWaveManager_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::PropPointers),
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AZombieWaveManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AZombieWaveManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AZombieWaveManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AZombieWaveManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AZombieWaveManager, 2058834202);
	template<> ZOMBONE_API UClass* StaticClass<AZombieWaveManager>()
	{
		return AZombieWaveManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AZombieWaveManager(Z_Construct_UClass_AZombieWaveManager, &AZombieWaveManager::StaticClass, TEXT("/Script/Zombone"), TEXT("AZombieWaveManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AZombieWaveManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
