// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/ObstacleSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeObstacleSpawner() {}
// Cross Module References
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacleSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	void AObstacleSpawner::StaticRegisterNativesAObstacleSpawner()
	{
	}
	UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister()
	{
		return AObstacleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_AObstacleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleDespawnLocation_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_ObstacleDespawnLocation;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AObstacleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ObstacleSpawner.h" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData[] = {
		{ "Category", "ObstacleSpawner" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation = { "ObstacleDespawnLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, ObstacleDespawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AObstacleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AObstacleSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams = {
		&AObstacleSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AObstacleSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AObstacleSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AObstacleSpawner, 3652469152);
	template<> DISSONANCE_API UClass* StaticClass<AObstacleSpawner>()
	{
		return AObstacleSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AObstacleSpawner(Z_Construct_UClass_AObstacleSpawner, &AObstacleSpawner::StaticClass, TEXT("/Script/Dissonance"), TEXT("AObstacleSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AObstacleSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
