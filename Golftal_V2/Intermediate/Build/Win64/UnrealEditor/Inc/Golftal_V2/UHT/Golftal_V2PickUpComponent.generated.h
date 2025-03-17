// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

// IWYU pragma: private, include "Golftal_V2PickUpComponent.h"
#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
class AActor;
class AGolftal_V2Character;
class UPrimitiveComponent;
struct FHitResult;
#ifdef GOLFTAL_V2_Golftal_V2PickUpComponent_generated_h
#error "Golftal_V2PickUpComponent.generated.h already included, missing '#pragma once' in Golftal_V2PickUpComponent.h"
#endif
#define GOLFTAL_V2_Golftal_V2PickUpComponent_generated_h

#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_12_DELEGATE \
GOLFTAL_V2_API void FOnPickUp_DelegateWrapper(const FMulticastScriptDelegate& OnPickUp, AGolftal_V2Character* PickUpCharacter);


#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	DECLARE_FUNCTION(execOnSphereBeginOverlap);


#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesUGolftal_V2PickUpComponent(); \
	friend struct Z_Construct_UClass_UGolftal_V2PickUpComponent_Statics; \
public: \
	DECLARE_CLASS(UGolftal_V2PickUpComponent, USphereComponent, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Golftal_V2"), NO_API) \
	DECLARE_SERIALIZER(UGolftal_V2PickUpComponent)


#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	UGolftal_V2PickUpComponent(UGolftal_V2PickUpComponent&&); \
	UGolftal_V2PickUpComponent(const UGolftal_V2PickUpComponent&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, UGolftal_V2PickUpComponent); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(UGolftal_V2PickUpComponent); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(UGolftal_V2PickUpComponent) \
	NO_API virtual ~UGolftal_V2PickUpComponent();


#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_14_PROLOG
#define FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_RPC_WRAPPERS_NO_PURE_DECLS \
	FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_INCLASS_NO_PURE_DECLS \
	FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h_17_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> GOLFTAL_V2_API UClass* StaticClass<class UGolftal_V2PickUpComponent>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID FID_Users_louis_Documents_GitHub_Golftal_V2_Source_Golftal_V2_Golftal_V2PickUpComponent_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
