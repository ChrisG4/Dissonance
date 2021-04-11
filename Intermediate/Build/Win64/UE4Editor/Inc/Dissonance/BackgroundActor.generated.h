// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef DISSONANCE_BackgroundActor_generated_h
#error "BackgroundActor.generated.h already included, missing '#pragma once' in BackgroundActor.h"
#endif
#define DISSONANCE_BackgroundActor_generated_h

#define Dissonance_Source_Dissonance_BackgroundActor_h_14_SPARSE_DATA
#define Dissonance_Source_Dissonance_BackgroundActor_h_14_RPC_WRAPPERS
#define Dissonance_Source_Dissonance_BackgroundActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS
#define Dissonance_Source_Dissonance_BackgroundActor_h_14_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesABackgroundActor(); \
	friend struct Z_Construct_UClass_ABackgroundActor_Statics; \
public: \
	DECLARE_CLASS(ABackgroundActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundActor)


#define Dissonance_Source_Dissonance_BackgroundActor_h_14_INCLASS \
private: \
	static void StaticRegisterNativesABackgroundActor(); \
	friend struct Z_Construct_UClass_ABackgroundActor_Statics; \
public: \
	DECLARE_CLASS(ABackgroundActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(ABackgroundActor)


#define Dissonance_Source_Dissonance_BackgroundActor_h_14_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ABackgroundActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ABackgroundActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundActor(ABackgroundActor&&); \
	NO_API ABackgroundActor(const ABackgroundActor&); \
public:


#define Dissonance_Source_Dissonance_BackgroundActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ABackgroundActor(ABackgroundActor&&); \
	NO_API ABackgroundActor(const ABackgroundActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ABackgroundActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ABackgroundActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ABackgroundActor)


#define Dissonance_Source_Dissonance_BackgroundActor_h_14_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__ActorRoot() { return STRUCT_OFFSET(ABackgroundActor, ActorRoot); } \
	FORCEINLINE static uint32 __PPO__ActorSprite() { return STRUCT_OFFSET(ABackgroundActor, ActorSprite); }


#define Dissonance_Source_Dissonance_BackgroundActor_h_11_PROLOG
#define Dissonance_Source_Dissonance_BackgroundActor_h_14_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_SPARSE_DATA \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_RPC_WRAPPERS \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_INCLASS \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dissonance_Source_Dissonance_BackgroundActor_h_14_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_SPARSE_DATA \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_RPC_WRAPPERS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_INCLASS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_BackgroundActor_h_14_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISSONANCE_API UClass* StaticClass<class ABackgroundActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dissonance_Source_Dissonance_BackgroundActor_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
