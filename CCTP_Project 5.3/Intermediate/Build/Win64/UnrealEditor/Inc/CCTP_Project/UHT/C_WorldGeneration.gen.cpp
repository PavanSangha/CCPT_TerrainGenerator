// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CCTP_Project/C_WorldGeneration.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeC_WorldGeneration() {}
// Cross Module References
	CCTP_PROJECT_API UClass* Z_Construct_UClass_AC_WorldGeneration();
	CCTP_PROJECT_API UClass* Z_Construct_UClass_AC_WorldGeneration_NoRegister();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_CCTP_Project();
// End Cross Module References
	void AC_WorldGeneration::StaticRegisterNativesAC_WorldGeneration()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AC_WorldGeneration);
	UClass* Z_Construct_UClass_AC_WorldGeneration_NoRegister()
	{
		return AC_WorldGeneration::StaticClass();
	}
	struct Z_Construct_UClass_AC_WorldGeneration_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AC_WorldGeneration_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_CCTP_Project,
	};
	static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGeneration_Statics::DependentSingletons) < 16);
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AC_WorldGeneration_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "C_WorldGeneration.h" },
		{ "ModuleRelativePath", "C_WorldGeneration.h" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AC_WorldGeneration_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AC_WorldGeneration>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AC_WorldGeneration_Statics::ClassParams = {
		&AC_WorldGeneration::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x009000A4u,
		METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AC_WorldGeneration_Statics::Class_MetaDataParams), Z_Construct_UClass_AC_WorldGeneration_Statics::Class_MetaDataParams)
	};
	UClass* Z_Construct_UClass_AC_WorldGeneration()
	{
		if (!Z_Registration_Info_UClass_AC_WorldGeneration.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AC_WorldGeneration.OuterSingleton, Z_Construct_UClass_AC_WorldGeneration_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AC_WorldGeneration.OuterSingleton;
	}
	template<> CCTP_PROJECT_API UClass* StaticClass<AC_WorldGeneration>()
	{
		return AC_WorldGeneration::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AC_WorldGeneration);
	AC_WorldGeneration::~AC_WorldGeneration() {}
	struct Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGeneration_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGeneration_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AC_WorldGeneration, AC_WorldGeneration::StaticClass, TEXT("AC_WorldGeneration"), &Z_Registration_Info_UClass_AC_WorldGeneration, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AC_WorldGeneration), 1541433337U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGeneration_h_2067609631(TEXT("/Script/CCTP_Project"),
		Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGeneration_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_CCPT_CCPT_TerrainGenerator_CCTP_Project_5_3_Source_CCTP_Project_C_WorldGeneration_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
