// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
struct FVector;
struct FRotator;
#ifdef ZOMBONE_ZombieWaveManager_generated_h
#error "ZombieWaveManager.generated.h already included, missing '#pragma once' in ZombieWaveManager.h"
#endif
#define ZOMBONE_ZombieWaveManager_generated_h

#define Zombone_Source_Zombone_ZombieWaveManager_h_17_SPARSE_DATA
#define Zombone_Source_Zombone_ZombieWaveManager_h_17_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execSpawnZombie);


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execSpawnZombie);


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombieWaveManager(); \
	friend struct Z_Construct_UClass_AZombieWaveManager_Statics; \
public: \
	DECLARE_CLASS(AZombieWaveManager, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZombieWaveManager)


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_INCLASS \
private: \
	static void StaticRegisterNativesAZombieWaveManager(); \
	friend struct Z_Construct_UClass_AZombieWaveManager_Statics; \
public: \
	DECLARE_CLASS(AZombieWaveManager, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZombieWaveManager)


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombieWaveManager(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombieWaveManager) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieWaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieWaveManager); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieWaveManager(AZombieWaveManager&&); \
	NO_API AZombieWaveManager(const AZombieWaveManager&); \
public:


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombieWaveManager(AZombieWaveManager&&); \
	NO_API AZombieWaveManager(const AZombieWaveManager&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombieWaveManager); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombieWaveManager); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombieWaveManager)


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ActiveZombieList() { return STRUCT_OFFSET(AZombieWaveManager, m_ActiveZombieList); } \
	FORCEINLINE static uint32 __PPO__ActorToSpawn() { return STRUCT_OFFSET(AZombieWaveManager, ActorToSpawn); }


#define Zombone_Source_Zombone_ZombieWaveManager_h_14_PROLOG
#define Zombone_Source_Zombone_ZombieWaveManager_h_17_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_SPARSE_DATA \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_RPC_WRAPPERS \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_INCLASS \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombone_Source_Zombone_ZombieWaveManager_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_SPARSE_DATA \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_INCLASS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZombieWaveManager_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBONE_API UClass* StaticClass<class AZombieWaveManager>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombone_Source_Zombone_ZombieWaveManager_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
