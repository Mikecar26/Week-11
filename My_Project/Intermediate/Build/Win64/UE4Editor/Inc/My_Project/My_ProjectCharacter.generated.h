// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef MY_PROJECT_My_ProjectCharacter_generated_h
#error "My_ProjectCharacter.generated.h already included, missing '#pragma once' in My_ProjectCharacter.h"
#endif
#define MY_PROJECT_My_ProjectCharacter_generated_h

#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_SPARSE_DATA
#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_RPC_WRAPPERS
#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS
#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMy_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AMy_ProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMy_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(AMy_ProjectCharacter)


#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_INCLASS \
private: \
	static void StaticRegisterNativesAMy_ProjectCharacter(); \
	friend struct Z_Construct_UClass_AMy_ProjectCharacter_Statics; \
public: \
	DECLARE_CLASS(AMy_ProjectCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/My_Project"), NO_API) \
	DECLARE_SERIALIZER(AMy_ProjectCharacter)


#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMy_ProjectCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMy_ProjectCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_ProjectCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_ProjectCharacter(AMy_ProjectCharacter&&); \
	NO_API AMy_ProjectCharacter(const AMy_ProjectCharacter&); \
public:


#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMy_ProjectCharacter(AMy_ProjectCharacter&&); \
	NO_API AMy_ProjectCharacter(const AMy_ProjectCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMy_ProjectCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMy_ProjectCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMy_ProjectCharacter)


#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__Mesh1P() { return STRUCT_OFFSET(AMy_ProjectCharacter, Mesh1P); } \
	FORCEINLINE static uint32 __PPO__FP_Gun() { return STRUCT_OFFSET(AMy_ProjectCharacter, FP_Gun); } \
	FORCEINLINE static uint32 __PPO__FP_MuzzleLocation() { return STRUCT_OFFSET(AMy_ProjectCharacter, FP_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__VR_Gun() { return STRUCT_OFFSET(AMy_ProjectCharacter, VR_Gun); } \
	FORCEINLINE static uint32 __PPO__VR_MuzzleLocation() { return STRUCT_OFFSET(AMy_ProjectCharacter, VR_MuzzleLocation); } \
	FORCEINLINE static uint32 __PPO__FirstPersonCameraComponent() { return STRUCT_OFFSET(AMy_ProjectCharacter, FirstPersonCameraComponent); } \
	FORCEINLINE static uint32 __PPO__R_MotionController() { return STRUCT_OFFSET(AMy_ProjectCharacter, R_MotionController); } \
	FORCEINLINE static uint32 __PPO__L_MotionController() { return STRUCT_OFFSET(AMy_ProjectCharacter, L_MotionController); } \
	FORCEINLINE static uint32 __PPO__target() { return STRUCT_OFFSET(AMy_ProjectCharacter, target); }


#define My_Project_Source_My_Project_My_ProjectCharacter_h_19_PROLOG
#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_SPARSE_DATA \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_RPC_WRAPPERS \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_INCLASS \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define My_Project_Source_My_Project_My_ProjectCharacter_h_22_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_PRIVATE_PROPERTY_OFFSET \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_SPARSE_DATA \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_RPC_WRAPPERS_NO_PURE_DECLS \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_INCLASS_NO_PURE_DECLS \
	My_Project_Source_My_Project_My_ProjectCharacter_h_22_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> MY_PROJECT_API UClass* StaticClass<class AMy_ProjectCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID My_Project_Source_My_Project_My_ProjectCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
