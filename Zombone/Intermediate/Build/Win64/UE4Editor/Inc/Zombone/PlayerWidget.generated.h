// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef ZOMBONE_PlayerWidget_generated_h
#error "PlayerWidget.generated.h already included, missing '#pragma once' in PlayerWidget.h"
#endif
#define ZOMBONE_PlayerWidget_generated_h

#define Zombone_Source_Zombone_PlayerWidget_h_15_SPARSE_DATA
#define Zombone_Source_Zombone_PlayerWidget_h_15_RPC_WRAPPERS
#define Zombone_Source_Zombone_PlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Zombone_Source_Zombone_PlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define Zombone_Source_Zombone_PlayerWidget_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUPlayerWidget(); \
	friend struct Z_Construct_UClass_UPlayerWidget_Statics; \
public: \
	DECLARE_CLASS(UPlayerWidget, UUserWidget, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/Zombone"), NO_API) \
	DECLARE_SERIALIZER(UPlayerWidget)


#define Zombone_Source_Zombone_PlayerWidget_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWidget(UPlayerWidget&&); \
	NO_API UPlayerWidget(const UPlayerWidget&); \
public:


#define Zombone_Source_Zombone_PlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UPlayerWidget(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()) : Super(ObjectInitializer) { }; \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UPlayerWidget(UPlayerWidget&&); \
	NO_API UPlayerWidget(const UPlayerWidget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UPlayerWidget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UPlayerWidget); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UPlayerWidget)


#define Zombone_Source_Zombone_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET
#define Zombone_Source_Zombone_PlayerWidget_h_12_PROLOG
#define Zombone_Source_Zombone_PlayerWidget_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_PlayerWidget_h_15_SPARSE_DATA \
	Zombone_Source_Zombone_PlayerWidget_h_15_RPC_WRAPPERS \
	Zombone_Source_Zombone_PlayerWidget_h_15_INCLASS \
	Zombone_Source_Zombone_PlayerWidget_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Zombone_Source_Zombone_PlayerWidget_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Zombone_Source_Zombone_PlayerWidget_h_15_PRIVATE_PROPERTY_OFFSET \
	Zombone_Source_Zombone_PlayerWidget_h_15_SPARSE_DATA \
	Zombone_Source_Zombone_PlayerWidget_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Zombone_Source_Zombone_PlayerWidget_h_15_INCLASS_NO_PURE_DECLS \
	Zombone_Source_Zombone_PlayerWidget_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> ZOMBONE_API UClass* StaticClass<class UPlayerWidget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Zombone_Source_Zombone_PlayerWidget_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
