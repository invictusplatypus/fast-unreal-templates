// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "DiversionConfig.h"

#ifdef COMMON_DiversionConfig_generated_h
#error "DiversionConfig.generated.h already included, missing '#pragma once' in DiversionConfig.h"
#endif
#define COMMON_DiversionConfig_generated_h

#include "UObject/ObjectMacros.h"
#include "UObject/ReflectedTypeAccessors.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS

// ********** Begin Class UDiversionConfig *********************************************************
struct Z_Construct_UClass_UDiversionConfig_Statics;
COMMON_API UClass* Z_Construct_UClass_UDiversionConfig(ETypeConstructPhase);

#define FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_15_INCLASS_NO_PURE_DECLS \
private: \
	friend struct ::Z_Construct_UClass_UDiversionConfig_Statics; \
	friend COMMON_API UClass* ::Z_Construct_UClass_UDiversionConfig(ETypeConstructPhase); \
public: \
	DECLARE_CLASS2(UDiversionConfig, UObject, COMPILED_IN_FLAGS(0 | CLASS_DefaultConfig | CLASS_Config), CASTCLASS_None, TEXT("/Script/Common"), Z_Construct_UClass_UDiversionConfig) \
	DECLARE_SERIALIZER(UDiversionConfig) \
	static constexpr const TCHAR* StaticConfigName() {return TEXT("Editor");} \



#define FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_15_ENHANCED_CONSTRUCTORS \
	/** Deleted move- and copy-constructors, should never be used */ \
	UDiversionConfig(UDiversionConfig&&) = delete; \
	UDiversionConfig(const UDiversionConfig&) = delete; \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UDiversionConfig); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UDiversionConfig); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UDiversionConfig) \
	NO_API virtual ~UDiversionConfig();


#define FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_12_PROLOG
#define FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_15_INCLASS_NO_PURE_DECLS \
	FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


class UDiversionConfig;

// ********** End Class UDiversionConfig ***********************************************************

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_FastUnrealTemplate_Plugins_Diversion_Source_Common_Public_DiversionConfig_h

PRAGMA_ENABLE_DEPRECATION_WARNINGS
