// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCommon_init() {}
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_OBJECT");
	static FPackageRegistrationInfo Z_Registration_Info_UPackage__Script_Common;
	FORCENOINLINE UPackage* Z_Construct_UPackage__Script_Common(ETypeConstructPhase)
	{
		if (!Z_Registration_Info_UPackage__Script_Common.OuterSingleton)
		{
		static const UECodeGen_Private::FPackageParams PackageParams = {
			"/Script/Common",
			nullptr,
			0,
			PKG_CompiledIn | 0x00000040,
			0x27B21F4B,
			0xAA77190B,
			METADATA_PARAMS(0, nullptr)
		};
		UECodeGen_Private::ConstructUPackage(Z_Registration_Info_UPackage__Script_Common.OuterSingleton, PackageParams);
	}
	return Z_Registration_Info_UPackage__Script_Common.OuterSingleton;
}
static FRegisterCompiledInInfo Z_CompiledInDeferPackage_UPackage__Script_Common(Z_Construct_UPackage__Script_Common, TEXT("/Script/Common"), Z_Registration_Info_UPackage__Script_Common, CONSTRUCT_RELOAD_VERSION_INFO(FPackageReloadVersionInfo, 0x27B21F4B, 0xAA77190B));
PRAGMA_ENABLE_DEPRECATION_WARNINGS
