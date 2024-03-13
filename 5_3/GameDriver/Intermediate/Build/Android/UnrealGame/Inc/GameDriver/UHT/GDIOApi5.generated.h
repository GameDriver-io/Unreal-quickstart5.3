// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "GDIOApi5.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class UObject;
enum class CoordinateConversionTypes : uint8;
enum class GDIO_HPATH_TYPES : uint8;
struct FKey;
#ifdef GAMEDRIVER_GDIOApi5_generated_h
#error "GDIOApi5.generated.h already included, missing '#pragma once' in GDIOApi5.h"
#endif
#define GAMEDRIVER_GDIOApi5_generated_h

#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_SPARSE_DATA
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
 \
	DECLARE_FUNCTION(execFloatInputEvent); \
	DECLARE_FUNCTION(execMouseDrag); \
	DECLARE_FUNCTION(execMouseMovetoObjectFromHPath); \
	DECLARE_FUNCTION(execMouseMovetoObject); \
	DECLARE_FUNCTION(execMouseMovetoPoint); \
	DECLARE_FUNCTION(execgetHierarchyPath); \
	DECLARE_FUNCTION(execClickObject); \
	DECLARE_FUNCTION(execClickObjectFromHPath); \
	DECLARE_FUNCTION(execClick); \
	DECLARE_FUNCTION(execKeyPress); \
	DECLARE_FUNCTION(execSetBoolFieldValue); \
	DECLARE_FUNCTION(execSetFloatFieldValue); \
	DECLARE_FUNCTION(execSetStringFieldValue); \
	DECLARE_FUNCTION(execSetIntFieldValue); \
	DECLARE_FUNCTION(execGetDoubleFieldValue); \
	DECLARE_FUNCTION(execGetBoolFieldValue); \
	DECLARE_FUNCTION(execGetStringFieldValue); \
	DECLARE_FUNCTION(execGetIntFieldValue); \
	DECLARE_FUNCTION(execGetObjectPosition); \
	DECLARE_FUNCTION(execGetObjectPositionWithHPath); \
	DECLARE_FUNCTION(execGetGameObject); \
	DECLARE_FUNCTION(execGetObjectList);


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_ACCESSORS
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUBP_GDIOAPI(); \
	friend struct Z_Construct_UClass_UBP_GDIOAPI_Statics; \
public: \
	DECLARE_CLASS(UBP_GDIOAPI, UObject, COMPILED_IN_FLAGS(0), CASTCLASS_None, TEXT("/Script/GameDriver"), NO_API) \
	DECLARE_SERIALIZER(UBP_GDIOAPI)


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_ENHANCED_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API UBP_GDIOAPI(const FObjectInitializer& ObjectInitializer = FObjectInitializer::Get()); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API UBP_GDIOAPI(UBP_GDIOAPI&&); \
	NO_API UBP_GDIOAPI(const UBP_GDIOAPI&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UBP_GDIOAPI); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UBP_GDIOAPI); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(UBP_GDIOAPI) \
	NO_API virtual ~UBP_GDIOAPI();


#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_23_PROLOG
#define FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_SPARSE_DATA \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_EDITOR_ONLY_SPARSE_DATA_PROPERTY_ACCESSORS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_ACCESSORS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_INCLASS_NO_PURE_DECLS \
	FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_25_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GAMEDRIVER_API UClass* StaticClass<class UBP_GDIOAPI>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h


#define FOREACH_ENUM_GDIO_HPATH_TYPES(op) \
	op(GDIO_HPATH_TYPES::Absolute) \
	op(GDIO_HPATH_TYPES::Relative) 

enum class GDIO_HPATH_TYPES : uint8;
template<> struct TIsUEnumClass<GDIO_HPATH_TYPES> { enum { Value = true }; };
template<> GAMEDRIVER_API UEnum* StaticEnum<GDIO_HPATH_TYPES>();

#define FOREACH_ENUM_COORDINATECONVERSIONTYPES(op) \
	op(CoordinateConversionTypes::None) \
	op(CoordinateConversionTypes::Local) \
	op(CoordinateConversionTypes::WorldToScreenPoint) \
	op(CoordinateConversionTypes::ScreenToWorldPoint) \
	op(CoordinateConversionTypes::ScreenToViewportPoint) 

enum class CoordinateConversionTypes : uint8;
template<> struct TIsUEnumClass<CoordinateConversionTypes> { enum { Value = true }; };
template<> GAMEDRIVER_API UEnum* StaticEnum<CoordinateConversionTypes>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
