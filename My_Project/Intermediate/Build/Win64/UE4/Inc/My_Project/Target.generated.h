// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_PROJECT_Target_generated_h
#error "Target.generated.h already included, missing '#pragma once' in Target.h"
#endif
#define MY_PROJECT_Target_generated_h

#define My_Project_Source_My_Project_Target_h_12_SPARSE_DATA
#define My_Project_Source_My_Project_Target_h_12_RPC_WRAPPERS
#define My_Project_Source_My_Project_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS
#define My_Project_Source_My_Project_Target_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define My_Project_Source_My_Project_Target_h_12_INCLASS \
private: \
	static void StaticRegisterNativesATarget(); \
	friend struct Z_Construct_UClass_ATarget_Statics; \
public: \
	DECLARE_CLASS(ATarget, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(ATarget)


#define My_Project_Source_My_Project_Target_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ATarget(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ATarget) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public:


#define My_Project_Source_My_Project_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ATarget(ATarget&&); \
	NO_API ATarget(const ATarget&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ATarget); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ATarget); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ATarget)


#define My_Project_Source_My_Project_Target_h_12_PRIVATE_PROPERTY_OFFSET
#define My_Project_Source_My_Project_Target_h_9_PROLOG
#define My_Project_Source_My_Project_Target_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_Target_h_12_SPARSE_DATA \
	My_Project_Source_My_Project_Target_h_12_RPC_WRAPPERS \
	My_Project_Source_My_Project_Target_h_12_INCLASS \
	My_Project_Source_My_Project_Target_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define My_Project_Source_My_Project_Target_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_Target_h_12_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_Target_h_12_SPARSE_DATA \
	My_Project_Source_My_Project_Target_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	My_Project_Source_My_Project_Target_h_12_INCLASS_NO_PURE_DECLS \
	My_Project_Source_My_Project_Target_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_PROJECT_API UClass* StaticClass<class ATarget>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID My_Project_Source_My_Project_Target_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
