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
	DISSONANCE_API UEnum* Z_Construct_UEnum_Dissonance_SpawnPoint();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacleSpawner_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacleSpawner();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
// End Cross Module References
	static UEnum* SpawnPoint_StaticEnum()
	{
		static UEnum* Singleton = nullptr;
		if (!Singleton)
		{
			Singleton = GetStaticEnum(Z_Construct_UEnum_Dissonance_SpawnPoint, Z_Construct_UPackage__Script_Dissonance(), TEXT("SpawnPoint"));
		}
		return Singleton;
	}
	template<> DISSONANCE_API UEnum* StaticEnum<SpawnPoint>()
	{
		return SpawnPoint_StaticEnum();
	}
	static FCompiledInDeferEnum Z_CompiledInDeferEnum_UEnum_SpawnPoint(SpawnPoint_StaticEnum, TEXT("/Script/Dissonance"), TEXT("SpawnPoint"), false, nullptr, nullptr);
	uint32 Get_Z_Construct_UEnum_Dissonance_SpawnPoint_Hash() { return 3987249183U; }
	UEnum* Z_Construct_UEnum_Dissonance_SpawnPoint()
	{
#if WITH_HOT_RELOAD
		UPackage* Outer = Z_Construct_UPackage__Script_Dissonance();
		static UEnum* ReturnEnum = FindExistingEnumIfHotReloadOrDynamic(Outer, TEXT("SpawnPoint"), 0, Get_Z_Construct_UEnum_Dissonance_SpawnPoint_Hash(), false);
#else
		static UEnum* ReturnEnum = nullptr;
#endif // WITH_HOT_RELOAD
		if (!ReturnEnum)
		{
			static const UE4CodeGen_Private::FEnumeratorParam Enumerators[] = {
				{ "SpawnPoint1", (int64)SpawnPoint1 },
				{ "SpawnPoint2", (int64)SpawnPoint2 },
			};
#if WITH_METADATA
			const UE4CodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[] = {
				{ "ModuleRelativePath", "ObstacleSpawner.h" },
				{ "SpawnPoint1.DisplayName", "Spawn Point 1" },
				{ "SpawnPoint1.Name", "SpawnPoint1" },
				{ "SpawnPoint2.DisplayName", "Spawn Point 2" },
				{ "SpawnPoint2.Name", "SpawnPoint2" },
			};
#endif
			static const UE4CodeGen_Private::FEnumParams EnumParams = {
				(UObject*(*)())Z_Construct_UPackage__Script_Dissonance,
				nullptr,
				"SpawnPoint",
				"SpawnPoint",
				Enumerators,
				UE_ARRAY_COUNT(Enumerators),
				RF_Public|RF_Transient|RF_MarkAsNative,
				EEnumFlags::None,
				UE4CodeGen_Private::EDynamicType::NotDynamic,
				(uint8)UEnum::ECppForm::Regular,
				METADATA_PARAMS(Enum_MetaDataParams, UE_ARRAY_COUNT(Enum_MetaDataParams))
			};
			UE4CodeGen_Private::ConstructUEnum(ReturnEnum, EnumParams);
		}
		return ReturnEnum;
	}
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
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SpawnLocations_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SpawnLocations_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_SpawnLocations;
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
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations_Inner = { "SpawnLocations", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations_MetaData[] = {
		{ "Category", "Spawning and Despawning" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations = { "SpawnLocations", nullptr, (EPropertyFlags)0x0020080000000041, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, SpawnLocations), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData[] = {
		{ "Category", "Spawning and Despawning" },
		{ "MakeEditWidget", "" },
		{ "ModuleRelativePath", "ObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation = { "ObstacleDespawnLocation", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AObstacleSpawner, ObstacleDespawnLocation), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_ObstacleDespawnLocation_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AObstacleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AObstacleSpawner_Statics::NewProp_SpawnLocations,
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
	IMPLEMENT_CLASS(AObstacleSpawner, 1225962869);
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
