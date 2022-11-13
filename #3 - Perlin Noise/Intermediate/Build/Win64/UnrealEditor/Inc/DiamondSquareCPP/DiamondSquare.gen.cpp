// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiamondSquareCPP/Public/DiamondSquare.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeDiamondSquare() {}
// Cross Module References
	DIAMONDSQUARECPP_API UClass* Z_Construct_UClass_ADiamondSquare_NoRegister();
	DIAMONDSQUARECPP_API UClass* Z_Construct_UClass_ADiamondSquare();
	ENGINE_API UClass* Z_Construct_UClass_AActor();
	UPackage* Z_Construct_UPackage__Script_DiamondSquareCPP();
	ENGINE_API UClass* Z_Construct_UClass_UMaterialInterface_NoRegister();
// End Cross Module References
	void ADiamondSquare::StaticRegisterNativesADiamondSquare()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ADiamondSquare);
	UClass* Z_Construct_UClass_ADiamondSquare_NoRegister()
	{
		return ADiamondSquare::StaticClass();
	}
	struct Z_Construct_UClass_ADiamondSquare_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_XSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_XSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_YSize_MetaData[];
#endif
		static const UECodeGen_Private::FUnsizedIntPropertyParams NewProp_YSize;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_ZMultiplier_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_ZMultiplier;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_NoiseScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_NoiseScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Scale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_Scale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_UVScale_MetaData[];
#endif
		static const UECodeGen_Private::FFloatPropertyParams NewProp_UVScale;
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam NewProp_Material_MetaData[];
#endif
		static const UECodeGen_Private::FObjectPropertyParams NewProp_Material;
		static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_ADiamondSquare_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AActor,
		(UObject* (*)())Z_Construct_UPackage__Script_DiamondSquareCPP,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams[] = {
		{ "IncludePath", "DiamondSquare.h" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XSize_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XSize = { "XSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, XSize), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YSize_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FUnsizedIntPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YSize = { "YSize", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Int, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, YSize), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YSize_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YSize_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier = { "ZMultiplier", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, ZMultiplier), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale = { "NoiseScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, NoiseScale), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Scale_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Scale = { "Scale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, Scale), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Scale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Scale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ClampMin", "0.000001" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FFloatPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale = { "UVScale", nullptr, (EPropertyFlags)0x0010000000000001, UECodeGen_Private::EPropertyGenFlags::Float, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, UVScale), METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale_MetaData)) };
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData[] = {
		{ "Category", "DiamondSquare" },
		{ "ModuleRelativePath", "Public/DiamondSquare.h" },
	};
#endif
	const UECodeGen_Private::FObjectPropertyParams Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material = { "Material", nullptr, (EPropertyFlags)0x0020080000000001, UECodeGen_Private::EPropertyGenFlags::Object, RF_Public|RF_Transient|RF_MarkAsNative, 1, STRUCT_OFFSET(ADiamondSquare, Material), Z_Construct_UClass_UMaterialInterface_NoRegister, METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material_MetaData)) };
	const UECodeGen_Private::FPropertyParamsBase* const Z_Construct_UClass_ADiamondSquare_Statics::PropPointers[] = {
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_XSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_YSize,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_ZMultiplier,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_NoiseScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Scale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_UVScale,
		(const UECodeGen_Private::FPropertyParamsBase*)&Z_Construct_UClass_ADiamondSquare_Statics::NewProp_Material,
	};
	const FCppClassTypeInfoStatic Z_Construct_UClass_ADiamondSquare_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ADiamondSquare>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_ADiamondSquare_Statics::ClassParams = {
		&ADiamondSquare::StaticClass,
		"Engine",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		Z_Construct_UClass_ADiamondSquare_Statics::PropPointers,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::PropPointers),
		0,
		0x009000A4u,
		METADATA_PARAMS(Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_ADiamondSquare_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_ADiamondSquare()
	{
		if (!Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton, Z_Construct_UClass_ADiamondSquare_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_ADiamondSquare.OuterSingleton;
	}
	template<> DIAMONDSQUARECPP_API UClass* StaticClass<ADiamondSquare>()
	{
		return ADiamondSquare::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(ADiamondSquare);
	struct Z_CompiledInDeferFile_FID__4___Perlin_noise_Source_DiamondSquareCPP_Public_DiamondSquare_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID__4___Perlin_noise_Source_DiamondSquareCPP_Public_DiamondSquare_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_ADiamondSquare, ADiamondSquare::StaticClass, TEXT("ADiamondSquare"), &Z_Registration_Info_UClass_ADiamondSquare, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ADiamondSquare), 3186540413U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID__4___Perlin_noise_Source_DiamondSquareCPP_Public_DiamondSquare_h_1874746208(TEXT("/Script/DiamondSquareCPP"),
		Z_CompiledInDeferFile_FID__4___Perlin_noise_Source_DiamondSquareCPP_Public_DiamondSquare_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID__4___Perlin_noise_Source_DiamondSquareCPP_Public_DiamondSquare_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
