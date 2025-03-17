// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeGolftal_V2_init() {}
	GOLFTAL_V2_API UFunction* Z_Construct_UDelegateFunction_Golftal_V2_OnPickUp__DelegateSignature();
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Golftal_V2;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Golftal_V2()
	{
		if (!Z_Registration_Info_UPackage__Script_Golftal_V2.OuterSingleton)
		{
			static UObject* (*const SingletonFuncArray[])() = {
				(UObject* (*)())Z_Construct_UDelegateFunction_Golftal_V2_OnPickUp__DelegateSignature,
			};
			static const UECodeGen_Private::FPackageParams PackageParams = {
				"/Script/Golftal_V2",
				SingletonFuncArray,
				UE_ARRAY_COUNT(SingletonFuncArray),
				PKG_CompiledIn | 0x00000000,
				0xA85F2935,
				0x572C36F6,
				METADATA_PARAMS(0, nullptr)
			};
			UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Golftal_V2.OuterSingleton, PackageParams);
		}
		return Z_Registration_Info_UPackage__Script_Golftal_V2.OuterSingleton;
	}
	static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Golftal_V2(Z_Construct_UPackage__Script_Golftal_V2, TEXT("/Script/Golftal_V2"), Z_Registration_Info_UPackage__Script_Golftal_V2, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0xA85F2935, 0x572C36F6));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
