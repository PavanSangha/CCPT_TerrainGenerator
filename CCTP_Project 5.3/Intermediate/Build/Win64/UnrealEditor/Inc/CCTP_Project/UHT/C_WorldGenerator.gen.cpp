// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCTP_Project/C_WorldGenerator.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_WorldGenerator() {}
// Cross Module References
	CCTP_PROJECT_API UClass* Z_Construct_UClass_AC_WorldGenerator();
	CCTP_PROJECT_API UClass* Z_Construct_UClass_AC_WorldGenerator_NoRegister();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FIntPoint();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector();
	COREUOBJECT_API UScriptStruct* Z_Construct_UScriptStruct_FVector2D();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
	PROCEDURALMESHCOMPONENT_API UClass* Z_Construct_UClass_UProceduralMeshComponent_NoRegister();
	UPackage* Z_Construct_UPackage__Script_CCTP_Project();
// End Cross Module References
	DEFINE_FUNCTION(AC_WorldGenerator::execGetFurthestUpdatedTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->GetFurthestUpdatedTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execGetClosestListedTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FIntPoint*)Z_Param__Result=P_THIS->GetClosestListedTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execGetTileLocation)
	{
		P_GET_STRUCT(FIntPoint,Z_Param_TileCoordinate);
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector2D*)Z_Param__Result=P_THIS->GetTileLocation(Z_Param_TileCoordinate);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execGetPlayerLocation)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(FVector*)Z_Param__Result=P_THIS->GetPlayerLocation();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execDrawTile)
	{
		P_FINISH;
		P_NATIVE_BEGIN;
		*(int32*)Z_Param__Result=P_THIS->DrawTile();
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execGenerateTerrainAsync)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndexX);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndexY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateTerrainAsync(Z_Param_InSectionIndexX,Z_Param_InSectionIndexY);
		P_NATIVE_END;
	}
	DEFINE_FUNCTION(AC_WorldGenerator::execGenerateMap)
	{
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndexX);
		P_GET_PROPERTY(FIntProperty,Z_Param_InSectionIndexY);
		P_FINISH;
		P_NATIVE_BEGIN;
		P_THIS->GenerateMap(Z_Param_InSectionIndexX,Z_Param_InSectionIndexY);
		P_NATIVE_END;
	}
	void AC_WorldGenerator::StaticRegisterNativesAC_WorldGenerator()
	{
		UClass* Class = AC_WorldGenerator::StaticClass();
		static const FNameNativePtrPair Funcs[] = {
			{ "DrawTile", &AC_WorldGenerator::execDrawTile },
			{ "GenerateMap", &AC_WorldGenerator::execGenerateMap },
			{ "GenerateTerrainAsync", &AC_WorldGenerator::execGenerateTerrainAsync },
			{ "GetClosestListedTile", &AC_WorldGenerator::execGetClosestListedTile },
			{ "GetFurthestUpdatedTile", &AC_WorldGenerator::execGetFurthestUpdatedTile },
			{ "GetPlayerLocation", &AC_WorldGenerator::execGetPlayerLocation },
			{ "GetTileLocation", &AC_WorldGenerator::execGetTileLocation },
		};
		FNativeFunctionRegistrar::RegisterFunctions(Class, Funcs, UE_ARRAY_COUNT(Funcs));
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics
	{
		struct C_WorldGenerator_eventDrawTile_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventDrawTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "DrawTile", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::C_WorldGenerator_eventDrawTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::C_WorldGenerator_eventDrawTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_DrawTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_DrawTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics
	{
		struct C_WorldGenerator_eventGenerateMap_Parms
		{
			int32 InSectionIndexX;
			int32 InSectionIndexY;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSectionIndexX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndexX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSectionIndexY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndexY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexX = { "InSectionIndexX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGenerateMap_Parms, InSectionIndexX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexX_MetaData), Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexY = { "InSectionIndexY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGenerateMap_Parms, InSectionIndexY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexY_MetaData), Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::NewProp_InSectionIndexY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GenerateMap", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::C_WorldGenerator_eventGenerateMap_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::C_WorldGenerator_eventGenerateMap_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GenerateMap()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GenerateMap_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics
	{
		struct C_WorldGenerator_eventGenerateTerrainAsync_Parms
		{
			int32 InSectionIndexX;
			int32 InSectionIndexY;
		};
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSectionIndexX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndexX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_InSectionIndexY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_InSectionIndexY;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexX_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexX = { "InSectionIndexX", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGenerateTerrainAsync_Parms, InSectionIndexX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexX_MetaData), Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexY_MetaData[] = {
		{ "NativeConst", "" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexY = { "InSectionIndexY", nullptr, (EPropertyFlags)0x0010000000000082, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGenerateTerrainAsync_Parms, InSectionIndexY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexY_MetaData), Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexY_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::NewProp_InSectionIndexY,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GenerateTerrainAsync", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::C_WorldGenerator_eventGenerateTerrainAsync_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::C_WorldGenerator_eventGenerateTerrainAsync_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics
	{
		struct C_WorldGenerator_eventGetClosestListedTile_Parms
		{
			FIntPoint ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGetClosestListedTile_Parms, ReturnValue), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GetClosestListedTile", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::C_WorldGenerator_eventGetClosestListedTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::C_WorldGenerator_eventGetClosestListedTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics
	{
		struct C_WorldGenerator_eventGetFurthestUpdatedTile_Parms
		{
			int32 ReturnValue;
		};
		static const UECodeGen_Private::FIntPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGetFurthestUpdatedTile_Parms, ReturnValue), METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GetFurthestUpdatedTile", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::C_WorldGenerator_eventGetFurthestUpdatedTile_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04020401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::C_WorldGenerator_eventGetFurthestUpdatedTile_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics
	{
		struct C_WorldGenerator_eventGetPlayerLocation_Parms
		{
			FVector ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGetPlayerLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GetPlayerLocation", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::C_WorldGenerator_eventGetPlayerLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::C_WorldGenerator_eventGetPlayerLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	struct Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics
	{
		struct C_WorldGenerator_eventGetTileLocation_Parms
		{
			FIntPoint TileCoordinate;
			FVector2D ReturnValue;
		};
		static const UECodeGen_Private::FStructPropertyParams NewProp_TileCoordinate;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ReturnValue;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Function_MetaDataParams[];
#endif
		static const UECodeGen_Private::FFunctionParams FuncParams;
	};
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::NewProp_TileCoordinate = { "TileCoordinate", nullptr, (EPropertyFlags)0x0010000000000080, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGetTileLocation_Parms, TileCoordinate), Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::NewProp_ReturnValue = { "ReturnValue", nullptr, (EPropertyFlags)0x0010000000000580, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(C_WorldGenerator_eventGetTileLocation_Parms, ReturnValue), Z_Construct_UScriptStruct_FVector2D, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::NewProp_TileCoordinate,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::NewProp_ReturnValue,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::Function_MetaDataParams[] = {
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFunctionParams Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::FuncParams = { (UObject*(*)())Z_Construct_UClass_AC_WorldGenerator, nullptr, "GetTileLocation", nullptr, nullptr, Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::PropPointers, UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::PropPointers), sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::C_WorldGenerator_eventGetTileLocation_Parms), RF_Public|RF_Transient|RF_MarkAsNative, (EFunctionFlags)0x04820401, 0, 0, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::Function_MetaDataParams), Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::Function_MetaDataParams) };
	static_assert(UE_ARRAY_COUNT(Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::PropPointers) < 2048);
	static_assert(sizeof(Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::C_WorldGenerator_eventGetTileLocation_Parms) < MAX_uint16);
	UFunction* Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation()
	{
		static UFunction* ReturnFunction = nullptr;
		if (!ReturnFunction)
		{
			UECodeGen_Private::ConstructUFunction(&ReturnFunction, Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation_Statics::FuncParams);
		}
		return ReturnFunction;
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_WorldGenerator);
	UClass* Z_Construct_UClass_AC_WorldGenerator_NoRegister()
	{
		return AC_WorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AC_WorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
		static const FClassFunctionLinkInfo FuncInfo[];
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XVertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XVertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YvertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_YvertexCount;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_CellSize_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_CellSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSectionX_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSectionX;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NumSectionY_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_NumSectionY;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_MeshSectionIndex_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_MeshSectionIndex;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMesh_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMesh;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TerrainMaterial_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_TerrainMaterial;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_GeneratorBusy_MetaData[];
#endif
		static void NewProp_GeneratorBusy_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_GeneratorBusy;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileDataReady_MetaData[];
#endif
		static void NewProp_TileDataReady_SetBit(void* Obj);
		static const UECodeGen_Private::FBoolPropertyParams NewProp_TileDataReady;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_TileReplacedByDistance_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_TileReplacedByDistance;
		static const UECodeGen_Private::FIntPropertyParams NewProp_ListedTiles_ValueProp;
		static const UECodeGen_Private::FStructPropertyParams NewProp_ListedTiles_Key_KeyProp;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ListedTiles_MetaData[];
#endif
		static const UECodeGen_Private::FMapPropertyParams NewProp_ListedTiles;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_WorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CCTP_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::DependentSingletons) < 16);
	const FClassFunctionLinkInfo Z_Construct_UClass_AC_WorldGenerator_Statics::FuncInfo[] = {
		{ &Z_Construct_UFunction_AC_WorldGenerator_DrawTile, "DrawTile" }, // 2209674180
		{ &Z_Construct_UFunction_AC_WorldGenerator_GenerateMap, "GenerateMap" }, // 4203488649
		{ &Z_Construct_UFunction_AC_WorldGenerator_GenerateTerrainAsync, "GenerateTerrainAsync" }, // 166876179
		{ &Z_Construct_UFunction_AC_WorldGenerator_GetClosestListedTile, "GetClosestListedTile" }, // 2392012632
		{ &Z_Construct_UFunction_AC_WorldGenerator_GetFurthestUpdatedTile, "GetFurthestUpdatedTile" }, // 1532441394
		{ &Z_Construct_UFunction_AC_WorldGenerator_GetPlayerLocation, "GetPlayerLocation" }, // 1247613280
		{ &Z_Construct_UFunction_AC_WorldGenerator_GetTileLocation, "GetTileLocation" }, // 3877631694
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::FuncInfo) < 2048);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_WorldGenerator.h" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount = { "XVertexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, XVertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_YvertexCount_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_YvertexCount = { "YvertexCount", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, YvertexCount), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_YvertexCount_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_YvertexCount_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_CellSize_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_CellSize = { "CellSize", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, CellSize), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_CellSize_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_CellSize_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionX_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionX = { "NumSectionX", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, NumSectionX), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionX_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionX_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionY_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionY = { "NumSectionY", nullptr, (EPropertyFlags)0x0010000000000015, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, NumSectionY), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionY_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionY_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_MeshSectionIndex_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_MeshSectionIndex = { "MeshSectionIndex", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, MeshSectionIndex), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_MeshSectionIndex_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_MeshSectionIndex_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMesh_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "EditInline", "true" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMesh = { "TerrainMesh", nullptr, (EPropertyFlags)0x001000000008001d, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, TerrainMesh), Z_Construct_UClass_UProceduralMeshComponent_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMesh_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMesh_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMaterial_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMaterial = { "TerrainMaterial", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, TerrainMaterial), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMaterial_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMaterial_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy_SetBit(void* Obj)
	{
		((AC_WorldGenerator*)Obj)->GeneratorBusy = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy = { "GeneratorBusy", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_WorldGenerator), &Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	void Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady_SetBit(void* Obj)
	{
		((AC_WorldGenerator*)Obj)->TileDataReady = 1;
	}
	const UECodeGen_Private::FBoolPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady = { "TileDataReady", nullptr, (EPropertyFlags)0x0010000000000014, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, sizeof(bool), sizeof(AC_WorldGenerator), &Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady_MetaData) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileReplacedByDistance_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileReplacedByDistance = { "TileReplacedByDistance", nullptr, (EPropertyFlags)0x0010000000000005, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, TileReplacedByDistance), METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileReplacedByDistance_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileReplacedByDistance_MetaData) };
	const UECodeGen_Private::FIntPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_ValueProp = { "ListedTiles", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 1, METADATA_PARAMS(0, nullptr) };
	const UECodeGen_Private::FStructPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_Key_KeyProp = { "ListedTiles_Key", nullptr, (EPropertyFlags)0x0000000000000000, UECodeGen_Private::EPropertyGenFlags::Struct, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, 0, Z_Construct_UScriptStruct_FIntPoint, METADATA_PARAMS(0, nullptr) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_MetaData[] = {
		{ "Category", "C_WorldGenerator" },
		{ "ModuleRelativePath", "C_WorldGenerator.h" },
	};
#endif
	const UECodeGen_Private::FMapPropertyParams Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles = { "ListedTiles", nullptr, (EPropertyFlags)0x0010000000000004, UECodeGen_Private::EPropertyGenFlags::Map, RF_Public|RF_Transient|RF_MarkAsNative, nullptr, nullptr, 1, STRUCT_OFFSET(AC_WorldGenerator, ListedTiles), EMapPropertyFlags::None, METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_MetaData), Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_MetaData) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_YvertexCount,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_CellSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionX,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_NumSectionY,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_MeshSectionIndex,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMesh,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TerrainMaterial,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_GeneratorBusy,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileDataReady,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_TileReplacedByDistance,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_ValueProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles_Key_KeyProp,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_ListedTiles,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_WorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_WorldGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_WorldGenerator_Statics::ClassParams = {
		&AC_WorldGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		FuncInfo,
		Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		UE_ARRAY_COUNT(FuncInfo),
		UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_WorldGenerator_Statics::Class_MetaDataParams)
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers) < 2048);
	UClass* Z_Construct_UClass_AC_WorldGenerator()
	{
		if (!Z_Registration_Info_UClass_AC_WorldGenerator.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_WorldGenerator.OuterSingleton, Z_Construct_UClass_AC_WorldGenerator_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_WorldGenerator.OuterSingleton;
	}
	template<> CCTP_PROJECT_API UClass* StaticClass<AC_WorldGenerator>()
	{
		return AC_WorldGenerator::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_WorldGenerator);
	AC_WorldGenerator::~AC_WorldGenerator() {}
	struct Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_WorldGenerator, AC_WorldGenerator::StaticClass, TEXT("AC_WorldGenerator"), &Z_Registration_Info_UClass_AC_WorldGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_WorldGenerator), 1877140834U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_109921823(TEXT("/Script/CCTP_Project"),
		Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
