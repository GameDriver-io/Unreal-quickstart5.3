// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../ExampleSettings.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeExampleSettings() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings();
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UExampleSettings_NoRegister();
	UPackage* Z_Construct_UPackage__Script_HPathDebugger();
// End Cross Module References
	void UExampleSettings::StaticRegisterNativesUExampleSettings()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UExampleSettings);
	UClass* Z_Construct_UClass_UExampleSettings_NoRegister()
	{
		return UExampleSettings::StaticClass();
	}
	struct Z_Construct_UClass_UExampleSettings_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_bTest_MetaData[];
#endif
		static void NewProp_bTest_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_bTest;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UExampleSettings_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_HPathDebugger,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleSettings_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "ExampleSettings.h" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData[] = {
		{ "Category", "Test" },
		{ "ModuleRelativePath", "ExampleSettings.h" },
	};
#endif
	void Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit(void* Obj)
	{
		((UExampleSettings*)Obj)->bTest = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest = { "bTest", nullptr, (EPropertyFlags)0x0040000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, nullptr, nullptr, sizeof(bool), sizeof(UExampleSettings), &Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_SetBit, METADATA_PARAMS(Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_UExampleSettings_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_UExampleSettings_Statics::NewProp_bTest,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_UExampleSettings_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UExampleSettings>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UExampleSettings_Statics::ClassParams = {
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
		if (!Z_Registration_Info_UClass_UExampleSettings.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UExampleSettings.OuterSingleton, Z_Construct_UClass_UExampleSettings_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UExampleSettings.OuterSingleton;
	}
	template<> HPATHDEBUGGER_API UClass* StaticClass<UExampleSettings>()
	{
		return UExampleSettings::StaticClass();
	}
	UExampleSettings::UExampleSettings(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UExampleSettings);
	UExampleSettings::~UExampleSettings() {}
	struct Z_CompiledInDeferFile_FID_Builds_5_2_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_5_2_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UExampleSettings, UExampleSettings::StaticClass, TEXT("UExampleSettings"), &Z_Registration_Info_UClass_UExampleSettings, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UExampleSettings), 3952688181U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Builds_5_2_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_332142827(TEXT("/Script/HPathDebugger"),
		Z_CompiledInDeferFile_FID_Builds_5_2_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Builds_5_2_GameDriver_HostProject_Plugins_GameDriver_Source_Editor_ExampleSettings_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
