// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "My_Project/My_ProjectHUD.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMy_ProjectHUD() {}
// Cross Module References
	MY_PROJECT_API UClass* Z_Construct_UClass_AMy_ProjectHUD_NoRegister();
	MY_PROJECT_API UClass* Z_Construct_UClass_AMy_ProjectHUD();
	ENGINE_API UClass* Z_Construct_UClass_AHUD();
	UPackage* Z_Construct_UPackage__Script_My_Project();
// End Cross Module References
	void AMy_ProjectHUD::StaticRegisterNativesAMy_ProjectHUD()
	{
	}
	UClass* Z_Construct_UClass_AMy_ProjectHUD_NoRegister()
	{
		return AMy_ProjectHUD::StaticClass();
	}
	struct Z_Construct_UClass_AMy_ProjectHUD_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMy_ProjectHUD_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AHUD,
		(UObject* (*)())Z_Construct_UPackage__Script_My_Project,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMy_ProjectHUD_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Rendering Actor Input Replication" },
		{ "IncludePath", "My_ProjectHUD.h" },
		{ "ModuleRelativePath", "My_ProjectHUD.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMy_ProjectHUD_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMy_ProjectHUD>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AMy_ProjectHUD_Statics::ClassParams = {
		&AMy_ProjectHUD::StaticClass,
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
		0x008002ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMy_ProjectHUD_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMy_ProjectHUD_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMy_ProjectHUD()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AMy_ProjectHUD_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AMy_ProjectHUD, 110186557);
	template<> MY_PROJECT_API UClass* StaticClass<AMy_ProjectHUD>()
	{
		return AMy_ProjectHUD::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AMy_ProjectHUD(Z_Construct_UClass_AMy_ProjectHUD, &AMy_ProjectHUD::StaticClass, TEXT("/Script/My_Project"), TEXT("AMy_ProjectHUD"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMy_ProjectHUD);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
