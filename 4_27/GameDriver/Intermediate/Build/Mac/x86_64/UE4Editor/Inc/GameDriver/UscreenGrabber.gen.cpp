// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "GameDriver/Public/UscreenGrabber.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUscreenGrabber() {}
// Cross Module References
	GAMEDRIVER_API UClass* Z_Construct_UClass_UscreenGrabber_NoRegister();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UscreenGrabber();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References
	void UscreenGrabber::StaticRegisterNativesUscreenGrabber()
	{
	}
	UClass* Z_Construct_UClass_UscreenGrabber_NoRegister()
	{
		return UscreenGrabber::StaticClass();
	}
	struct Z_Construct_UClass_UscreenGrabber_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UscreenGrabber_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UscreenGrabber_Statics::Class_MetaDataParams[] = {
		{ "BlueprintType", "true" },
		{ "IncludePath", "UscreenGrabber.h" },
		{ "IsBlueprintBase", "true" },
		{ "ModuleRelativePath", "Public/UscreenGrabber.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UscreenGrabber_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UscreenGrabber>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UscreenGrabber_Statics::ClassParams = {
		&UscreenGrabber::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x000000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UscreenGrabber_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UscreenGrabber_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UscreenGrabber()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UscreenGrabber_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UscreenGrabber, 2265285128);
	template<> GAMEDRIVER_API UClass* StaticClass<UscreenGrabber>()
	{
		return UscreenGrabber::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UscreenGrabber(Z_Construct_UClass_UscreenGrabber, &UscreenGrabber::StaticClass, TEXT("/Script/GameDriver"), TEXT("UscreenGrabber"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UscreenGrabber);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
