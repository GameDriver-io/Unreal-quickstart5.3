// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "UnrealCLR/Public/UnrealCLRManager.h"
#ifdef _MSC_VER
#pragma warning (push)
#pragma warning (disable : 4883)
#endif
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeUnrealCLRManager() {}
// Cross Module References
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRManager_NoRegister();
	UNREALCLR_API UClass* Z_Construct_UClass_UUnrealCLRManager();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	UPackage* Z_Construct_UPackage__Script_UnrealCLR();
	ENGINE_API UClass* Z_Construct_UClass_AActor_NoRegister();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	ENGINE_API UScriptStruct* Z_Construct_UScriptStruct_FHitResult();
	ENGINE_API UClass* Z_Construct_UClass_UPrimitiveComponent_NoRegister();
// End Cross Module References
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentReleased)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentReleased(Z_Param_Component,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentClicked)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_GET_STRUCT(FKey,Z_Param_Key);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentClicked(Z_Param_Component,Z_Param_Key);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentEndCursorOver)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentEndCursorOver(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentBeginCursorOver)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_Component);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentBeginCursorOver(Z_Param_Component);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentHit)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_HitComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentHit(Z_Param_HitComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentEndOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentEndOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execComponentBeginOverlap)
	{
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OverlapComponent);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_OBJECT(UPrimitiveComponent,Z_Param_OtherComponent);
		P_GET_PROPERTY(FIntProperty,Z_Param_OtherBodyIndex);
		P_GET_UBOOL(Z_Param_FromSweep);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_SweepResult);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ComponentBeginOverlap(Z_Param_OverlapComponent,Z_Param_OtherActor,Z_Param_OtherComponent,Z_Param_OtherBodyIndex,Z_Param_FromSweep,Z_Param_Out_SweepResult);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorReleased)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FKey,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorReleased(Z_Param_Actor,Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorClicked)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_GET_STRUCT(FKey,Z_Param_Button);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorClicked(Z_Param_Actor,Z_Param_Button);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorEndCursorOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndCursorOver(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorBeginCursorOver)
	{
		P_GET_OBJECT(AActor,Z_Param_Actor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginCursorOver(Z_Param_Actor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorHit)
	{
		P_GET_OBJECT(AActor,Z_Param_HitActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_GET_STRUCT(FVector,Z_Param_NormalImpulse);
		P_GET_STRUCT_REF(FHitResult,Z_Param_Out_Hit);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorHit(Z_Param_HitActor,Z_Param_OtherActor,Z_Param_NormalImpulse,Z_Param_Out_Hit);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorEndOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorEndOverlap(Z_Param_OverlapActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UUnrealCLRManager::execActorBeginOverlap)
	{
		P_GET_OBJECT(AActor,Z_Param_OverlapActor);
		P_GET_OBJECT(AActor,Z_Param_OtherActor);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->ActorBeginOverlap(Z_Param_OverlapActor,Z_Param_OtherActor);
		P_NATIVE_END;
	}
	void UUnrealCLRManager::StaticRegisterNativesUUnrealCLRManager()
	{
		UClass* Class = UUnrealCLRManager::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "ActorBeginCursorOver", &UUnrealCLRManager::execActorBeginCursorOver },
			{ "ActorBeginOverlap", &UUnrealCLRManager::execActorBeginOverlap },
			{ "ActorClicked", &UUnrealCLRManager::execActorClicked },
			{ "ActorEndCursorOver", &UUnrealCLRManager::execActorEndCursorOver },
			{ "ActorEndOverlap", &UUnrealCLRManager::execActorEndOverlap },
			{ "ActorHit", &UUnrealCLRManager::execActorHit },
			{ "ActorReleased", &UUnrealCLRManager::execActorReleased },
			{ "ComponentBeginCursorOver", &UUnrealCLRManager::execComponentBeginCursorOver },
			{ "ComponentBeginOverlap", &UUnrealCLRManager::execComponentBeginOverlap },
			{ "ComponentClicked", &UUnrealCLRManager::execComponentClicked },
			{ "ComponentEndCursorOver", &UUnrealCLRManager::execComponentEndCursorOver },
			{ "ComponentEndOverlap", &UUnrealCLRManager::execComponentEndOverlap },
			{ "ComponentHit", &UUnrealCLRManager::execComponentHit },
			{ "ComponentReleased", &UUnrealCLRManager::execComponentReleased },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics
	{
		struct UnrealCLRManager_eventActorBeginCursorOver_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorBeginCursorOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorBeginCursorOver", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorBeginCursorOver_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics
	{
		struct UnrealCLRManager_eventActorBeginOverlap_Parms
		{
			AActor* OverlapActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::NewProp_OverlapActor = { "OverlapActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorBeginOverlap_Parms, OverlapActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::NewProp_OverlapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorBeginOverlap", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorBeginOverlap_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics
	{
		struct UnrealCLRManager_eventActorClicked_Parms
		{
			AActor* Actor;
			FKey Button;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorClicked_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorClicked_Parms, Button), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorClicked", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorClicked_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics
	{
		struct UnrealCLRManager_eventActorEndCursorOver_Parms
		{
			AActor* Actor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorEndCursorOver_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::NewProp_Actor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorEndCursorOver", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorEndCursorOver_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics
	{
		struct UnrealCLRManager_eventActorEndOverlap_Parms
		{
			AActor* OverlapActor;
			AActor* OtherActor;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::NewProp_OverlapActor = { "OverlapActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorEndOverlap_Parms, OverlapActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::NewProp_OverlapActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::NewProp_OtherActor,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorEndOverlap", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorEndOverlap_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics
	{
		struct UnrealCLRManager_eventActorHit_Parms
		{
			AActor* HitActor;
			AActor* OtherActor;
			FVector NormalImpulse;
			FHitResult Hit;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitActor;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_HitActor = { "HitActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorHit_Parms, HitActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_HitActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorHit", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorHit_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics
	{
		struct UnrealCLRManager_eventActorReleased_Parms
		{
			AActor* Actor;
			FKey Button;
		};
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Actor;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Button;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::NewProp_Actor = { "Actor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorReleased_Parms, Actor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::NewProp_Button = { "Button", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventActorReleased_Parms, Button), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::NewProp_Actor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::NewProp_Button,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ActorReleased", nullptr, nullptr, sizeof(UnrealCLRManager_eventActorReleased_Parms), Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ActorReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ActorReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics
	{
		struct UnrealCLRManager_eventComponentBeginCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentBeginCursorOver", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentBeginCursorOver_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics
	{
		struct UnrealCLRManager_eventComponentBeginOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
			bool FromSweep;
			FHitResult SweepResult;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static void NewProp_FromSweep_SetBit(void* Obj);
		static const UE4CodeGen_Private::FBoolPropertyParams NewProp_FromSweep;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_SweepResult_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_SweepResult;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OverlapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	void Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_FromSweep_SetBit(void* Obj)
	{
		((UnrealCLRManager_eventComponentBeginOverlap_Parms*)Obj)->FromSweep = 1;
	}
	const UE4CodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_FromSweep = { "FromSweep", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Bool | UE4CodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, 1, sizeof(bool), sizeof(UnrealCLRManager_eventComponentBeginOverlap_Parms), &Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_FromSweep_SetBit, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_SweepResult = { "SweepResult", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentBeginOverlap_Parms, SweepResult), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_SweepResult_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OverlapComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_OtherBodyIndex,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_FromSweep,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::NewProp_SweepResult,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentBeginOverlap", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentBeginOverlap_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00420401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics
	{
		struct UnrealCLRManager_eventComponentClicked_Parms
		{
			UPrimitiveComponent* Component;
			FKey Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentClicked_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentClicked_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentClicked", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentClicked_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics
	{
		struct UnrealCLRManager_eventComponentEndCursorOver_Parms
		{
			UPrimitiveComponent* Component;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentEndCursorOver_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::NewProp_Component,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentEndCursorOver", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentEndCursorOver_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics
	{
		struct UnrealCLRManager_eventComponentEndOverlap_Parms
		{
			UPrimitiveComponent* OverlapComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			int32 OtherBodyIndex;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OverlapComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OverlapComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FIntPropertyParams NewProp_OtherBodyIndex;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OverlapComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OverlapComponent = { "OverlapComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentEndOverlap_Parms, OverlapComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OverlapComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OverlapComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentEndOverlap_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentEndOverlap_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherBodyIndex = { "OtherBodyIndex", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentEndOverlap_Parms, OtherBodyIndex), METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OverlapComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::NewProp_OtherBodyIndex,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentEndOverlap", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentEndOverlap_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics
	{
		struct UnrealCLRManager_eventComponentHit_Parms
		{
			UPrimitiveComponent* HitComponent;
			AActor* OtherActor;
			UPrimitiveComponent* OtherComponent;
			FVector NormalImpulse;
			FHitResult Hit;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_HitComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_HitComponent;
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherActor;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_OtherComponent_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_OtherComponent;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_NormalImpulse;
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Hit_MetaData[];
#endif
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Hit;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_HitComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_HitComponent = { "HitComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentHit_Parms, HitComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_HitComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_HitComponent_MetaData)) };
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherActor = { "OtherActor", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentHit_Parms, OtherActor), Z_Construct_UClass_AActor_NoRegister, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherComponent_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherComponent = { "OtherComponent", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentHit_Parms, OtherComponent), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherComponent_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherComponent_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_NormalImpulse = { "NormalImpulse", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentHit_Parms, NormalImpulse), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(nullptr, 0) };
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_Hit_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_Hit = { "Hit", nullptr, (EPropertyFlags)0x0010008008000182, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentHit_Parms, Hit), Z_Construct_UScriptStruct_FHitResult, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_Hit_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_Hit_MetaData)) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_HitComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherActor,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_OtherComponent,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_NormalImpulse,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::NewProp_Hit,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentHit", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentHit_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00C20401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentHit()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentHit_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics
	{
		struct UnrealCLRManager_eventComponentReleased_Parms
		{
			UPrimitiveComponent* Component;
			FKey Key;
		};
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam NewProp_Component_MetaData[];
#endif
		static const UE4CodeGen_Private::FObjectPropertyParams NewProp_Component;
		static const UE4CodeGen_Private::FStructPropertyParams NewProp_Key;
		static const UE4CodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UE4CodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Component_MetaData[] = {
		{ "EditInline", "true" },
	};
#endif
	const UE4CodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Component = { "Component", nullptr, (EPropertyFlags)0x0010000000080080, UE4CodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentReleased_Parms, Component), Z_Construct_UClass_UPrimitiveComponent_NoRegister, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Component_MetaData, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Component_MetaData)) };
	const UE4CodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Key = { "Key", nullptr, (EPropertyFlags)0x0010000000000080, UE4CodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(UnrealCLRManager_eventComponentReleased_Parms, Key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(nullptr, 0) };
	const UE4CodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::PropPointers[] = {
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Component,
		(const UE4CodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::NewProp_Key,
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const UE4CodeGen_Private::FFunctionParams Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UUnrealCLRManager, nullptr, "ComponentReleased", nullptr, nullptr, sizeof(UnrealCLRManager_eventComponentReleased_Parms), Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::PropPointers), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x00020401, 0, 0, METADATA_PARAMS(Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::Function_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::Function_MetaDataParams)) };
	UFunction* Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UE4CodeGen_Private::ConstructUFunction(ReturnFunction, Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	UClass* Z_Construct_UClass_UUnrealCLRManager_NoRegister()
	{
		return UUnrealCLRManager::StaticClass();
	}
	struct Z_Construct_UClass_UUnrealCLRManager_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UE4CodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UE4CodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UUnrealCLRManager_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_UnrealCLR,
	};
	const FClassFunctionLinkInfo Z_Construct_UClass_UUnrealCLRManager_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorBeginCursorOver, "ActorBeginCursorOver" }, // 1358608423
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorBeginOverlap, "ActorBeginOverlap" }, // 2393175205
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorClicked, "ActorClicked" }, // 316068925
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorEndCursorOver, "ActorEndCursorOver" }, // 1282463839
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorEndOverlap, "ActorEndOverlap" }, // 2184559812
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorHit, "ActorHit" }, // 856449344
		{ &Z_Construct_UFunction_UUnrealCLRManager_ActorReleased, "ActorReleased" }, // 2482715998
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginCursorOver, "ComponentBeginCursorOver" }, // 3213836754
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentBeginOverlap, "ComponentBeginOverlap" }, // 3328877300
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentClicked, "ComponentClicked" }, // 2006255463
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentEndCursorOver, "ComponentEndCursorOver" }, // 2757772823
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentEndOverlap, "ComponentEndOverlap" }, // 36281115
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentHit, "ComponentHit" }, // 331092957
		{ &Z_Construct_UFunction_UUnrealCLRManager_ComponentReleased, "ComponentReleased" }, // 1837010140
	};
#if WITH_METADATA
	const UE4CodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UUnrealCLRManager_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "UnrealCLRManager.h" },
		{ "ModuleRelativePath", "Public/UnrealCLRManager.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UUnrealCLRManager_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UUnrealCLRManager>::IsAbstract,
	};
	const UE4CodeGen_Private::FClassParams Z_Construct_UClass_UUnrealCLRManager_Statics::ClassParams = {
		&UUnrealCLRManager::StaticClass,
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
		METADATA_PARAMS(Z_Construct_UClass_UUnrealCLRManager_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_UUnrealCLRManager_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_UUnrealCLRManager()
	{
		static UClass* OuterClass = nullptr;
		if (!OuterClass)
		{
			UE4CodeGen_Private::ConstructUClass(OuterClass, Z_Construct_UClass_UUnrealCLRManager_Statics::ClassParams);
		}
		return OuterClass;
	}
	IMPLEMENT_CLASS(UUnrealCLRManager, 2068076485);
	template<> UNREALCLR_API UClass* StaticClass<UUnrealCLRManager>()
	{
		return UUnrealCLRManager::StaticClass();
	}
	static FCompiledInDefer Z_CompiledInDefer_UClass_UUnrealCLRManager(Z_Construct_UClass_UUnrealCLRManager, &UUnrealCLRManager::StaticClass, TEXT("/Script/UnrealCLR"), TEXT("UUnrealCLRManager"), false, nullptr, nullptr, nullptr);
	DEFINE_VTABLE_PTR_HELPER_CTOR(UUnrealCLRManager);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
#ifdef _MSC_VER
#pragma warning (pop)
#endif
