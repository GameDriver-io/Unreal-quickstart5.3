// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCLR/Public/AGDIO_OverlapHit.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeAGDIO_OverlapHit() {}
// Cross Module References
	UNREALCLR_API UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister();
	UNREALCLR_API UClass* Z_Construct_UClass_AGDIO_OverlapHit();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_UnrealCLR();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
// End Cross Module References
	void AGDIO_OverlapHit::StaticRegisterNativesAGDIO_OverlapHit()
	{
	}
	UClass* Z_Construct_UClass_AGDIO_OverlapHit_NoRegister()
	{
		return AGDIO_OverlapHit::StaticClass();
	}
	struct Z_Construct_UClass_AGDIO_OverlapHit_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_id_MetaData[];
#endif
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_id;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hit_MetaData[];
#endif
		static void NewProp_hit_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_hit;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_hitResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_hitResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AGDIO_OverlapHit_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCLR,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "AGDIO_OverlapHit.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id = { "id", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGDIO_OverlapHit, id), METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	void Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit(void* Obj)
	{
		((AGDIO_OverlapHit*)Obj)->hit = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit = { "hit", nullptr, (EPropertyFlags)0x0010000000000001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(AGDIO_OverlapHit), &Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_SetBit, METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit_MetaData)) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData[] = {
		{ "Category", "gamedriver" },
		{ "ModuleRelativePath", "Public/AGDIO_OverlapHit.h" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult = { "hitResult", nullptr, (EPropertyFlags)0x0010008000000001, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(AGDIO_OverlapHit, hitResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AGDIO_OverlapHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_id,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hit,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AGDIO_OverlapHit_Statics::NewProp_hitResult,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AGDIO_OverlapHit_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGDIO_OverlapHit>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams = {
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
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_AGDIO_OverlapHit_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(AGDIO_OverlapHit, 2227415790);
	template<> UNREALCLR_API UClass* StaticClass<AGDIO_OverlapHit>()
	{
		return AGDIO_OverlapHit::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_AGDIO_OverlapHit(Z_Construct_UClass_AGDIO_OverlapHit, &AGDIO_OverlapHit::StaticClass, TEXT("/Script/UnrealCLR"), TEXT("AGDIO_OverlapHit"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(AGDIO_OverlapHit);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
