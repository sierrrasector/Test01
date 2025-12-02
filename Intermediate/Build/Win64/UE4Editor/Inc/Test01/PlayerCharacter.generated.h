// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef TEST01_PlayerCharacter_generated_h
#error "PlayerCharacter.generated.h already included, missing '#pragma once' in PlayerCharacter.h"
#endif
#define TEST01_PlayerCharacter_generated_h

#define Test01_Source_Test01_PlayerCharacter_h_15_SPARSE_DATA
#define Test01_Source_Test01_PlayerCharacter_h_15_RPC_WRAPPERS
#define Test01_Source_Test01_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS
#define Test01_Source_Test01_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test01"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Test01_Source_Test01_PlayerCharacter_h_15_INCLASS \
private: \
	static void StaticRegisterNativesAPlayerCharacter(); \
	friend struct Z_Construct_UClass_APlayerCharacter_Statics; \
public: \
	DECLARE_CLASS(APlayerCharacter, ACharacter, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Test01"), NO_API) \
	DECLARE_SERIALIZER(APlayerCharacter)


#define Test01_Source_Test01_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API APlayerCharacter(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(APlayerCharacter) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public:


#define Test01_Source_Test01_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API APlayerCharacter(APlayerCharacter&&); \
	NO_API APlayerCharacter(const APlayerCharacter&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, APlayerCharacter); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(APlayerCharacter); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(APlayerCharacter)


#define Test01_Source_Test01_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	FORCEINLINE static uint32 __PPO__PlayerCamera() { return STRUCT_OFFSET(APlayerCharacter, PlayerCamera); }


#define Test01_Source_Test01_PlayerCharacter_h_11_PROLOG
#define Test01_Source_Test01_PlayerCharacter_h_15_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test01_Source_Test01_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Test01_Source_Test01_PlayerCharacter_h_15_SPARSE_DATA \
	Test01_Source_Test01_PlayerCharacter_h_15_RPC_WRAPPERS \
	Test01_Source_Test01_PlayerCharacter_h_15_INCLASS \
	Test01_Source_Test01_PlayerCharacter_h_15_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Test01_Source_Test01_PlayerCharacter_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Test01_Source_Test01_PlayerCharacter_h_15_PRIVATE_PROPERTY_OFFSET \
	Test01_Source_Test01_PlayerCharacter_h_15_SPARSE_DATA \
	Test01_Source_Test01_PlayerCharacter_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	Test01_Source_Test01_PlayerCharacter_h_15_INCLASS_NO_PURE_DECLS \
	Test01_Source_Test01_PlayerCharacter_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> TEST01_API UClass* StaticClass<class APlayerCharacter>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Test01_Source_Test01_PlayerCharacter_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
