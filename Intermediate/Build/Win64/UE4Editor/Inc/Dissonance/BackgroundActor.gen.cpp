// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/BackgroundActor.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBackgroundActor() {}
// Cross Module References
	DISSONANCE_API UClass* Z_Construct_UClass_ABackgroundActor_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_ABackgroundActor();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
	ENGINE_API UClass* Z_Construct_UClass_USceneComponent_NoRegister();
	PAPER2D_API UClass* Z_Construct_UClass_UPaperSpriteComponent_NoRegister();
// End Cross Module References
	void ABackgroundActor::StaticRegisterNativesABackgroundActor()
	{
	}
	UClass* Z_Construct_UClass_ABackgroundActor_NoRegister()
	{
		return ABackgroundActor::StaticClass();
	}
	struct Z_Construct_UClass_ABackgroundActor_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorRoot_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorRoot;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_ActorSprite_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_ActorSprite;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ABackgroundActor_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundActor_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "BackgroundActor.h" },
		{ "ModuleRelativePath", "BackgroundActor.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorRoot_MetaData[] = {
		{ "Category", "BackgroundActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BackgroundActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorRoot = { "ActorRoot", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABackgroundActor, ActorRoot), Z_Construct_UClass_USceneComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorRoot_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorRoot_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorSprite_MetaData[] = {
		{ "Category", "BackgroundActor" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "BackgroundActor.h" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorSprite = { "ActorSprite", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ABackgroundActor, ActorSprite), Z_Construct_UClass_UPaperSpriteComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorSprite_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorSprite_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ABackgroundActor_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorRoot,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ABackgroundActor_Statics::NewProp_ActorSprite,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ABackgroundActor_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ABackgroundActor>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_ABackgroundActor_Statics::ClassParams = {
		&ABackgroundActor::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ABackgroundActor_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ABackgroundActor_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ABackgroundActor_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ABackgroundActor_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ABackgroundActor()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_ABackgroundActor_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(ABackgroundActor, 3497496258);
	template<> DISSONANCE_API UClass* StaticClass<ABackgroundActor>()
	{
		return ABackgroundActor::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_ABackgroundActor(Z_Construct_UClass_ABackgroundActor, &ABackgroundActor::StaticClass, TEXT("/Script/Dissonance"), TEXT("ABackgroundActor"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(ABackgroundActor);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
