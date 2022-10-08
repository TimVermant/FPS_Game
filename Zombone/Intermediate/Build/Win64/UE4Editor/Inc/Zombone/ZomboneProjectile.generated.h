// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef ZOMBONE_ZomboneProjectile_generated_h
#error "ZomboneProjectile.generated.h already included, missing '#pragma once' in ZomboneProjectile.h"
#endif
#define ZOMBONE_ZomboneProjectile_generated_h

#define Zombone_Source_Zombone_ZomboneProjectile_h_15_SPARSE_DATA
#define Zombone_Source_Zombone_ZomboneProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Zombone_Source_Zombone_ZomboneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define Zombone_Source_Zombone_ZomboneProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZomboneProjectile(); \
	friend struct Z_Construct_UClass_AZomboneProjectile_Statics; \
public: \
	DECLARE_CLASS(AZomboneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZomboneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Zombone_Source_Zombone_ZomboneProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAZomboneProjectile(); \
	friend struct Z_Construct_UClass_AZomboneProjectile_Statics; \
public: \
	DECLARE_CLASS(AZomboneProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZomboneProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define Zombone_Source_Zombone_ZomboneProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZomboneProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZomboneProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZomboneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZomboneProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZomboneProjectile(AZomboneProjectile&&); \
	NO_API AZomboneProjectile(const AZomboneProjectile&); \
public:


#define Zombone_Source_Zombone_ZomboneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZomboneProjectile(AZomboneProjectile&&); \
	NO_API AZomboneProjectile(const AZomboneProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZomboneProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZomboneProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZomboneProjectile)


#define Zombone_Source_Zombone_ZomboneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AZomboneProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AZomboneProjectile, ProjectileMovement); }


#define Zombone_Source_Zombone_ZomboneProjectile_h_12_PROLOG
#define Zombone_Source_Zombone_ZomboneProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_SPARSE_DATA \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_RPC_WRAPPERS \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_INCLASS \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombone_Source_Zombone_ZomboneProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_SPARSE_DATA \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_INCLASS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZomboneProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBONE_API UClass* StaticClass<class AZomboneProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombone_Source_Zombone_ZomboneProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
