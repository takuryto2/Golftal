// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "Golftal_V2/Golftal_V2GameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGolftal_V2GameMode() {}

// Begin Cross Module References
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
GOLFTAL_V2_API UClass* Z_Construct_UClass_AGolftal_V2GameMode();
GOLFTAL_V2_API UClass* Z_Construct_UClass_AGolftal_V2GameMode_NoRegister();
UPackage* Z_Construct_UPackage__Script_Golftal_V2();
// End Cross Module References

// Begin Class AGolftal_V2GameMode
void AGolftal_V2GameMode::StaticRegisterNativesAGolftal_V2GameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(AGolftal_V2GameMode);
UClass* Z_Construct_UClass_AGolftal_V2GameMode_NoRegister()
{
	return AGolftal_V2GameMode::StaticClass();
}
struct Z_Construct_UClass_AGolftal_V2GameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "Golftal_V2GameMode.h" },
		{ "ModuleRelativePath", "Golftal_V2GameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<AGolftal_V2GameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_AGolftal_V2GameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_Golftal_V2,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_AGolftal_V2GameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_AGolftal_V2GameMode_Statics::ClassParams = {
	&AGolftal_V2GameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_AGolftal_V2GameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_AGolftal_V2GameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_AGolftal_V2GameMode()
{
	if (!Z_Registration_Info_UClass_AGolftal_V2GameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_AGolftal_V2GameMode.OuterSingleton, Z_Construct_UClass_AGolftal_V2GameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_AGolftal_V2GameMode.OuterSingleton;
}
template<> GOLFTAL_V2_API UClass* StaticClass<AGolftal_V2GameMode>()
{
	return AGolftal_V2GameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(AGolftal_V2GameMode);
AGolftal_V2GameMode::~AGolftal_V2GameMode() {}
// End Class AGolftal_V2GameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2GameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_AGolftal_V2GameMode, AGolftal_V2GameMode::StaticClass, TEXT("AGolftal_V2GameMode"), &Z_Registration_Info_UClass_AGolftal_V2GameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(AGolftal_V2GameMode), 4087908991U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2GameMode_h_2477943635(TEXT("/Script/Golftal_V2"),
	Z_CompiledInDeferFile_FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2GameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2GameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
