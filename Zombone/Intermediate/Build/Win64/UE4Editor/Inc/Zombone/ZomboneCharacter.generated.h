// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBONE_ZomboneCharacter_generated_h
#error "ZomboneCharacter.generated.h already included, missing '#pragma once' in ZomboneCharacter.h"
#endif
#define ZOMBONE_ZomboneCharacter_generated_h

#define Zombone_Source_Zombone_ZomboneCharacter_h_21_SPARSE_DATA
#define Zombone_Source_Zombone_ZomboneCharacter_h_21_RPC_WRAPPERS
#define Zombone_Source_Zombone_ZomboneCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS
#define Zombone_Source_Zombone_ZomboneCharacter_h_21_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAZomboneCharacter(); \
	friend struct Z_Construct_UClass_AZomboneCharacter_Statics; \
public: \
	DECLARE_CLASS(AZomboneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZomboneCharacter)


#define Zombone_Source_Zombone_ZomboneCharacter_h_21_INCLASS \
private: \
	static void StaticRegisterNativesAZomboneCharacter(); \
	friend struct Z_Construct_UClass_AZomboneCharacter_Statics; \
public: \
	DECLARE_CLASS(AZomboneCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(AZomboneCharacter)


#define Zombone_Source_Zombone_ZomboneCharacter_h_21_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AZomboneCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AZomboneCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZomboneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZomboneCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZomboneCharacter(AZomboneCharacter&&); \
	NO_API AZomboneCharacter(const AZomboneCharacter&); \
public:


#define Zombone_Source_Zombone_ZomboneCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AZomboneCharacter(AZomboneCharacter&&); \
	NO_API AZomboneCharacter(const AZomboneCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AZomboneCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AZomboneCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AZomboneCharacter)


#define Zombone_Source_Zombone_ZomboneCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AZomboneCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AZomboneCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AZomboneCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AZomboneCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AZomboneCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AZomboneCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AZomboneCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AZomboneCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__m_CurrentBullets() { return STRUCT_OFFSET(AZomboneCharacter, m_CurrentBullets); } \
	FORCEINLINE static uint32 __PPO__m_MaxBullets() { return STRUCT_OFFSET(AZomboneCharacter, m_MaxBullets); } \
	FORCEINLINE static uint32 __PPO__m_IsReloading() { return STRUCT_OFFSET(AZomboneCharacter, m_IsReloading); } \
	FORCEINLINE static uint32 __PPO__m_ReloadTimerHandler() { return STRUCT_OFFSET(AZomboneCharacter, m_ReloadTimerHandler); } \
	FORCEINLINE static uint32 __PPO__m_TimerDelay() { return STRUCT_OFFSET(AZomboneCharacter, m_TimerDelay); }


#define Zombone_Source_Zombone_ZomboneCharacter_h_18_PROLOG
#define Zombone_Source_Zombone_ZomboneCharacter_h_21_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_SPARSE_DATA \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_RPC_WRAPPERS \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_INCLASS \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombone_Source_Zombone_ZomboneCharacter_h_21_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_SPARSE_DATA \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_INCLASS_NO_PURE_DECLS \
	Zombone_Source_Zombone_ZomboneCharacter_h_21_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBONE_API UClass* StaticClass<class AZomboneCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombone_Source_Zombone_ZomboneCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
