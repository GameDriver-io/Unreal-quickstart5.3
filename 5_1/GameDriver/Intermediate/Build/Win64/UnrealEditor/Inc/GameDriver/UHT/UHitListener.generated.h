// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "UHitListener.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GAMEDRIVER_UHitListener_generated_h
#error "UHitListener.generated.h already included, missing '#pragma once' in UHitListener.h"
#endif
#define GAMEDRIVER_UHitListener_generated_h

#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_SPARSE_DATA
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_RPC_WRAPPERS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execonActorHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execOnComponentEndOverlap); \
	DECLARE_FUNCTION(execOnActorEndOverlap); \
	DECLARE_FUNCTION(execOnComponentHit); \
	DECLARE_FUNCTION(execonActorHit); \
	DECLARE_FUNCTION(execOnComponentBeginOverlap); \
	DECLARE_FUNCTION(execOnActorOverlap);


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_ACCESSORS
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUHitListener(); \
	friend struct Z_Construct_UClass_UHitListener_Statics; \
public: \
	DECLARE_CLASS(UHitListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UHitListener)


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_INCLASS \
private: \
	static void StaticRegisterNativesUHitListener(); \
	friend struct Z_Construct_UClass_UHitListener_Statics; \
public: \
	DECLARE_CLASS(UHitListener, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UHitListener)


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UHitListener(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UHitListener) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitListener); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitListener(UHitListener&&); \
	NO_API UHitListener(const UHitListener&); \
public: \
	NO_API virtual ~UHitListener();


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UHitListener(UHitListener&&); \
	NO_API UHitListener(const UHitListener&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UHitListener); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UHitListener); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UHitListener) \
	NO_API virtual ~UHitListener();


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_10_PROLOG
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_RPC_WRAPPERS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_ACCESSORS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_INCLASS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_SPARSE_DATA \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_ACCESSORS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h_12_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDRIVER_API UClass* StaticClass<class UHitListener>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_UHitListener_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
