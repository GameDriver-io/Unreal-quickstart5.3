// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/ExampleSettings.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleSettings() {}
// Cross Module References
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings_NoRegister();
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_HPathDebugger();
// End Cross Module References
	void UExampleSettings::StaticRegisterNativesUExampleSettings()
	{
	}
	UClass* Z_Construct_UClass_UExampleSettings_NoRegister()
	{
		return UExampleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UExampleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_bTest_MetaData[];
#endif
		static void NewProp_bTest_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_bTest;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HPathDebugger,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleSettings.h" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
#endif
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit(void* Obj)
	{
		((UExampleSettings*)Obj)->bTest = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest = { "bTest", nullptr, (EPropertyFlags)0x0040000000004001, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UExampleSettings), &Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleSettings_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleSettings>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UExampleSettings_Statics::ClassParams = {
		&UExampleSettings::StaticClass,
		"EditorUserSettings",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_UExampleSettings_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::PropPointers),
		0,
		0x000000A6u,
		METADATA_PARAMS(Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UExampleSettings()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UExampleSettings_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UExampleSettings, 2818874787);
	template<> HPATHDEBUGGER_API UClass* StaticClass<UExampleSettings>()
	{
		return UExampleSettings::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UExampleSettings(Z_Construct_UClass_UExampleSettings, &UExampleSettings::StaticClass, TEXT("/Script/HPathDebugger"), TEXT("UExampleSettings"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleSettings);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
