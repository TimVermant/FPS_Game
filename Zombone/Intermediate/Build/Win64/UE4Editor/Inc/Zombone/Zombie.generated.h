// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBONE_Zombie_generated_h
#error "Zombie.generated.h already included, missing '#pragma once' in Zombie.h"
#endif
#define ZOMBONE_Zombie_generated_h

#define Zombone_Source_Zombone_Zombie_h_12_SPARSE_DATA
#define Zombone_Source_Zombone_Zombie_h_12_RPC_WRAPPERS
#define Zombone_Source_Zombone_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Zombone_Source_Zombone_Zombie_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define Zombone_Source_Zombone_Zombie_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAZombie(); \
	friend struct Z_Construct_UClass_AZombie_Statics; \
public: \
	DECLARE_CLASS(AZombie, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZombie)


#define Zombone_Source_Zombone_Zombie_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZombie(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZombie) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public:


#define Zombone_Source_Zombone_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZombie(AZombie&&); \
	NO_API AZombie(const AZombie&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZombie); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZombie); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZombie)


#define Zombone_Source_Zombone_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__m_ZombieHealth() { return STRUCT_OFFSET(AZombie, m_ZombieHealth); }


#define Zombone_Source_Zombone_Zombie_h_9_PROLOG
#define Zombone_Source_Zombone_Zombie_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_Zombie_h_12_SPARSE_DATA \
	Zombone_Source_Zombone_Zombie_h_12_RPC_WRAPPERS \
	Zombone_Source_Zombone_Zombie_h_12_INCLASS \
	Zombone_Source_Zombone_Zombie_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombone_Source_Zombone_Zombie_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_Zombie_h_12_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_Zombie_h_12_SPARSE_DATA \
	Zombone_Source_Zombone_Zombie_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombone_Source_Zombone_Zombie_h_12_INCLASS_NO_PURE_DECLS \
	Zombone_Source_Zombone_Zombie_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBONE_API UClass* StaticClass<class AZombie>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombone_Source_Zombone_Zombie_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
