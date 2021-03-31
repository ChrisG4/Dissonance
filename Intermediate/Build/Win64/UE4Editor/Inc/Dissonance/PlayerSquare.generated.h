// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISSONANCE_PlayerSquare_generated_h
#error "PlayerSquare.generated.h already included, missing '#pragma once' in PlayerSquare.h"
#endif
#define DISSONANCE_PlayerSquare_generated_h

#define Dissonance_Source_Dissonance_PlayerSquare_h_15_SPARSE_DATA
#define Dissonance_Source_Dissonance_PlayerSquare_h_15_RPC_WRAPPERS
#define Dissonance_Source_Dissonance_PlayerSquare_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Dissonance_Source_Dissonance_PlayerSquare_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerSquare(); \
	friend struct Z_Construct_UClass_APlayerSquare_Statics; \
public: \
	DECLARE_CLASS(APlayerSquare, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(APlayerSquare)


#define Dissonance_Source_Dissonance_PlayerSquare_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerSquare(); \
	friend struct Z_Construct_UClass_APlayerSquare_Statics; \
public: \
	DECLARE_CLASS(APlayerSquare, APawn, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(APlayerSquare)


#define Dissonance_Source_Dissonance_PlayerSquare_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerSquare(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerSquare) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSquare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSquare); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSquare(APlayerSquare&&); \
	NO_API APlayerSquare(const APlayerSquare&); \
public:


#define Dissonance_Source_Dissonance_PlayerSquare_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerSquare(APlayerSquare&&); \
	NO_API APlayerSquare(const APlayerSquare&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerSquare); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerSquare); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerSquare)


#define Dissonance_Source_Dissonance_PlayerSquare_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerBody() { return STRUCT_OFFSET(APlayerSquare, PlayerBody); } \
	FORCEINLINE static uint32 __PPO__Gravity() { return STRUCT_OFFSET(APlayerSquare, Gravity); } \
	FORCEINLINE static uint32 __PPO__JumpHeight() { return STRUCT_OFFSET(APlayerSquare, JumpHeight); } \
	FORCEINLINE static uint32 __PPO__JumpTime() { return STRUCT_OFFSET(APlayerSquare, JumpTime); } \
	FORCEINLINE static uint32 __PPO__bIsJumping() { return STRUCT_OFFSET(APlayerSquare, bIsJumping); } \
	FORCEINLINE static uint32 __PPO__JumpTimer() { return STRUCT_OFFSET(APlayerSquare, JumpTimer); }


#define Dissonance_Source_Dissonance_PlayerSquare_h_12_PROLOG
#define Dissonance_Source_Dissonance_PlayerSquare_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_RPC_WRAPPERS \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_INCLASS \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dissonance_Source_Dissonance_PlayerSquare_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_INCLASS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_PlayerSquare_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISSONANCE_API UClass* StaticClass<class APlayerSquare>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dissonance_Source_Dissonance_PlayerSquare_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
