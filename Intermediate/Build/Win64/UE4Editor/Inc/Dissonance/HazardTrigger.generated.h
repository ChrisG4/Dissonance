// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
#ifdef DISSONANCE_HazardTrigger_generated_h
#error "HazardTrigger.generated.h already included, missing '#pragma once' in HazardTrigger.h"
#endif
#define DISSONANCE_HazardTrigger_generated_h

#define Dissonance_Source_Dissonance_HazardTrigger_h_15_SPARSE_DATA
#define Dissonance_Source_Dissonance_HazardTrigger_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapEnd); \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAHazardTrigger(); \
	friend struct Z_Construct_UClass_AHazardTrigger_Statics; \
public: \
	DECLARE_CLASS(AHazardTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(AHazardTrigger)


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAHazardTrigger(); \
	friend struct Z_Construct_UClass_AHazardTrigger_Statics; \
public: \
	DECLARE_CLASS(AHazardTrigger, ATriggerBox, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(AHazardTrigger)


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AHazardTrigger(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AHazardTrigger) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHazardTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHazardTrigger); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHazardTrigger(AHazardTrigger&&); \
	NO_API AHazardTrigger(const AHazardTrigger&); \
public:


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AHazardTrigger(AHazardTrigger&&); \
	NO_API AHazardTrigger(const AHazardTrigger&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AHazardTrigger); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AHazardTrigger); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AHazardTrigger)


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_PRIVATE_PROPERTY_OFFSET
#define Dissonance_Source_Dissonance_HazardTrigger_h_12_PROLOG
#define Dissonance_Source_Dissonance_HazardTrigger_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_RPC_WRAPPERS \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_INCLASS \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dissonance_Source_Dissonance_HazardTrigger_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_INCLASS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_HazardTrigger_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISSONANCE_API UClass* StaticClass<class AHazardTrigger>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dissonance_Source_Dissonance_HazardTrigger_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
