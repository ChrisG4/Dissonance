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
struct FHitResult;
#ifdef DISSONANCE_HazardBox_generated_h
#error "HazardBox.generated.h already included, missing '#pragma once' in HazardBox.h"
#endif
#define DISSONANCE_HazardBox_generated_h

#define Dissonance_Source_Dissonance_HazardBox_h_15_SPARSE_DATA
#define Dissonance_Source_Dissonance_HazardBox_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Dissonance_Source_Dissonance_HazardBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnOverlapBegin);


#define Dissonance_Source_Dissonance_HazardBox_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHazardBox(); \
	friend struct Z_Construct_UClass_UHazardBox_Statics; \
public: \
	DECLARE_CLASS(UHazardBox, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(UHazardBox)


#define Dissonance_Source_Dissonance_HazardBox_h_15_INCLASS \
private: \
	static void StaticRegisterNativesUHazardBox(); \
	friend struct Z_Construct_UClass_UHazardBox_Statics; \
public: \
	DECLARE_CLASS(UHazardBox, UBoxComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Dissonance"), NO_API) \
	DECLARE_SERIALIZER(UHazardBox)


#define Dissonance_Source_Dissonance_HazardBox_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHazardBox(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHazardBox) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHazardBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHazardBox); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHazardBox(UHazardBox&&); \
	NO_API UHazardBox(const UHazardBox&); \
public:


#define Dissonance_Source_Dissonance_HazardBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHazardBox(UHazardBox&&); \
	NO_API UHazardBox(const UHazardBox&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHazardBox); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHazardBox); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHazardBox)


#define Dissonance_Source_Dissonance_HazardBox_h_15_PRIVATE_PROPERTY_OFFSET
#define Dissonance_Source_Dissonance_HazardBox_h_12_PROLOG
#define Dissonance_Source_Dissonance_HazardBox_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_HazardBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_HazardBox_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_HazardBox_h_15_RPC_WRAPPERS \
	Dissonance_Source_Dissonance_HazardBox_h_15_INCLASS \
	Dissonance_Source_Dissonance_HazardBox_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Dissonance_Source_Dissonance_HazardBox_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Dissonance_Source_Dissonance_HazardBox_h_15_PRIVATE_PROPERTY_OFFSET \
	Dissonance_Source_Dissonance_HazardBox_h_15_SPARSE_DATA \
	Dissonance_Source_Dissonance_HazardBox_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_HazardBox_h_15_INCLASS_NO_PURE_DECLS \
	Dissonance_Source_Dissonance_HazardBox_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> DISSONANCE_API UClass* StaticClass<class UHazardBox>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Dissonance_Source_Dissonance_HazardBox_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
