// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/PredeterminedObstacleSpawner.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePredeterminedObstacleSpawner() {}
// Cross Module References
	DISSONANCE_API UScriptStruct* Z_Construct_UScriptStruct_FPredeterminedObstacle();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
	COREUOBJECT_API UClass* Z_Construct_UClass_UClass();
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacle_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_APredeterminedObstacleSpawner_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_APredeterminedObstacleSpawner();
	DISSONANCE_API UClass* Z_Construct_UClass_AObstacleSpawner();
// End Cross Module References
class UScriptStruct* FPredeterminedObstacle::StaticStruct()
{
	static class UScriptStruct* Singleton = NULL;
	if (!Singleton)
	{
		extern DISSONANCE_API uint32 Get_Z_Construct_UScriptStruct_FPredeterminedObstacle_Hash();
		Singleton = GetStaticStruct(Z_Construct_UScriptStruct_FPredeterminedObstacle, Z_Construct_UPackage__Script_Dissonance(), TEXT("PredeterminedObstacle"), sizeof(FPredeterminedObstacle), Get_Z_Construct_UScriptStruct_FPredeterminedObstacle_Hash());
	}
	return Singleton;
}
template<> DISSONANCE_API UScriptStruct* StaticStruct<FPredeterminedObstacle>()
{
	return FPredeterminedObstacle::StaticStruct();
}
static FCompiledInDeferStruct Z_CompiledInDeferStruct_UScriptStruct_FPredeterminedObstacle(FPredeterminedObstacle::StaticStruct, TEXT("/Script/Dissonance"), TEXT("PredeterminedObstacle"), false, nullptr, nullptr);
static struct FScriptStruct_Dissonance_StaticRegisterNativesFPredeterminedObstacle
{
	FScriptStruct_Dissonance_StaticRegisterNativesFPredeterminedObstacle()
	{
		UScriptStruct::DeferCppStructOps(FName(TEXT("PredeterminedObstacle")),new UScriptStruct::TCppStructOps<FPredeterminedObstacle>);
	}
} ScriptStruct_Dissonance_StaticRegisterNativesFPredeterminedObstacle;
	struct Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics
	{
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Struct_MetaDataParams[];
#endif
		static void* NewStructOps();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_DelayBeforeSpawn_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_DelayBeforeSpawn;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ObstacleType_MetaData[];
#endif
		static const UE4CodeGen_Private::FClassPropertyParams NewProp_ObstacleType;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const UE4CodeGen_Private::FStructParams ReturnStructParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::Struct_MetaDataParams[] = {
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
	};
#endif
	void* Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewStructOps()
	{
		return (UScriptStruct::ICppStructOps*)new UScriptStruct::TCppStructOps<FPredeterminedObstacle>();
	}
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_DelayBeforeSpawn_MetaData[] = {
		{ "Category", "Obstacle List" },
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_DelayBeforeSpawn = { "DelayBeforeSpawn", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPredeterminedObstacle, DelayBeforeSpawn), METADATA_PARAMS(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_DelayBeforeSpawn_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_DelayBeforeSpawn_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_ObstacleType_MetaData[] = {
		{ "Category", "Obstacle List" },
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FClassPropertyParams Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_ObstacleType = { "ObstacleType", nullptr, (EPropertyFlags)0x0014000000000001, UE4CodeGen_Private::EPropertyGenFlags::Class, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(FPredeterminedObstacle, ObstacleType), Z_Construct_UClass_AObstacle_NoRegister, Z_Construct_UClass_UClass, METADATA_PARAMS(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_ObstacleType_MetaData, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_ObstacleType_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_DelayBeforeSpawn,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::NewProp_ObstacleType,
	};
	const UE4CodeGen_Private::FStructParams Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::ReturnStructParams = {
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
		nullptr,
		&NewStructOps,
		"PredeterminedObstacle",
		sizeof(FPredeterminedObstacle),
		alignof(FPredeterminedObstacle),
		Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::PropPointers,
		UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::PropPointers),
		RF_Public|RF_Transient|RF_MarkAsNative,
		EStructFlags(0x00000001),
		METADATA_PARAMS(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::Struct_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::Struct_MetaDataParams))
	};
	UScriptStruct* Z_Construct_UScriptStruct_FPredeterminedObstacle()
	{
#if WITH_HOT_RELOAD
		extern uint32 Get_Z_Construct_UScriptStruct_FPredeterminedObstacle_Hash();
		UPackage* Outer = Z_Construct_UPackage__Script_Dissonance();
		static UScriptStruct* ReturnStruct = FindExistingStructIfHotReloadOrDynamic(Outer, TEXT("PredeterminedObstacle"), sizeof(FPredeterminedObstacle), Get_Z_Construct_UScriptStruct_FPredeterminedObstacle_Hash(), false);
#else
		static UScriptStruct* ReturnStruct = nullptr;
#endif
		if (!ReturnStruct)
		{
			UE4CodeGen_Private::ConstructUScriptStruct(ReturnStruct, Z_Construct_UScriptStruct_FPredeterminedObstacle_Statics::ReturnStructParams);
		}
		return ReturnStruct;
	}
	uint32 Get_Z_Construct_UScriptStruct_FPredeterminedObstacle_Hash() { return 226372571U; }
	void APredeterminedObstacleSpawner::StaticRegisterNativesAPredeterminedObstacleSpawner()
	{
	}
	UClass* Z_Construct_UClass_APredeterminedObstacleSpawner_NoRegister()
	{
		return APredeterminedObstacleSpawner::StaticClass();
	}
	struct Z_Construct_UClass_APredeterminedObstacleSpawner_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bListLoops_MetaData[];
#endif
		static void NewProp_bListLoops_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bListLoops;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_PredeterminedObstacles_Inner;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PredeterminedObstacles_MetaData[];
#endif
		static const UE4CodeGen_Private::FArrayPropertyParams NewProp_PredeterminedObstacles;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AObstacleSpawner,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "PredeterminedObstacleSpawner.h" },
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops_MetaData[] = {
		{ "Category", "Obstacle List" },
		{ "Comment", "//Does the list begin again upon reaching the end of the list\n" },
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
		{ "ToolTip", "Does the list begin again upon reaching the end of the list" },
	};
#endif
	void Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops_SetBit(void* Obj)
	{
		((APredeterminedObstacleSpawner*)Obj)->bListLoops = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops = { "bListLoops", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APredeterminedObstacleSpawner), &Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops_SetBit, METADATA_PARAMS(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles_Inner = { "PredeterminedObstacles", nullptr, (EPropertyFlags)0x0000000000000000, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, 0, Z_Construct_UScriptStruct_FPredeterminedObstacle, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles_MetaData[] = {
		{ "Category", "Obstacle List" },
		{ "ModuleRelativePath", "PredeterminedObstacleSpawner.h" },
	};
#endif
	const UE4CodeGen_Private::FArrayPropertyParams Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles = { "PredeterminedObstacles", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APredeterminedObstacleSpawner, PredeterminedObstacles), EArrayPropertyFlags::None, METADATA_PARAMS(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_bListLoops,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles_Inner,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::NewProp_PredeterminedObstacles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APredeterminedObstacleSpawner>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::ClassParams = {
		&APredeterminedObstacleSpawner::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APredeterminedObstacleSpawner()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APredeterminedObstacleSpawner_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APredeterminedObstacleSpawner, 2110347267);
	template<> DISSONANCE_API UClass* StaticClass<APredeterminedObstacleSpawner>()
	{
		return APredeterminedObstacleSpawner::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APredeterminedObstacleSpawner(Z_Construct_UClass_APredeterminedObstacleSpawner, &APredeterminedObstacleSpawner::StaticClass, TEXT("/Script/Dissonance"), TEXT("APredeterminedObstacleSpawner"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APredeterminedObstacleSpawner);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
