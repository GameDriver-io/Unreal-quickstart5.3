// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/AGDIO_OverlapHit.h"
#include "Engine/Classes/Engine/HitResult.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGDIO_OverlapHit() {}
// Cross Module References
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	GAMEDRIVER_API UClass* Z_Construct_UClass_AGDIO_OverlapHit();
	GAMEDRIVER_API UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister();
	UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References
	void AGDIO_OverlapHit::StaticRegisterNativesAGDIO_OverlapHit()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGDIO_OverlapHit);
	UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister()
	{
		return AGDIO_OverlapHit::StaticClass();
	}
	struct Z_Construct_UClass_AGDIO_OverlapHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UECodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static void NewProp_hit_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_hit;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UECodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGDIO_OverlapHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AGDIO_OverlapHit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGDIO_OverlapHit, id), METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	void Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit(void* Obj)
	{
		((AGDIO_OverlapHit*)Obj)->hit = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(AGDIO_OverlapHit), &Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008000000001, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, STRUCT_OFFSET(AGDIO_OverlapHit, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData)) }; // 1287526515
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGDIO_OverlapHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGDIO_OverlapHit>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams = {
		&AGDIO_OverlapHit::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers),
		0,
		0x008000A4u,
		METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AGDIO_OverlapHit()
	{
		if (!Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton, Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AGDIO_OverlapHit.OuterSingleton;
	}
	template<> GAMEDRIVER_API UClass* StaticClass<AGDIO_OverlapHit>()
	{
		return AGDIO_OverlapHit::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGDIO_OverlapHit);
	AGDIO_OverlapHit::~AGDIO_OverlapHit() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AGDIO_OverlapHit, AGDIO_OverlapHit::StaticClass, TEXT("AGDIO_OverlapHit"), &Z_Registration_Info_UClass_AGDIO_OverlapHit, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGDIO_OverlapHit), 2254388859U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_952555978(TEXT("/Script/GameDriver"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_AGDIO_OverlapHit_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
