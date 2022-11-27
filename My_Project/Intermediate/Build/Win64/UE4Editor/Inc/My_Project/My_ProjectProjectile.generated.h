// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UPrimitiveComponent;
class AActor;
struct FVector;
struct FHitResult;
#ifdef MY_PROJECT_My_ProjectProjectile_generated_h
#error "My_ProjectProjectile.generated.h already included, missing '#pragma once' in My_ProjectProjectile.h"
#endif
#define MY_PROJECT_My_ProjectProjectile_generated_h

#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_SPARSE_DATA
#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnHit);


#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnHit);


#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy_ProjectProjectile(); \
	friend struct Z_Construct_UClass_AMy_ProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMy_ProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(AMy_ProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAMy_ProjectProjectile(); \
	friend struct Z_Construct_UClass_AMy_ProjectProjectile_Statics; \
public: \
	DECLARE_CLASS(AMy_ProjectProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(AMy_ProjectProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy_ProjectProjectile(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy_ProjectProjectile) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_ProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_ProjectProjectile); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_ProjectProjectile(AMy_ProjectProjectile&&); \
	NO_API AMy_ProjectProjectile(const AMy_ProjectProjectile&); \
public:


#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_ProjectProjectile(AMy_ProjectProjectile&&); \
	NO_API AMy_ProjectProjectile(const AMy_ProjectProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_ProjectProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_ProjectProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy_ProjectProjectile)


#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__CollisionComp() { return STRUCT_OFFSET(AMy_ProjectProjectile, CollisionComp); } \
	FORCEINLINE static uint32 __PPO__ProjectileMovement() { return STRUCT_OFFSET(AMy_ProjectProjectile, ProjectileMovement); }


#define My_Project_Source_My_Project_My_ProjectProjectile_h_12_PROLOG
#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_SPARSE_DATA \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_RPC_WRAPPERS \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_INCLASS \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define My_Project_Source_My_Project_My_ProjectProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_SPARSE_DATA \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_INCLASS_NO_PURE_DECLS \
	My_Project_Source_My_Project_My_ProjectProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_PROJECT_API UClass* StaticClass<class AMy_ProjectProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID My_Project_Source_My_Project_My_ProjectProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
