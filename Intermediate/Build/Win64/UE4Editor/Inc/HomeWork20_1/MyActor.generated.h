// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef HOMEWORK20_1_MyActor_generated_h
#error "MyActor.generated.h already included, missing '#pragma once' in MyActor.h"
#endif
#define HOMEWORK20_1_MyActor_generated_h

#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_SPARSE_DATA
#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_RPC_WRAPPERS
#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS
#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork20_1"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_INCLASS \
private: \
	static void StaticRegisterNativesAMyActor(); \
	friend struct Z_Construct_UClass_AMyActor_Statics; \
public: \
	DECLARE_CLASS(AMyActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/HomeWork20_1"), NO_API) \
	DECLARE_SERIALIZER(AMyActor)


#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API AMyActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AMyActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public:


#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API AMyActor(AMyActor&&); \
	NO_API AMyActor(const AMyActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, AMyActor); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AMyActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AMyActor)


#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_PRIVATE_PROPERTY_OFFSET
#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_17_PROLOG
#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_PRIVATE_PROPERTY_OFFSET \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_SPARSE_DATA \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_RPC_WRAPPERS \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_INCLASS \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_PRIVATE_PROPERTY_OFFSET \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_SPARSE_DATA \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_RPC_WRAPPERS_NO_PURE_DECLS \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_INCLASS_NO_PURE_DECLS \
	HomeWork20_1_Source_HomeWork20_1_MyActor_h_20_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> HOMEWORK20_1_API UClass* StaticClass<class AMyActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID HomeWork20_1_Source_HomeWork20_1_MyActor_h


#define FOREACH_ENUM_EEXAMPLE(op) \
	op(EExample::E_RED) \
	op(EExample::E_GREEN) \
	op(EExample::E_BLUE) 

enum class EExample : uint8;
template<> HOMEWORK20_1_API UEnum* StaticEnum<EExample>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
