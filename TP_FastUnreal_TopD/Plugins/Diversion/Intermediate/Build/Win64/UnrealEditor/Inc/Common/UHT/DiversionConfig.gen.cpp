// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "DiversionConfig.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
static_assert(!UE_WITH_CONSTINIT_UOBJECT, "This generated code can only be compiled with !UE_WITH_CONSTINIT_UOBJECT");
void EmptyLinkFunctionForGeneratedCodeDiversionConfig() {}

// ********** Begin Cross Module References ********************************************************
COREUOBJECT_API UClass* Z_Construct_UClass_UObject(ETypeConstructPhase);
// ********** End Cross Module References **********************************************************

// ********** Begin Same Module References *********************************************************
UPackage* Z_Construct_UPackage__Script_Common(ETypeConstructPhase);
COMMON_API UClass* Z_Construct_UClass_UDiversionConfig(ETypeConstructPhase);
COMMON_API UClass* Z_Construct_UClass_UDiversionConfig(ETypeConstructPhase);
// ********** End Same Module References ***********************************************************
#define UHT_STRUCT_BASE(INIT) UE::CodeGen::ConstInit::TCompiledInObjectPtr<const FStructBaseChain>(UE::Private::AsStructBaseChain(INIT))

// ********** Begin Class UDiversionConfig *********************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_Construct_UClass_UDiversionConfig_Statics
struct UHT_STATICS
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Type_MetaData[] = {
		{ "IncludePath", "DiversionConfig.h" },
		{ "ModuleRelativePath", "Public/DiversionConfig.h" },
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableSoftLock_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConfigRestartRequired", "FALSE" },
		{ "DisplayName", "Enable Diversion Auto Soft Lock Confirmations" },
		{ "ModuleRelativePath", "Public/DiversionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If unchecked, Diversion will not warn for potential conflicts before opening and saving files that have been modified in another branch or workspace" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_bEnableChangesWatcher_MetaData[] = {
		{ "Category", "General Settings" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "Enable External Changes Watcher" },
		{ "ModuleRelativePath", "Public/DiversionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "If checked, Diversion will automatically detect and reload files that have been modified externally. e.g. by switching branches, resetting changes from the app etc. (requires editor restart)" },
#endif
	};
	static constexpr UECodeGen_Private::FMetaDataPairParam NewProp_ResponseCacheSize_MetaData[] = {
		{ "Category", "Advanced Settings" },
		{ "ClampMin", "10" },
		{ "ConfigRestartRequired", "TRUE" },
		{ "DisplayName", "HTTP Response Cache Size" },
		{ "ModuleRelativePath", "Public/DiversionConfig.h" },
#if !UE_BUILD_SHIPPING
		{ "Tooltip", "Maximum number of HTTP responses to cache for conditional requests (ETag caching). Higher values use more memory but may reduce network requests. Minimum: 10. (requires editor restart)" },
#endif
	};
#endif // WITH_METADATA

// ********** Begin Class UDiversionConfig constinit property declarations *************************
	static void NewProp_bEnableSoftLock_SetBit(void* Obj)
	{
		((UDiversionConfig*)Obj)->bEnableSoftLock = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableSoftLock;
	static void NewProp_bEnableChangesWatcher_SetBit(void* Obj)
	{
		((UDiversionConfig*)Obj)->bEnableChangesWatcher = 1;
	}
	static const UECodeGen_Private::FBoolPropertyParams NewProp_bEnableChangesWatcher;
	static const UECodeGen_Private::FIntPropertyParams NewProp_ResponseCacheSize;
	static const UECodeGen_Private::FPropertyParamsBase* const PropPointers[];
// ********** End Class UDiversionConfig constinit property declarations ***************************
	static FTypeConstructFunc* DependentSingletons[];
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<UDiversionConfig>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
}; // struct UHT_STATICS

// ********** Begin Class UDiversionConfig Property Definitions ************************************
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableSoftLock = { "bEnableSoftLock", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDiversionConfig), &UHT_STATICS::NewProp_bEnableSoftLock_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableSoftLock_MetaData), NewProp_bEnableSoftLock_MetaData) };
const UECodeGen_Private::FBoolPropertyParams UHT_STATICS::NewProp_bEnableChangesWatcher = { "bEnableChangesWatcher", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Bool | UECodeGen_Private::EPropertyGenFlags::NativeBool, nullptr, nullptr, 1, sizeof(bool), sizeof(UDiversionConfig), &UHT_STATICS::NewProp_bEnableChangesWatcher_SetBit, METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_bEnableChangesWatcher_MetaData), NewProp_bEnableChangesWatcher_MetaData) };
const UECodeGen_Private::FIntPropertyParams UHT_STATICS::NewProp_ResponseCacheSize = { "ResponseCacheSize", nullptr, (EPropertyFlags)0x0010000000004001, UECodeGen_Private::EPropertyGenFlags::Int, nullptr, nullptr, 1, STRUCT_OFFSET(UDiversionConfig, ResponseCacheSize), METADATA_PARAMS(UE_ARRAY_COUNT(NewProp_ResponseCacheSize_MetaData), NewProp_ResponseCacheSize_MetaData) };
const UECodeGen_Private::FPropertyParamsBase* const UHT_STATICS::PropPointers[] = {
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableSoftLock,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_bEnableChangesWatcher,
	(const UECodeGen_Private::FPropertyParamsBase*)&UHT_STATICS::NewProp_ResponseCacheSize,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::PropPointers) < 2048);
// ********** End Class UDiversionConfig Property Definitions **************************************
FTypeConstructFunc* UHT_STATICS::DependentSingletons[] = {
	(FTypeConstructFunc*)Z_Construct_UClass_UObject,
	(FTypeConstructFunc*)Z_Construct_UPackage__Script_Common,
};
static_assert(UE_ARRAY_COUNT(UHT_STATICS::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams UHT_STATICS::ClassParams = {
	&Z_Construct_UClass_UDiversionConfig,
	"Editor",
	&StaticCppClassTypeInfo,
	DependentSingletons,
	nullptr,
	UHT_STATICS::PropPointers,
	nullptr,
	UE_ARRAY_COUNT(DependentSingletons),
	0,
	UE_ARRAY_COUNT(UHT_STATICS::PropPointers),
	0,
	0x001000A6u,
	METADATA_PARAMS(UE_ARRAY_COUNT(UHT_STATICS::Type_MetaData), UHT_STATICS::Type_MetaData)
};
FClassRegistrationInfo Z_Registration_Info_UClass_UDiversionConfig;
UClass* Z_Construct_UClass_UDiversionConfig(ETypeConstructPhase Phase)
{
	if (Phase == ETypeConstructPhase::Inner)
	{
		using TClass = UDiversionConfig;
		if (!Z_Registration_Info_UClass_UDiversionConfig.InnerSingleton)
		{
			GetPrivateStaticClassBody(
				TClass::StaticPackage(),
				TEXT("DiversionConfig"),
				Z_Registration_Info_UClass_UDiversionConfig.InnerSingleton,
				nullptr,
				DataSizeOf<TClass>(),
				alignof(TClass),
				TClass::StaticClassFlags,
				TClass::StaticClassCastFlags(),
				TClass::StaticConfigName(),
				(UClass::ClassConstructorType)InternalConstructor<TClass>,
				(UClass::ClassVTableHelperCtorCallerType)InternalVTableHelperCtorCaller<TClass>,
				UOBJECT_CPPCLASS_STATICFUNCTIONS_FORCLASS(TClass),
				&TClass::Super::StaticClass,
				&TClass::WithinClass::StaticClass
			);
		}
		return Z_Registration_Info_UClass_UDiversionConfig.InnerSingleton;
	}
	if (!Z_Registration_Info_UClass_UDiversionConfig.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_UDiversionConfig.OuterSingleton, UHT_STATICS::ClassParams);
	}
	return Z_Registration_Info_UClass_UDiversionConfig.OuterSingleton;
}
#undef UHT_STATICS
DEFINE_VTABLE_PTR_HELPER_CTOR_NS(, UDiversionConfig);
UDiversionConfig::~UDiversionConfig() {}
// ********** End Class UDiversionConfig ***********************************************************

// ********** Begin Registration *******************************************************************
#ifdef UHT_STATICS
#error UHT_STATICS already defined
#endif
#define UHT_STATICS Z_CompiledInDeferFile_FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h__Script_Common_Statics
struct UHT_STATICS
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_UDiversionConfig, TEXT("UDiversionConfig"), &Z_Registration_Info_UClass_UDiversionConfig, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(UDiversionConfig), 3513707105U) },
	};
}; // UHT_STATICS 
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h__Script_Common_3ca8b0a396e66db99bb22a99abad6857484fdfd4{
	TEXT("/Script/Common"),
	UHT_STATICS::ClassInfo, UE_ARRAY_COUNT(UHT_STATICS::ClassInfo),
	nullptr, 0,
	nullptr, 0,
	nullptr, 0,
};
#undef UHT_STATICS
// ********** End Registration *********************************************************************
#undef UHT_STRUCT_BASE

PRAGMA_ENABLE_DEPRECATION_WARNINGS
