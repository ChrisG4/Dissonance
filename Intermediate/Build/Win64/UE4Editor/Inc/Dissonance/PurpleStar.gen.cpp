// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/PurpleStar.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePurpleStar() {}
// Cross Module References
	DISSONANCE_API UClass* Z_Construct_UClass_APurpleStar_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_APurpleStar();
	DISSONANCE_API UClass* Z_Construct_UClass_ABackgroundActor();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
// End Cross Module References
	void APurpleStar::StaticRegisterNativesAPurpleStar()
	{
	}
	UClass* Z_Construct_UClass_APurpleStar_NoRegister()
	{
		return APurpleStar::StaticClass();
	}
	struct Z_Construct_UClass_APurpleStar_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_RotateSpeed_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_RotateSpeed;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APurpleStar_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_ABackgroundActor,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurpleStar_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "PurpleStar.h" },
		{ "ModuleRelativePath", "PurpleStar.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APurpleStar_Statics::NewProp_RotateSpeed_MetaData[] = {
		{ "Category", "PurpleStar" },
		{ "ModuleRelativePath", "PurpleStar.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APurpleStar_Statics::NewProp_RotateSpeed = { "RotateSpeed", nullptr, (EPropertyFlags)0x0020080000010001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APurpleStar, RotateSpeed), METADATA_PARAMS(Z_Construct_UClass_APurpleStar_Statics::NewProp_RotateSpeed_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APurpleStar_Statics::NewProp_RotateSpeed_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APurpleStar_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APurpleStar_Statics::NewProp_RotateSpeed,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APurpleStar_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APurpleStar>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APurpleStar_Statics::ClassParams = {
		&APurpleStar::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APurpleStar_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APurpleStar_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APurpleStar_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APurpleStar_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APurpleStar()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APurpleStar_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APurpleStar, 963706003);
	template<> DISSONANCE_API UClass* StaticClass<APurpleStar>()
	{
		return APurpleStar::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APurpleStar(Z_Construct_UClass_APurpleStar, &APurpleStar::StaticClass, TEXT("/Script/Dissonance"), TEXT("APurpleStar"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APurpleStar);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
