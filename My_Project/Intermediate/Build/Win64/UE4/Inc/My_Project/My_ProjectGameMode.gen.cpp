// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_Project/My_ProjectGameMode.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_ProjectGameMode() {}
// Cross Module References
	MY_PROJECT_API UClass* Z_Construct_UClass_AMy_ProjectGameMode_NoRegister();
	MY_PROJECT_API UClass* Z_Construct_UClass_AMy_ProjectGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_My_Project();
// End Cross Module References
	void AMy_ProjectGameMode::StaticRegisterNativesAMy_ProjectGameMode()
	{
	}
	UClass* Z_Construct_UClass_AMy_ProjectGameMode_NoRegister()
	{
		return AMy_ProjectGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMy_ProjectGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_ProjectGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_My_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_ProjectGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering Utilities|Transformation" },
		{ "IncludePath", "My_ProjectGameMode.h" },
		{ "ModuleRelativePath", "My_ProjectGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_ProjectGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_ProjectGameMode>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMy_ProjectGameMode_Statics::ClassParams = {
		&AMy_ProjectGameMode::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_AMy_ProjectGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_ProjectGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_ProjectGameMode()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMy_ProjectGameMode_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMy_ProjectGameMode, 2259908942);
	template<> MY_PROJECT_API UClass* StaticClass<AMy_ProjectGameMode>()
	{
		return AMy_ProjectGameMode::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy_ProjectGameMode(Z_Construct_UClass_AMy_ProjectGameMode, &AMy_ProjectGameMode::StaticClass, TEXT("/Script/My_Project"), TEXT("AMy_ProjectGameMode"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_ProjectGameMode);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
