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
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CCTP_Project();
// End Cross Module References
	void AC_WorldGenerator::StaticRegisterNativesAC_WorldGenerator()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_WorldGenerator);
	UClass* Z_Construct_UClass_AC_WorldGenerator_NoRegister()
	{
		return AC_WorldGenerator::StaticClass();
	}
	struct Z_Construct_UClass_AC_WorldGenerator_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XVertexCount_MetaData[];
#endif
		static const UECodeGen_Private::FIntPropertyParams NewProp_XVertexCount;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_WorldGenerator_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CCTP_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGenerator_Statics::DependentSingletons) < 16);
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
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_AC_WorldGenerator_Statics::NewProp_XVertexCount,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_WorldGenerator_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_WorldGenerator>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_WorldGenerator_Statics::ClassParams = {
		&AC_WorldGenerator::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_AC_WorldGenerator_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
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
		{ Z_Construct_UClass_AC_WorldGenerator, AC_WorldGenerator::StaticClass, TEXT("AC_WorldGenerator"), &Z_Registration_Info_UClass_AC_WorldGenerator, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_WorldGenerator), 3722590262U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_2131220252(TEXT("/Script/CCTP_Project"),
		Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGenerator_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
