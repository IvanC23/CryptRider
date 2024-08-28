// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "CryptRiderProjectile.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class UPrimitiveComponent;
struct FHitResult;
#ifdef CRYPTRIDER_CryptRiderProjectile_generated_h
#error "CryptRiderProjectile.generated.h already included, missing '#pragma once' in CryptRiderProjectile.h"
#endif
#define CRYPTRIDER_CryptRiderProjectile_generated_h

#define FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnHit);


#define FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesACryptRiderProjectile(); \
	friend struct Z_Construct_UClass_ACryptRiderProjectile_Statics; \
public: \
	DECLARE_CLASS(ACryptRiderProjectile, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/CryptRider"), NO_API) \
	DECLARE_SERIALIZER(ACryptRiderProjectile) \
	static const TCHAR* StaticConfigName() {return TEXT("Game");} \



#define FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	ACryptRiderProjectile(ACryptRiderProjectile&&); \
	ACryptRiderProjectile(const ACryptRiderProjectile&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ACryptRiderProjectile); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ACryptRiderProjectile); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ACryptRiderProjectile) \
	NO_API virtual ~ACryptRiderProjectile();


#define FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_12_PROLOG
#define FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_INCLASS_NO_PURE_DECLS \
	FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h_15_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> CRYPTRIDER_API UClass* StaticClass<class ACryptRiderProjectile>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_crusc_Documents_GitHub_CryptRider_CryptRider_Source_CryptRider_CryptRiderProjectile_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
