// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Dissonance/PlayerSquare.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodePlayerSquare() {}
// Cross Module References
	DISSONANCE_API UClass* Z_Construct_UClass_APlayerSquare_NoRegister();
	DISSONANCE_API UClass* Z_Construct_UClass_APlayerSquare();
	ENGINE_API UClass* Z_Construct_UClass_APawn();
	UPackage* Z_Construct_UPackage__Script_Dissonance();
	ENGINE_API UClass* Z_Construct_UClass_UStaticMeshComponent_NoRegister();
// End Cross Module References
	void APlayerSquare::StaticRegisterNativesAPlayerSquare()
	{
	}
	UClass* Z_Construct_UClass_APlayerSquare_NoRegister()
	{
		return APlayerSquare::StaticClass();
	}
	struct Z_Construct_UClass_APlayerSquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_PlayerBody_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_PlayerBody;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Gravity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_Gravity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpHeight_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpHeight;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpTime_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpTime;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpVelocity_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpVelocity;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bIsJumping_MetaData[];
#endif
		static void NewProp_bIsJumping_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bIsJumping;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_JumpTimer_MetaData[];
#endif
		static const UE4CodeGen_Private::FFloatPropertyParams NewProp_JumpTimer;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_APlayerSquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_APawn,
		(UObject* (*)())Z_Construct_UPackage__Script_Dissonance,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Navigation" },
		{ "IncludePath", "PlayerSquare.h" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_PlayerBody_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "Comment", "// Called when the game starts or when spawned\n" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
		{ "ToolTip", "Called when the game starts or when spawned" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_PlayerBody = { "PlayerBody", nullptr, (EPropertyFlags)0x0020080000090009, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, PlayerBody), Z_Construct_UClass_UStaticMeshComponent_NoRegister, METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_PlayerBody_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_PlayerBody_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_Gravity_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_Gravity = { "Gravity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, Gravity), METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_Gravity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_Gravity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpHeight_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpHeight = { "JumpHeight", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, JumpHeight), METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpHeight_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpHeight_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTime_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "Comment", "//How long it take to reach the jump height\n" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
		{ "ToolTip", "How long it take to reach the jump height" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTime = { "JumpTime", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, JumpTime), METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTime_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTime_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpVelocity_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpVelocity = { "JumpVelocity", nullptr, (EPropertyFlags)0x0020080000000001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, JumpVelocity), METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpVelocity_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpVelocity_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping_MetaData[] = {
		{ "Category", "Jumping" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
	void Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping_SetBit(void* Obj)
	{
		((APlayerSquare*)Obj)->bIsJumping = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping = { "bIsJumping", nullptr, (EPropertyFlags)0x0020080000000005, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(APlayerSquare), &Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping_SetBit, METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTimer_MetaData[] = {
		{ "Category", "PlayerSquare" },
		{ "ModuleRelativePath", "PlayerSquare.h" },
	};
#endif
	const UE4CodeGen_Private::FFloatPropertyParams Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTimer = { "JumpTimer", nullptr, (EPropertyFlags)0x0020080000020001, UE4CodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(APlayerSquare, JumpTimer), METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTimer_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTimer_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_APlayerSquare_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_PlayerBody,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_Gravity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpHeight,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTime,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpVelocity,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_bIsJumping,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_APlayerSquare_Statics::NewProp_JumpTimer,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_APlayerSquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<APlayerSquare>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_APlayerSquare_Statics::ClassParams = {
		&APlayerSquare::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_APlayerSquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_APlayerSquare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_APlayerSquare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_APlayerSquare()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_APlayerSquare_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(APlayerSquare, 3312124675);
	template<> DISSONANCE_API UClass* StaticClass<APlayerSquare>()
	{
		return APlayerSquare::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_APlayerSquare(Z_Construct_UClass_APlayerSquare, &APlayerSquare::StaticClass, TEXT("/Script/Dissonance"), TEXT("APlayerSquare"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(APlayerSquare);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
