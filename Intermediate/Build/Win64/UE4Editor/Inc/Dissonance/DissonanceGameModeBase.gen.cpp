// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/DissonanceGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDissonanceGameModeBase() {}
// Cross Module References
	DISSONANCE_API UClass* Z_Construct_UClass_ADissonanceGameModeBase_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_ADissonanceGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
// End Cross Module References
	void ADissonanceGameModeBase::StaticRegisterNativesADissonanceGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_ADissonanceGameModeBase_NoRegister()
	{
		return ADissonanceGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_ADissonanceGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADissonanceGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADissonanceGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "DissonanceGameModeBase.h" },
		{ "ModuleRelativePath", "DissonanceGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADissonanceGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADissonanceGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ADissonanceGameModeBase_Statics::ClassParams = {
		&ADissonanceGameModeBase::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009002ACu,
		METADATA_PARAMS(Z_Construct_UClass_ADissonanceGameModeBase_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADissonanceGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADissonanceGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ADissonanceGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ADissonanceGameModeBase, 3678629000);
	template<> DISSONANCE_API UClass* StaticClass<ADissonanceGameModeBase>()
	{
		return ADissonanceGameModeBase::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ADissonanceGameModeBase(Z_Construct_UClass_ADissonanceGameModeBase, &ADissonanceGameModeBase::StaticClass, TEXT("/Script/Dissonance"), TEXT("ADissonanceGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADissonanceGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
