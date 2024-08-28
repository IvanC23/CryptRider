// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/GeneratedCppIncludes.h"
#include "CryptRider/CryptRiderGameMode.h"
PRAGMA_DISABLE_DEPRECATION_WARNINGS
void EmptyLinkFunctionForGeneratedCodeCryptRiderGameMode() {}

// Begin Cross Module References
CRYPTRIDER_API UClass* Z_Construct_UClass_ACryptRiderGameMode();
CRYPTRIDER_API UClass* Z_Construct_UClass_ACryptRiderGameMode_NoRegister();
ENGINE_API UClass* Z_Construct_UClass_AGameModeBase();
UPackage* Z_Construct_UPackage__Script_CryptRider();
// End Cross Module References

// Begin Class ACryptRiderGameMode
void ACryptRiderGameMode::StaticRegisterNativesACryptRiderGameMode()
{
}
IMPLEMENT_CLASS_NO_AUTO_REGISTRATION(ACryptRiderGameMode);
UClass* Z_Construct_UClass_ACryptRiderGameMode_NoRegister()
{
	return ACryptRiderGameMode::StaticClass();
}
struct Z_Construct_UClass_ACryptRiderGameMode_Statics
{
#if WITH_METADATA
	static constexpr UECodeGen_Private::FMetaDataPairParam Class_MetaDataParams[] = {
		{ "HideCategories", "Info Rendering MovementReplication Replication Actor Input Movement Collision Rendering HLOD WorldPartition DataLayers Transformation" },
		{ "IncludePath", "CryptRiderGameMode.h" },
		{ "ModuleRelativePath", "CryptRiderGameMode.h" },
		{ "ShowCategories", "Input|MouseInput Input|TouchInput" },
	};
#endif // WITH_METADATA
	static UObject* (*const DependentSingletons[])();
	static constexpr FCppClassTypeInfoStatic StaticCppClassTypeInfo = {
		TCppClassTypeTraits<ACryptRiderGameMode>::IsAbstract,
	};
	static const UECodeGen_Private::FClassParams ClassParams;
};
UObject* (*const Z_Construct_UClass_ACryptRiderGameMode_Statics::DependentSingletons[])() = {
	(UObject* (*)())Z_Construct_UClass_AGameModeBase,
	(UObject* (*)())Z_Construct_UPackage__Script_CryptRider,
};
static_assert(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRiderGameMode_Statics::DependentSingletons) < 16);
const UECodeGen_Private::FClassParams Z_Construct_UClass_ACryptRiderGameMode_Statics::ClassParams = {
	&ACryptRiderGameMode::StaticClass,
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
	METADATA_PARAMS(UE_ARRAY_COUNT(Z_Construct_UClass_ACryptRiderGameMode_Statics::Class_MetaDataParams), Z_Construct_UClass_ACryptRiderGameMode_Statics::Class_MetaDataParams)
};
UClass* Z_Construct_UClass_ACryptRiderGameMode()
{
	if (!Z_Registration_Info_UClass_ACryptRiderGameMode.OuterSingleton)
	{
		UECodeGen_Private::ConstructUClass(Z_Registration_Info_UClass_ACryptRiderGameMode.OuterSingleton, Z_Construct_UClass_ACryptRiderGameMode_Statics::ClassParams);
	}
	return Z_Registration_Info_UClass_ACryptRiderGameMode.OuterSingleton;
}
template<> CRYPTRIDER_API UClass* StaticClass<ACryptRiderGameMode>()
{
	return ACryptRiderGameMode::StaticClass();
}
DEFINE_VTABLE_PTR_HELPER_CTOR(ACryptRiderGameMode);
ACryptRiderGameMode::~ACryptRiderGameMode() {}
// End Class ACryptRiderGameMode

// Begin Registration
struct Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderGameMode_h_Statics
{
	static constexpr FClassRegisterCompiledInInfo ClassInfo[] = {
		{ Z_Construct_UClass_ACryptRiderGameMode, ACryptRiderGameMode::StaticClass, TEXT("ACryptRiderGameMode"), &Z_Registration_Info_UClass_ACryptRiderGameMode, CONSTRUCT_RELOAD_VERSION_INFO(FClassReloadVersionInfo, sizeof(ACryptRiderGameMode), 152975379U) },
	};
};
static FRegisterCompiledInInfo Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderGameMode_h_3988285142(TEXT("/Script/CryptRider"),
	Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderGameMode_h_Statics::ClassInfo, UE_ARRAY_COUNT(Z_CompiledInDeferFile_FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderGameMode_h_Statics::ClassInfo),
	nullptr, 0,
	nullptr, 0);
// End Registration
PRAGMA_ENABLE_DEPRECATION_WARNINGS
