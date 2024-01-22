// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "../GameDriver/Public/GDIOApi5.h"
#include "InputCoreTypes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGDIOApi5() {}
// Cross Module References
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject();
	COREUOBJECT_API UClass* Z_Construct_UClass_UObject_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UBP_GDIOAPI();
	GAMEDRIVER_API UClass* Z_Construct_UClass_UBP_GDIOAPI_NoRegister();
	GAMEDRIVER_API UEnum* Z_Construct_UEnum_GameDriver_CoordinateConversionTypes();
	GAMEDRIVER_API UEnum* Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES();
	INPUTCORE_API UScriptStruct* Z_Construct_UScriptStruct_FKey();
	UPackage* Z_Construct_UPackage__Script_GameDriver();
// End Cross Module References
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_GDIO_HPATH_TYPES;
	static UEnum* GDIO_HPATH_TYPES_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.OuterSingleton)
		{
			Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES, (UObject*)Z_Construct_UPackage__Script_GameDriver(), TEXT("GDIO_HPATH_TYPES"));
		}
		return Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.OuterSingleton;
	}
	template<> GAMEDRIVER_API UEnum* StaticEnum<GDIO_HPATH_TYPES>()
	{
		return GDIO_HPATH_TYPES_StaticEnum();
	}
	struct Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enumerators[] = {
		{ "GDIO_HPATH_TYPES::Absolute", (int64)GDIO_HPATH_TYPES::Absolute },
		{ "GDIO_HPATH_TYPES::Relative", (int64)GDIO_HPATH_TYPES::Relative },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enum_MetaDataParams[] = {
		{ "Absolute.Name", "GDIO_HPATH_TYPES::Absolute" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "Relative.Name", "GDIO_HPATH_TYPES::Relative" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameDriver,
		nullptr,
		"GDIO_HPATH_TYPES",
		"GDIO_HPATH_TYPES",
		Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES()
	{
		if (!Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.InnerSingleton, Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_GDIO_HPATH_TYPES.InnerSingleton;
	}
	static FEnumRegistrationInfo Z_Registration_Info_UEnum_CoordinateConversionTypes;
	static UEnum* CoordinateConversionTypes_StaticEnum()
	{
		if (!Z_Registration_Info_UEnum_CoordinateConversionTypes.OuterSingleton)
		{
			Z_Registration_Info_UEnum_CoordinateConversionTypes.OuterSingleton = GetStaticEnum(Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, (UObject*)Z_Construct_UPackage__Script_GameDriver(), TEXT("CoordinateConversionTypes"));
		}
		return Z_Registration_Info_UEnum_CoordinateConversionTypes.OuterSingleton;
	}
	template<> GAMEDRIVER_API UEnum* StaticEnum<CoordinateConversionTypes>()
	{
		return CoordinateConversionTypes_StaticEnum();
	}
	struct Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics
	{
		static const UECodeGen_Private::FEnumeratorParam Enumerators[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Enum_MetaDataParams[];
#endif
		static const UECodeGen_Private::FEnumParams EnumParams;
	};
	const UECodeGen_Private::FEnumeratorParam Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enumerators[] = {
		{ "CoordinateConversionTypes::None", (int64)CoordinateConversionTypes::None },
		{ "CoordinateConversionTypes::Local", (int64)CoordinateConversionTypes::Local },
		{ "CoordinateConversionTypes::WorldToScreenPoint", (int64)CoordinateConversionTypes::WorldToScreenPoint },
		{ "CoordinateConversionTypes::ScreenToWorldPoint", (int64)CoordinateConversionTypes::ScreenToWorldPoint },
		{ "CoordinateConversionTypes::ScreenToViewportPoint", (int64)CoordinateConversionTypes::ScreenToViewportPoint },
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enum_MetaDataParams[] = {
		{ "Local.Name", "CoordinateConversionTypes::Local" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "None.Name", "CoordinateConversionTypes::None" },
		{ "ScreenToViewportPoint.Name", "CoordinateConversionTypes::ScreenToViewportPoint" },
		{ "ScreenToWorldPoint.Name", "CoordinateConversionTypes::ScreenToWorldPoint" },
		{ "WorldToScreenPoint.Name", "CoordinateConversionTypes::WorldToScreenPoint" },
	};
#endif
	const UECodeGen_Private::FEnumParams Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::EnumParams = {
		(UObject*(*)())Z_Construct_UPackage__Script_GameDriver,
		nullptr,
		"CoordinateConversionTypes",
		"CoordinateConversionTypes",
		Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enumerators,
		RF_Public|RF_Transient|RF_MarkAsNative,
		UE_ARRAY_COUNT(Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enumerators),
		EEnumFlags::None,
		(uint8)UEnum::ECppForm::EnumClass,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enum_MetaDataParams), Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::Enum_MetaDataParams)
	};
	UEnum* Z_Construct_UEnum_GameDriver_CoordinateConversionTypes()
	{
		if (!Z_Registration_Info_UEnum_CoordinateConversionTypes.InnerSingleton)
		{
			UECodeGen_Private::ConstructUEnum(Z_Registration_Info_UEnum_CoordinateConversionTypes.InnerSingleton, Z_Construct_UEnum_GameDriver_CoordinateConversionTypes_Statics::EnumParams);
		}
		return Z_Registration_Info_UEnum_CoordinateConversionTypes.InnerSingleton;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execFloatInputEvent)
	{
		P_GET_STRUCT(FKey,Z_Param_key);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::FloatInputEvent(Z_Param_key,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseDrag)
	{
		P_GET_STRUCT(FKey,Z_Param_MouseButton);
		P_GET_STRUCT(FVector2D,Z_Param_destination);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_GET_STRUCT(FVector2D,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseDrag(Z_Param_MouseButton,Z_Param_destination,Z_Param_frameCount,Z_Param_origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoObjectFromHPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoObjectFromHPath(Z_Param_HPath,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoObject)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoObject(Z_Param_obj,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execMouseMovetoPoint)
	{
		P_GET_STRUCT(FVector2D,Z_Param_destination);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_GET_STRUCT(FVector2D,Z_Param_origin);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::MouseMovetoPoint(Z_Param_destination,Z_Param_frameCount,Z_Param_origin);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execgetHierarchyPath)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_ENUM(GDIO_HPATH_TYPES,Z_Param_type);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FString*)Z_Param__Result=UBP_GDIOAPI::getHierarchyPath(Z_Param_obj,GDIO_HPATH_TYPES(Z_Param_type));
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClickObject)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::ClickObject(Z_Param_mouseButton,Z_Param_obj,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClickObjectFromHPath)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::ClickObjectFromHPath(Z_Param_mouseButton,Z_Param_HPath,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execClick)
	{
		P_GET_STRUCT(FKey,Z_Param_mouseButton);
		P_GET_STRUCT(FVector2D,Z_Param_loc);
		P_GET_PROPERTY(FIntProperty,Z_Param_frameCount);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::Click(Z_Param_mouseButton,Z_Param_loc,Z_Param_frameCount);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execKeyPress)
	{
		P_GET_TARRAY(FKey,Z_Param_keys);
		P_GET_PROPERTY(FIntProperty,Z_Param_numberOfFrames);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::KeyPress(Z_Param_keys,Z_Param_numberOfFrames);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetBoolFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_UBOOL(Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetBoolFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetFloatFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FDoubleProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetFloatFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetStringFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FStrProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetStringFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execSetIntFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY(FIntProperty,Z_Param_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::SetIntFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetDoubleFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FDoubleProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetDoubleFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetBoolFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_UBOOL_REF(Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetBoolFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetStringFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FStrProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetStringFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetIntFieldValue)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_GET_PROPERTY(FStrProperty,Z_Param_field);
		P_GET_PROPERTY_REF(FIntProperty,Z_Param_Out_value);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(bool*)Z_Param__Result=UBP_GDIOAPI::GetIntFieldValue(Z_Param_hierarchyPath,Z_Param_field,Z_Param_Out_value);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectPosition)
	{
		P_GET_OBJECT(UObject,Z_Param_obj);
		P_GET_ENUM(CoordinateConversionTypes,Z_Param_coordinateSpace);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBP_GDIOAPI::GetObjectPosition(Z_Param_obj,CoordinateConversionTypes(Z_Param_coordinateSpace),Z_Param_Out_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectPositionWithHPath)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_HPath);
		P_GET_ENUM(CoordinateConversionTypes,Z_Param_coordinateSpace);
		P_GET_UBOOL_REF(Z_Param_Out_valid);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=UBP_GDIOAPI::GetObjectPositionWithHPath(Z_Param_HPath,CoordinateConversionTypes(Z_Param_coordinateSpace),Z_Param_Out_valid);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetGameObject)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(UObject**)Z_Param__Result=UBP_GDIOAPI::GetGameObject(Z_Param_hierarchyPath);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(UBP_GDIOAPI::execGetObjectList)
	{
		P_GET_PROPERTY(FStrProperty,Z_Param_hierarchyPath);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(TArray<UObject*>*)Z_Param__Result=UBP_GDIOAPI::GetObjectList(Z_Param_hierarchyPath);
		P_NATIVE_END;
	}
	void UBP_GDIOAPI::StaticRegisterNativesUBP_GDIOAPI()
	{
		UClass* Class = UBP_GDIOAPI::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "Click", &UBP_GDIOAPI::execClick },
			{ "ClickObject", &UBP_GDIOAPI::execClickObject },
			{ "ClickObjectFromHPath", &UBP_GDIOAPI::execClickObjectFromHPath },
			{ "FloatInputEvent", &UBP_GDIOAPI::execFloatInputEvent },
			{ "GetBoolFieldValue", &UBP_GDIOAPI::execGetBoolFieldValue },
			{ "GetDoubleFieldValue", &UBP_GDIOAPI::execGetDoubleFieldValue },
			{ "GetGameObject", &UBP_GDIOAPI::execGetGameObject },
			{ "getHierarchyPath", &UBP_GDIOAPI::execgetHierarchyPath },
			{ "GetIntFieldValue", &UBP_GDIOAPI::execGetIntFieldValue },
			{ "GetObjectList", &UBP_GDIOAPI::execGetObjectList },
			{ "GetObjectPosition", &UBP_GDIOAPI::execGetObjectPosition },
			{ "GetObjectPositionWithHPath", &UBP_GDIOAPI::execGetObjectPositionWithHPath },
			{ "GetStringFieldValue", &UBP_GDIOAPI::execGetStringFieldValue },
			{ "KeyPress", &UBP_GDIOAPI::execKeyPress },
			{ "MouseDrag", &UBP_GDIOAPI::execMouseDrag },
			{ "MouseMovetoObject", &UBP_GDIOAPI::execMouseMovetoObject },
			{ "MouseMovetoObjectFromHPath", &UBP_GDIOAPI::execMouseMovetoObjectFromHPath },
			{ "MouseMovetoPoint", &UBP_GDIOAPI::execMouseMovetoPoint },
			{ "SetBoolFieldValue", &UBP_GDIOAPI::execSetBoolFieldValue },
			{ "SetFloatFieldValue", &UBP_GDIOAPI::execSetFloatFieldValue },
			{ "SetIntFieldValue", &UBP_GDIOAPI::execSetIntFieldValue },
			{ "SetStringFieldValue", &UBP_GDIOAPI::execSetStringFieldValue },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics
	{
		struct BP_GDIOAPI_eventClick_Parms
		{
			FKey mouseButton;
			FVector2D loc;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_loc;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_loc = { "loc", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, loc), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClick_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClick_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClick_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_mouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_loc,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Use this function to perform in-game mouse-clicks.\n/// </summary>        \n/// <param name=\"MouseButton\"> The mouse button to use for the click operation.</param>            \n/// <param name=\"location\"> The <see cref=\"Vector2\"/> position to perform the mouse click.</param>\n/// <param name=\"frameCount\"> The number of frames to click the specific position.</param>\n/// <returns> TRUE if the click was able to be simulated</returns>\n/// <blueprint><img src=\"Click.png\"></img></blueprint>\n" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to perform in-game mouse-clicks.\n</summary>\n<param name=\"MouseButton\"> The mouse button to use for the click operation.</param>\n<param name=\"location\"> The <see cref=\"Vector2\"/> position to perform the mouse click.</param>\n<param name=\"frameCount\"> The number of frames to click the specific position.</param>\n<returns> TRUE if the click was able to be simulated</returns>\n<blueprint><img src=\"Click.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "Click", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::BP_GDIOAPI_eventClick_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::BP_GDIOAPI_eventClick_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_Click()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_Click_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics
	{
		struct BP_GDIOAPI_eventClickObject_Parms
		{
			FKey mouseButton;
			UObject* obj;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObject_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClickObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClickObject_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_mouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Use this function to interact with an in-game object using mouse-clicks.\n/// </summary>        \n/// <param name=\"mouseButton\"> The fKey for the mouse button to use for the click operation.</param>               \n/// <param name=\"object\"> A ref to the object to perform a click on </param>\n/// <param name=\"frameCount\"> The number of frames to click the specific object.</param>\n/// <returns> TRUE if the click was able to be simulated</returns>\n/// <blueprint><img src=\"ClickObject.png\"></img></blueprint>\n" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to interact with an in-game object using mouse-clicks.\n</summary>\n<param name=\"mouseButton\"> The fKey for the mouse button to use for the click operation.</param>\n<param name=\"object\"> A ref to the object to perform a click on </param>\n<param name=\"frameCount\"> The number of frames to click the specific object.</param>\n<returns> TRUE if the click was able to be simulated</returns>\n<blueprint><img src=\"ClickObject.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "ClickObject", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::BP_GDIOAPI_eventClickObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::BP_GDIOAPI_eventClickObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_ClickObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_ClickObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics
	{
		struct BP_GDIOAPI_eventClickObjectFromHPath_Parms
		{
			FKey mouseButton;
			FString HPath;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_mouseButton;
		static const UECodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_mouseButton = { "mouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, mouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, HPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventClickObjectFromHPath_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventClickObjectFromHPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventClickObjectFromHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_mouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_HPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Use this function to interact with an in-game object using mouse-clicks.\n/// </summary>        \n/// <param name=\"mouseButton\"> The fKey for the mouse button to use for the click operation.</param>               \n/// <param name=\"HPath\"> The HierarchyPath for the GameObject to perform a click on.</param>\n/// <param name=\"frameCount\"> The number of frames to click the specific object.</param>\n/// <returns> TRUE if the HPath resolved and the click was able to be simulated</returns>\n/// <blueprint><img src=\"ClickObjectFromHPath.png\"></img></blueprint>\n" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to interact with an in-game object using mouse-clicks.\n</summary>\n<param name=\"mouseButton\"> The fKey for the mouse button to use for the click operation.</param>\n<param name=\"HPath\"> The HierarchyPath for the GameObject to perform a click on.</param>\n<param name=\"frameCount\"> The number of frames to click the specific object.</param>\n<returns> TRUE if the HPath resolved and the click was able to be simulated</returns>\n<blueprint><img src=\"ClickObjectFromHPath.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "ClickObjectFromHPath", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::BP_GDIOAPI_eventClickObjectFromHPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::BP_GDIOAPI_eventClickObjectFromHPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics
	{
		struct BP_GDIOAPI_eventFloatInputEvent_Parms
		{
			FKey key;
			double value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_key;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_key = { "key", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventFloatInputEvent_Parms, key), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventFloatInputEvent_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventFloatInputEvent_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventFloatInputEvent_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_key,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Use this function to simulate a KeyAxis float input (axis). Pass 0 to stop sending the event.\n/// </summary>\n/// \n///\n/// <param name=\"key\"> The FKey that you want to iput a value for</param>    \n/// <param name=\"key\"> The Value you want to inject</param>\n/// <blueprint><img src=\"FloatInputEvent.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to simulate a KeyAxis float input (axis). Pass 0 to stop sending the event.\n</summary>\n\n\n<param name=\"key\"> The FKey that you want to iput a value for</param>\n<param name=\"key\"> The Value you want to inject</param>\n<blueprint><img src=\"FloatInputEvent.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "FloatInputEvent", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::BP_GDIOAPI_eventFloatInputEvent_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::BP_GDIOAPI_eventFloatInputEvent_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetBoolFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			bool value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetBoolFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetBoolFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetBoolFieldValue_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetBoolFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetBoolFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::BP_GDIOAPI_eventGetBoolFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::BP_GDIOAPI_eventGetBoolFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetDoubleFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			double value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetDoubleFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetDoubleFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetDoubleFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetDoubleFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetDoubleFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetDoubleFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::BP_GDIOAPI_eventGetDoubleFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::BP_GDIOAPI_eventGetDoubleFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics
	{
		struct BP_GDIOAPI_eventGetGameObject_Parms
		{
			FString hierarchyPath;
			UObject* ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetGameObject_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetGameObject_Parms, ReturnValue), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Get the Object Reference matching the provided HierarchyPath argument, or NULL\n/// </summary>\n/// <param name=\"hierarchyPath\"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>\n/// <param name=\"timeout\"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>\n/// <returns> The matching UObject, if it exists.</returns>\n/// <blueprint><img src=\"GetGameObject.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nGet the Object Reference matching the provided HierarchyPath argument, or NULL\n</summary>\n<param name=\"hierarchyPath\"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>\n<param name=\"timeout\"> The timeout in seconds to wait for a response that the request was processed by the GameDriver agent.</param>\n<returns> The matching UObject, if it exists.</returns>\n<blueprint><img src=\"GetGameObject.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetGameObject", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::BP_GDIOAPI_eventGetGameObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::BP_GDIOAPI_eventGetGameObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics
	{
		struct BP_GDIOAPI_eventgetHierarchyPath_Parms
		{
			UObject* obj;
			GDIO_HPATH_TYPES type;
			FString ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FBytePropertyParams NewProp_type_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_type;
		static const UECodeGen_Private::FStrPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type = { "type", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, type), Z_Construct_UEnum_GameDriver_GDIO_HPATH_TYPES, METADATA_PARAMS(0, nullptr) }; // 4077496456
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventgetHierarchyPath_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_type,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Use this function to get the HierarchyPath of any vaid UObject.\n/// </summary>\n/// <param name=\"obj\">The Object you want the HPath of</param>\n/// <param name=\"type\">\"Absolute\" or \"Relative\"</param>\n/// <returns>The HierarchyPath of the Object as an FString</returns>\n/// <blueprint><img src=\"getHierarchyPath.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to get the HierarchyPath of any vaid UObject.\n</summary>\n<param name=\"obj\">The Object you want the HPath of</param>\n<param name=\"type\">\"Absolute\" or \"Relative\"</param>\n<returns>The HierarchyPath of the Object as an FString</returns>\n<blueprint><img src=\"getHierarchyPath.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "getHierarchyPath", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::BP_GDIOAPI_eventgetHierarchyPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::BP_GDIOAPI_eventgetHierarchyPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetIntFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			int32 value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetIntFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetIntFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetIntFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetIntFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::BP_GDIOAPI_eventGetIntFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::BP_GDIOAPI_eventGetIntFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics
	{
		struct BP_GDIOAPI_eventGetObjectList_Parms
		{
			FString hierarchyPath;
			TArray<UObject*> ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FObjectPropertyParams NewProp_ReturnValue_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectList_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue_Inner = { "ReturnValue", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectList_Parms, ReturnValue), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// This method returns a TArray of all Unreal UObject matching the passed in HPath.\n/// </summary>\n/// <param name=\"hierarchyPath\">The Hpath to use for the query</param>\n/// <returns> a TArray of UObject* matching the query.</returns>\n/// <blueprint><img src=\"GetObjectList.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nThis method returns a TArray of all Unreal UObject matching the passed in HPath.\n</summary>\n<param name=\"hierarchyPath\">The Hpath to use for the query</param>\n<returns> a TArray of UObject* matching the query.</returns>\n<blueprint><img src=\"GetObjectList.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectList", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::BP_GDIOAPI_eventGetObjectList_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::BP_GDIOAPI_eventGetObjectList_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics
	{
		struct BP_GDIOAPI_eventGetObjectPosition_Parms
		{
			UObject* obj;
			CoordinateConversionTypes coordinateSpace;
			bool valid;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FBytePropertyParams NewProp_coordinateSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_coordinateSpace;
		static void NewProp_valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace = { "coordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, coordinateSpace), Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, METADATA_PARAMS(0, nullptr) }; // 107805460
	void Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetObjectPosition_Parms*)Obj)->valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetObjectPosition_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPosition_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_coordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.\n/// </summary>\n/// <param name=\"HPath\">The HierarchyPath of the object to return the position of.</param>\n/// <param name=\"coordinateSpace\">The coorindate space conversion to perform on the position before returning it. See <see cref=\"gdio.common.objects.CoordinateConversion\"/> for more information.</param>\n/// <param name=\"valid\">out param set to true if the HPath resolves and the call is possible.</param>\n/// <returns> The Vector3 position of the specific object.</returns>\n/// <blueprint><img src=\"GetObjectPosition.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nReturn the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.\n</summary>\n<param name=\"HPath\">The HierarchyPath of the object to return the position of.</param>\n<param name=\"coordinateSpace\">The coorindate space conversion to perform on the position before returning it. See <see cref=\"gdio.common.objects.CoordinateConversion\"/> for more information.</param>\n<param name=\"valid\">out param set to true if the HPath resolves and the call is possible.</param>\n<returns> The Vector3 position of the specific object.</returns>\n<blueprint><img src=\"GetObjectPosition.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectPosition", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::BP_GDIOAPI_eventGetObjectPosition_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::BP_GDIOAPI_eventGetObjectPosition_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics
	{
		struct BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms
		{
			FString HPath;
			CoordinateConversionTypes coordinateSpace;
			bool valid;
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UECodeGen_Private::FBytePropertyParams NewProp_coordinateSpace_Underlying;
		static const UECodeGen_Private::FEnumPropertyParams NewProp_coordinateSpace;
		static void NewProp_valid_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_valid;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, HPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FBytePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace_Underlying = { "UnderlyingType", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Byte, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, nullptr, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FEnumPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace = { "coordinateSpace", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Enum, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, coordinateSpace), Z_Construct_UEnum_GameDriver_CoordinateConversionTypes, METADATA_PARAMS(0, nullptr) }; // 107805460
	void Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms*)Obj)->valid = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid = { "valid", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_HPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace_Underlying,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_coordinateSpace,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_valid,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Return the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.\n/// </summary>\n/// <param name=\"HPath\">The HierarchyPath of the object to return the position of.</param>\n/// <param name=\"coordinateSpace\">The coorindate space conversion to perform on the position before returning it. See <see cref=\"gdio.common.objects.CoordinateConversion\"/> for more information.</param>\n/// <param name=\"valid\">out param set to true if the HPath resolves and the call is possible.</param>\n/// <returns> The Vector3 position of the specific object.</returns>\n/// <blueprint><img src=\"GetObjectPositionWithHPath.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nReturn the position of a specific object.The position returned is in worldspace coordinates for an actor or a component and screenspace coordinates for widgets.\n</summary>\n<param name=\"HPath\">The HierarchyPath of the object to return the position of.</param>\n<param name=\"coordinateSpace\">The coorindate space conversion to perform on the position before returning it. See <see cref=\"gdio.common.objects.CoordinateConversion\"/> for more information.</param>\n<param name=\"valid\">out param set to true if the HPath resolves and the call is possible.</param>\n<returns> The Vector3 position of the specific object.</returns>\n<blueprint><img src=\"GetObjectPositionWithHPath.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetObjectPositionWithHPath", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04C22401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::BP_GDIOAPI_eventGetObjectPositionWithHPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics
	{
		struct BP_GDIOAPI_eventGetStringFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			FString value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000180, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventGetStringFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventGetStringFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventGetStringFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "GetStringFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::BP_GDIOAPI_eventGetStringFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04422401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::BP_GDIOAPI_eventGetStringFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics
	{
		struct BP_GDIOAPI_eventKeyPress_Parms
		{
			TArray<FKey> keys;
			int32 numberOfFrames;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_keys_Inner;
		static const UECodeGen_Private::FArrayPropertyParams NewProp_keys;
		static const UECodeGen_Private::FIntPropertyParams NewProp_numberOfFrames;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys_Inner = { "keys", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FArrayPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys = { "keys", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Array, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventKeyPress_Parms, keys), EArrayPropertyFlags::None, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_numberOfFrames = { "numberOfFrames", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventKeyPress_Parms, numberOfFrames), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventKeyPress_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventKeyPress_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys_Inner,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_keys,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_numberOfFrames,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// \n/// <summary>\n/// Use this function to send arbitrary button states to the game. \n/// </summary>\n/// <param name=\"key\">FKey indicating which key</param>\n/// <param name=\"numberOfFrames\">The number of frames to press and hold the keys for.</param>\n/// <returns> TRUE if the GameDriver agent successfully processed the request.</returns>\n/// <blueprint><img src=\"KeyPress.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nUse this function to send arbitrary button states to the game.\n</summary>\n<param name=\"key\">FKey indicating which key</param>\n<param name=\"numberOfFrames\">The number of frames to press and hold the keys for.</param>\n<returns> TRUE if the GameDriver agent successfully processed the request.</returns>\n<blueprint><img src=\"KeyPress.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "KeyPress", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::BP_GDIOAPI_eventKeyPress_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::BP_GDIOAPI_eventKeyPress_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_KeyPress()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_KeyPress_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics
	{
		struct BP_GDIOAPI_eventMouseDrag_Parms
		{
			FKey MouseButton;
			FVector2D destination;
			int32 frameCount;
			FVector2D origin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_MouseButton;
		static const UECodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_MouseButton = { "MouseButton", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, MouseButton), Z_Construct_UScriptStruct_FKey, METADATA_PARAMS(0, nullptr) }; // 46000949
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, destination), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseDrag_Parms, origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseDrag_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseDrag_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_MouseButton,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Perform a mouse drag operation.\n/// </summary>\n/// <param name=\"button\">The mouse button as an FKey</param>\n/// <param name=\"destination\">The destination vector to drag the mouse to.</param>\n/// <param name=\"frameCount\">The number of frames taken to complete the drag operation.</param>\n/// <param name=\"origin\">The origin to start the drag operation.  If null, the mouse drag operation will begin at the current position of Input.mousePosition.</param>\n/// <param name=\"waitForEmptyInput\">Wait for the empty input event to be returned from the agent before returning from the method call.</param>\n/// <returns> TRUE if the requests was successfully processed by the GameDriver agent.</returns>\n/// <blueprint><img src=\"MouseDrag.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nPerform a mouse drag operation.\n</summary>\n<param name=\"button\">The mouse button as an FKey</param>\n<param name=\"destination\">The destination vector to drag the mouse to.</param>\n<param name=\"frameCount\">The number of frames taken to complete the drag operation.</param>\n<param name=\"origin\">The origin to start the drag operation.  If null, the mouse drag operation will begin at the current position of Input.mousePosition.</param>\n<param name=\"waitForEmptyInput\">Wait for the empty input event to be returned from the agent before returning from the method call.</param>\n<returns> TRUE if the requests was successfully processed by the GameDriver agent.</returns>\n<blueprint><img src=\"MouseDrag.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseDrag", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::BP_GDIOAPI_eventMouseDrag_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::BP_GDIOAPI_eventMouseDrag_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoObject_Parms
		{
			UObject* obj;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FObjectPropertyParams NewProp_obj;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_obj = { "obj", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObject_Parms, obj), Z_Construct_UClass_UObject_NoRegister, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObject_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoObject_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoObject_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_obj,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Move the mouse to the center of a specific object.\n/// </summary>\n/// <param name=\"obj\">The obj to move the mouse pointer to.</param>\n/// <param name=\"frameCount\">The number of frames to complete the mouse move over.</param>\n/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>\n/// <blueprint><img src=\"MouseMovetoObject.png\"></img></blueprint>\n" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nMove the mouse to the center of a specific object.\n</summary>\n<param name=\"obj\">The obj to move the mouse pointer to.</param>\n<param name=\"frameCount\">The number of frames to complete the mouse move over.</param>\n<returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>\n<blueprint><img src=\"MouseMovetoObject.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoObject", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::BP_GDIOAPI_eventMouseMovetoObject_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::BP_GDIOAPI_eventMouseMovetoObject_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms
		{
			FString HPath;
			int32 frameCount;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_HPath;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_HPath = { "HPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms, HPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_HPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Move the mouse to the center of a specific object, identified by the HPath.\n/// </summary>\n/// <param name=\"HPath\">The HierarchyPath to move the mouse pointer to.</param>\n/// <param name=\"frameCount\">The number of frames to compelte the mouse move over.</param>\n/// <returns> TRUE if the HPath is valid</returns>\n/// <blueprint><img src=\"MouseMovetoObjectFromHPath.png\"></img></blueprint>\n" },
		{ "CPP_Default_frameCount", "30" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nMove the mouse to the center of a specific object, identified by the HPath.\n</summary>\n<param name=\"HPath\">The HierarchyPath to move the mouse pointer to.</param>\n<param name=\"frameCount\">The number of frames to compelte the mouse move over.</param>\n<returns> TRUE if the HPath is valid</returns>\n<blueprint><img src=\"MouseMovetoObjectFromHPath.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoObjectFromHPath", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::BP_GDIOAPI_eventMouseMovetoObjectFromHPath_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics
	{
		struct BP_GDIOAPI_eventMouseMovetoPoint_Parms
		{
			FVector2D destination;
			int32 frameCount;
			FVector2D origin;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_destination;
		static const UECodeGen_Private::FIntPropertyParams NewProp_frameCount;
		static const UECodeGen_Private::FStructPropertyParams NewProp_origin;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_destination = { "destination", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, destination), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_frameCount = { "frameCount", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, frameCount), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_origin = { "origin", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventMouseMovetoPoint_Parms, origin), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventMouseMovetoPoint_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventMouseMovetoPoint_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_destination,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_frameCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_origin,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "Comment", "/// <summary>\n/// Move the mouse to the destination vector.\n/// </summary>\n/// <param name=\"destination\">Destination vector to move the mouse to.</param>\n/// <param name=\"frameCount\">The number of frames to complete the operaiton over.</param>\n/// <param name=\"origin\">The origin to start the mouse move operation.  If null, the mouse move operation will begin at the current position of Input.mousePosition.</param>\n/// <returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>\n/// <blueprint><img src=\"MouseMovetoPoint.png\"></img></blueprint>\n" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
		{ "ToolTip", "<summary>\nMove the mouse to the destination vector.\n</summary>\n<param name=\"destination\">Destination vector to move the mouse to.</param>\n<param name=\"frameCount\">The number of frames to complete the operaiton over.</param>\n<param name=\"origin\">The origin to start the mouse move operation.  If null, the mouse move operation will begin at the current position of Input.mousePosition.</param>\n<returns> TRUE if the method call was successfully processed by the GameDriver agent.</returns>\n<blueprint><img src=\"MouseMovetoPoint.png\"></img></blueprint>" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "MouseMovetoPoint", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::BP_GDIOAPI_eventMouseMovetoPoint_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04822401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::BP_GDIOAPI_eventMouseMovetoPoint_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetBoolFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			bool value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static void NewProp_value_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetBoolFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetBoolFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetBoolFieldValue_Parms*)Obj)->value = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value_SetBit, METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetBoolFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetBoolFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetBoolFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::BP_GDIOAPI_eventSetBoolFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::BP_GDIOAPI_eventSetBoolFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetFloatFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			double value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FDoublePropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FDoublePropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Double, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetFloatFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetFloatFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetFloatFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetFloatFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::BP_GDIOAPI_eventSetFloatFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::BP_GDIOAPI_eventSetFloatFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetIntFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			int32 value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FIntPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetIntFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetIntFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetIntFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetIntFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::BP_GDIOAPI_eventSetIntFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::BP_GDIOAPI_eventSetIntFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics
	{
		struct BP_GDIOAPI_eventSetStringFieldValue_Parms
		{
			FString hierarchyPath;
			FString field;
			FString value;
			bool ReturnValue;
		};
		static const UECodeGen_Private::FStrPropertyParams NewProp_hierarchyPath;
		static const UECodeGen_Private::FStrPropertyParams NewProp_field;
		static const UECodeGen_Private::FStrPropertyParams NewProp_value;
		static void NewProp_ReturnValue_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_hierarchyPath = { "hierarchyPath", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, hierarchyPath), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_field = { "field", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, field), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStrPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_value = { "value", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Str, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(BP_GDIOAPI_eventSetStringFieldValue_Parms, value), METADATA_PARAMS(0, nullptr) };
	void Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue_SetBit(void* Obj)
	{
		((BP_GDIOAPI_eventSetStringFieldValue_Parms*)Obj)->ReturnValue = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(BP_GDIOAPI_eventSetStringFieldValue_Parms), &Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue_SetBit, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_hierarchyPath,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_field,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_value,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams[] = {
		{ "Category", "GameDriver" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_UBP_GDIOAPI, nullptr, "SetStringFieldValue", nullptr, nullptr, Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers), sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::BP_GDIOAPI_eventSetStringFieldValue_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04022401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams), Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::BP_GDIOAPI_eventSetStringFieldValue_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(UBP_GDIOAPI);
	UClass* Z_Construct_UClass_UBP_GDIOAPI_NoRegister()
	{
		return UBP_GDIOAPI::StaticClass();
	}
	struct Z_Construct_UClass_UBP_GDIOAPI_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_UBP_GDIOAPI_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_UObject,
		(UObject* (*)())Z_Construct_UPackage__Script_GameDriver,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_GDIOAPI_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_UBP_GDIOAPI_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_UBP_GDIOAPI_Click, "Click" }, // 2062092189
		{ &Z_Construct_UFunction_UBP_GDIOAPI_ClickObject, "ClickObject" }, // 1572951556
		{ &Z_Construct_UFunction_UBP_GDIOAPI_ClickObjectFromHPath, "ClickObjectFromHPath" }, // 1732413913
		{ &Z_Construct_UFunction_UBP_GDIOAPI_FloatInputEvent, "FloatInputEvent" }, // 2362703436
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetBoolFieldValue, "GetBoolFieldValue" }, // 2768814246
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetDoubleFieldValue, "GetDoubleFieldValue" }, // 2596576864
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetGameObject, "GetGameObject" }, // 593652942
		{ &Z_Construct_UFunction_UBP_GDIOAPI_getHierarchyPath, "getHierarchyPath" }, // 441319424
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetIntFieldValue, "GetIntFieldValue" }, // 3821927378
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectList, "GetObjectList" }, // 487882932
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPosition, "GetObjectPosition" }, // 26513458
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetObjectPositionWithHPath, "GetObjectPositionWithHPath" }, // 4196033641
		{ &Z_Construct_UFunction_UBP_GDIOAPI_GetStringFieldValue, "GetStringFieldValue" }, // 2165876715
		{ &Z_Construct_UFunction_UBP_GDIOAPI_KeyPress, "KeyPress" }, // 2641741803
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseDrag, "MouseDrag" }, // 3270028897
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObject, "MouseMovetoObject" }, // 4089640261
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoObjectFromHPath, "MouseMovetoObjectFromHPath" }, // 939391894
		{ &Z_Construct_UFunction_UBP_GDIOAPI_MouseMovetoPoint, "MouseMovetoPoint" }, // 2139302233
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetBoolFieldValue, "SetBoolFieldValue" }, // 3253006448
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetFloatFieldValue, "SetFloatFieldValue" }, // 234114118
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetIntFieldValue, "SetIntFieldValue" }, // 4145246826
		{ &Z_Construct_UFunction_UBP_GDIOAPI_SetStringFieldValue, "SetStringFieldValue" }, // 2921316976
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_GDIOAPI_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "GDIOApi5.h" },
		{ "ModuleRelativePath", "Public/GDIOApi5.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_UBP_GDIOAPI_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UBP_GDIOAPI>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_UBP_GDIOAPI_Statics::ClassParams = {
		&UBP_GDIOAPI::StaticClass,
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
		0x000000A0u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams), Z_Construct_UClass_UBP_GDIOAPI_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_UBP_GDIOAPI()
	{
		if (!Z_Registration_Info_UClass_UBP_GDIOAPI.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UBP_GDIOAPI.OuterSingleton, Z_Construct_UClass_UBP_GDIOAPI_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_UBP_GDIOAPI.OuterSingleton;
	}
	template<> GAMEDRIVER_API UClass* StaticClass<UBP_GDIOAPI>()
	{
		return UBP_GDIOAPI::StaticClass();
	}
	UBP_GDIOAPI::UBP_GDIOAPI(const FObjectInitializer& ObjectInitializer) : Super(ObjectInitializer) {}
	DEFINE_VTABLE_PTR_HELPER_CTOR(UBP_GDIOAPI);
	UBP_GDIOAPI::~UBP_GDIOAPI() {}
	struct Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics
	{
		static const FEnumRegisterCompiledInInfo EnumInfo[];
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FEnumRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::EnumInfo[] = {
		{ GDIO_HPATH_TYPES_StaticEnum, TEXT("GDIO_HPATH_TYPES"), &Z_Registration_Info_UEnum_GDIO_HPATH_TYPES, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 4077496456U) },
		{ CoordinateConversionTypes_StaticEnum, TEXT("CoordinateConversionTypes"), &Z_Registration_Info_UEnum_CoordinateConversionTypes, CONSTRUCT_RELOAD_VERSION_INFO(FEnumReloadVersionInfo, 107805460U) },
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_UBP_GDIOAPI, UBP_GDIOAPI::StaticClass, TEXT("UBP_GDIOAPI"), &Z_Registration_Info_UClass_UBP_GDIOAPI, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UBP_GDIOAPI), 4159872090U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_3932279011(TEXT("/Script/GameDriver"),
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::ClassInfo),
		nullptr, 0,
		Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::EnumInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_HostProject_Plugins_GameDriver_Source_GameDriver_Public_GDIOApi5_h_Statics::EnumInfo));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
