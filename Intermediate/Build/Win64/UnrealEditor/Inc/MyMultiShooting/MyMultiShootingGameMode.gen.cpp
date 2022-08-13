// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "MyMultiShooting/MyMultiShootingGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeMyMultiShootingGameMode() {}
// Cross Module References
	MYMULTISHOOTING_API UClass* Z_Construct_UClass_AMyMultiShootingGameMode_NoRegister();
	MYMULTISHOOTING_API UClass* Z_Construct_UClass_AMyMultiShootingGameMode();
	ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
	UPackage* Z_Construct_UPackage__Script_MyMultiShooting();
// End Cross Module References
	void AMyMultiShootingGameMode::StaticRegisterNativesAMyMultiShootingGameMode()
	{
	}
	IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AMyMultiShootingGameMode);
	UClass* Z_Construct_UClass_AMyMultiShootingGameMode_NoRegister()
	{
		return AMyMultiShootingGameMode::StaticClass();
	}
	struct Z_Construct_UClass_AMyMultiShootingGameMode_Statics
	{
		static UObject* (*const DependentSingletons[])();
#if WITH_METADATA
		static const UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[];
#endif
		static const FCppClassTypeInfoStatic StaticCppClassTypeInfo;
		static const UECodeGen_Private::FClassParams ClassParams;
	};
	UObject* (*const Z_Construct_UClass_AMyMultiShootingGameMode_Statics::DependentSingletons[])() = {
		(UObject* (*)())Z_Construct_UClass_AGameModeBase,
		(UObject* (*)())Z_Construct_UPackage__Script_MyMultiShooting,
	};
#if WITH_METADATA
	const UECodeGen_Private::FMetaDataPairParam Z_Construct_UClass_AMyMultiShootingGameMode_Statics::Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "MyMultiShootingGameMode.h" },
		{ "ModuleRelativePath", "MyMultiShootingGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif
	const FCppClassTypeInfoStatic Z_Construct_UClass_AMyMultiShootingGameMode_Statics::StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AMyMultiShootingGameMode>::IsAbstract,
	};
	const UECodeGen_Private::FClassParams Z_Construct_UClass_AMyMultiShootingGameMode_Statics::ClassParams = {
		&AMyMultiShootingGameMode::StaticClass,
		"Game",
		&StaticCppClassTypeInfo,
		DependentSingletons,
		nullptr,
		nullptr,
		nullptr,
		UE_ARRAY_COUNT(DependentSingletons),
		0,
		0,
		0,
		0x008802ACu,
		METADATA_PARAMS(Z_Construct_UClass_AMyMultiShootingGameMode_Statics::Class_MetaDataParams, UE_ARRAY_COUNT(Z_Construct_UClass_AMyMultiShootingGameMode_Statics::Class_MetaDataParams))
	};
	UClass* Z_Construct_UClass_AMyMultiShootingGameMode()
	{
		if (!Z_Registration_Info_UClass_AMyMultiShootingGameMode.OuterSingleton)
		{
			UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AMyMultiShootingGameMode.OuterSingleton, Z_Construct_UClass_AMyMultiShootingGameMode_Statics::ClassParams);
		}
		return Z_Registration_Info_UClass_AMyMultiShootingGameMode.OuterSingleton;
	}
	template<> MYMULTISHOOTING_API UClass* StaticClass<AMyMultiShootingGameMode>()
	{
		return AMyMultiShootingGameMode::StaticClass();
	}
	DEFINE_VTABLE_PTR_HELPER_CTOR(AMyMultiShootingGameMode);
	struct Z_CompiledInDeferFile_FID_MyMultiShooting_Source_MyMultiShooting_MyMultiShootingGameMode_h_Statics
	{
		static const FClassRegisterCompiledInInfo ClassInfo[];
	};
	const FClassRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMultiShooting_Source_MyMultiShooting_MyMultiShootingGameMode_h_Statics::ClassInfo[] = {
		{ Z_Construct_UClass_AMyMultiShootingGameMode, AMyMultiShootingGameMode::StaticClass, TEXT("AMyMultiShootingGameMode"), &Z_Registration_Info_UClass_AMyMultiShootingGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AMyMultiShootingGameMode), 3241749960U) },
	};
	static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_MyMultiShooting_Source_MyMultiShooting_MyMultiShootingGameMode_h_1469952088(TEXT("/Script/MyMultiShooting"),
		Z_CompiledInDeferFile_FID_MyMultiShooting_Source_MyMultiShooting_MyMultiShootingGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_MyMultiShooting_Source_MyMultiShooting_MyMultiShootingGameMode_h_Statics::ClassInfo),
		nullptr, 0,
		nullptr, 0);
PRAGMA_ENABLE_DEPRECATION_WARNINGS
