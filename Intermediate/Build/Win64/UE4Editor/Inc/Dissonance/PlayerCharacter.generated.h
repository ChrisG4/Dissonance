// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISSONANCE_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define DISSONANCE_PlayerCharacter_generated_h

#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_SPARSE_DATA
#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_RPC_WRAPPERS
#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__VerticalDeceleration() { return STRUCT_OFFSET(APlayerCharacter, VerticalDeceleration); } \
	FORCEINLINE static uint32 __PPO__VerticalVelocity() { return STRUCT_OFFSET(APlayerCharacter, VerticalVelocity); }


#define Dissonance_Source_Dissonance_PlayerCharacter_h_9_PROLOG
#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_SPARSE_DATA \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_RPC_WRAPPERS \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_INCLASS \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dissonance_Source_Dissonance_PlayerCharacter_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_SPARSE_DATA \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_INCLASS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_PlayerCharacter_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISSONANCE_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dissonance_Source_Dissonance_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
