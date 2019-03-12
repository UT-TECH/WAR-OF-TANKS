// Copyright 1998-2018 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "WAR_OF_TANKS/WAR_OF_TANKSGameModeBase.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeWAR_OF_TANKSGameModeBase() {}
// Cross Module References
	WAR_OF_TANKS_API UClass* Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_NoRegister();
	WAR_OF_TANKS_API UClass* Z_Construct_UClass_AWAR_OF_TANKSGameModeBase();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_WAR_OF_TANKS();
// End Cross Module References
	void AWAR_OF_TANKSGameModeBase::StaticRegisterNativesAWAR_OF_TANKSGameModeBase()
	{
	}
	UClass* Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_NoRegister()
	{
		return AWAR_OF_TANKSGameModeBase::StaticClass();
	}
	struct Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_WAR_OF_TANKS,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "WAR_OF_TANKSGameModeBase.h" },
		{ "ModuleRelativePath", "WAR_OF_TANKSGameModeBase.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AWAR_OF_TANKSGameModeBase>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::ClassParams = {
		&AWAR_OF_TANKSGameModeBase::StaticClass,
		DependentSingletons, ARRAY_COUNT(DependentSingletons),
		0x009002A8u,
		nullptr, 0,
		nullptr, 0,
		nullptr,
		&StaticCppClassTypeInfo,
		nullptr, 0,
		METADATA_PARAMS(Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::Class_MetaDataParams, ARRAY_COUNT(Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AWAR_OF_TANKSGameModeBase()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AWAR_OF_TANKSGameModeBase_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AWAR_OF_TANKSGameModeBase, 3749045804);
	static FCompiledInDefer Z_CompiledInDefer_UClass_AWAR_OF_TANKSGameModeBase(Z_Construct_UClass_AWAR_OF_TANKSGameModeBase, &AWAR_OF_TANKSGameModeBase::StaticClass, TEXT("/Script/WAR_OF_TANKS"), TEXT("AWAR_OF_TANKSGameModeBase"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AWAR_OF_TANKSGameModeBase);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
