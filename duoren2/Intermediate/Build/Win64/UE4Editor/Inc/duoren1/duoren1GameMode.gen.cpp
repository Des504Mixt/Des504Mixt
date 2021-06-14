// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "duoren1/duoren1GameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeduoren1GameMode() {}
// Cross Module References
	DUOREN1_API UClass* Z_Construct_UClass_Aduoren1GameMode_NoRegister();
	DUOREN1_API UClass* Z_Construct_UClass_Aduoren1GameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_duoren1();
// End Cross Module References
	void Aduoren1GameMode::StaticRegisterNativesAduoren1GameMode()
	{
	}
	UClass* Z_Construct_UClass_Aduoren1GameMode_NoRegister()
	{
		return Aduoren1GameMode::StaticClass();
	}
	struct Z_Construct_UClass_Aduoren1GameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_Aduoren1GameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_duoren1,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_Aduoren1GameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "duoren1GameMode.h" },
		{ "ModuleRelativePath", "duoren1GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_Aduoren1GameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<Aduoren1GameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_Aduoren1GameMode_Statics::ClassParams = {
		&Aduoren1GameMode::StaticClass,
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
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_Aduoren1GameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_Aduoren1GameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_Aduoren1GameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_Aduoren1GameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(Aduoren1GameMode, 4246974595);
	template<> DUOREN1_API UClass* StaticClass<Aduoren1GameMode>()
	{
		return Aduoren1GameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_Aduoren1GameMode(Z_Construct_UClass_Aduoren1GameMode, &Aduoren1GameMode::StaticClass, TEXT("/Script/duoren1"), TEXT("Aduoren1GameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(Aduoren1GameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
