// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Editor/Public/BPGDIOAgent.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeBPGDIOAgent() {}
// Cross Module References
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UBPGDIOAgent_NoRegister();
	HPATHDEBUGGER_API UClass* Z_Construct_UClass_UBPGDIOAgent();
	ENGINE_API UClass* Z_Construct_UClass_UBlueprintFunctionLibrary();
	UPackage* Z_Construct_UPackage__Script_HPathDebugger();
// End Cross Module References
	DEFINE_FUNCTION(UBPGDIOAgent::execimportDLL)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_folder);
		P_GET_PROPERTY(FStrProperty,Z_Param_name);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBPGDIOAgent::importDLL(Z_Param_folder,Z_Param_name);
		P_NATIVE_END;
	}
	void UBPGDIOAgent::StaticRegisterNativesUBPGDIOAgent()
	{
		UClass* Class = UBPGDIOAgent::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "importDLL", &UBPGDIOAgent::execimportDLL },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics
	{
		struct BPGDIOAgent_eventimportDLL_Parms
		{
			FString folder;
			FString name;
			bool ReturnValue;
		};
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_folder;
		static const UE4CodeGen_Private::FStrPropertyParams NewProp_name;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_folder = { "folder", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPGDIOAgent_eventimportDLL_Parms, folder), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_name = { "name", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(BPGDIOAgent_eventimportDLL_Parms, name), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BPGDIOAgent_eventimportDLL_Parms*)Obj)->ReturnValue = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(BPGDIOAgent_eventimportDLL_Parms), &Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_folder,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_name,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::Function_MetaDataParams[] = {
		{ "Category", "My DLL Library" },
		{ "ModuleRelativePath", "Public/BPGDIOAgent.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBPGDIOAgent, nullptr, "importDLL", nullptr, nullptr, sizeof(BPGDIOAgent_eventimportDLL_Parms), Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UBPGDIOAgent_importDLL()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UBPGDIOAgent_importDLL_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UBPGDIOAgent_NoRegister()
	{
		return UBPGDIOAgent::StaticClass();
	}
	struct Z_Construct_UClass_UBPGDIOAgent_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBPGDIOAgent_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UBlueprintFunctionLibrary,
		(UObject* (*)())Z_Construct_UPackage__Script_HPathDebugger,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UBPGDIOAgent_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBPGDIOAgent_importDLL, "importDLL" }, // 3616824063
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBPGDIOAgent_Statics::Class_MetaDataParams[] = {
		{ "Comment", "/**\n * \n */" },
		{ "IncludePath", "BPGDIOAgent.h" },
		{ "ModuleRelativePath", "Public/BPGDIOAgent.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBPGDIOAgent_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBPGDIOAgent>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UBPGDIOAgent_Statics::ClassParams = {
		&UBPGDIOAgent::StaticClass,
		nullptr,
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		0,
		0,
		0x001000A0u,
		METADATA_PARAMS(Z_Construct_UClass_UBPGDIOAgent_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UBPGDIOAgent_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UBPGDIOAgent()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UBPGDIOAgent_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UBPGDIOAgent, 3994275203);
	template<> HPATHDEBUGGER_API UClass* StaticClass<UBPGDIOAgent>()
	{
		return UBPGDIOAgent::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UBPGDIOAgent(Z_Construct_UClass_UBPGDIOAgent, &UBPGDIOAgent::StaticClass, TEXT("/Script/HPathDebugger"), TEXT("UBPGDIOAgent"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBPGDIOAgent);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
