// Copyright 1998-2017 Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	C++ class header boilerplate exported from UnrealHeaderTool.
	This is automatically generated by the tools.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef WHOOT_WhootGameMode_generated_h
#error "WhootGameMode.generated.h already included, missing '#pragma once' in WhootGameMode.h"
#endif
#define WHOOT_WhootGameMode_generated_h

#define Whoot_Source_Whoot_WhootGameMode_h_9_RPC_WRAPPERS
#define Whoot_Source_Whoot_WhootGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS
#define Whoot_Source_Whoot_WhootGameMode_h_9_INCLASS_NO_PURE_DECLS \
	private: \
	static void StaticRegisterNativesAWhootGameMode(); \
	friend WHOOT_API class UClass* Z_Construct_UClass_AWhootGameMode(); \
	public: \
	DECLARE_CLASS(AWhootGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Whoot"), WHOOT_API) \
	DECLARE_SERIALIZER(AWhootGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Whoot_Source_Whoot_WhootGameMode_h_9_INCLASS \
	private: \
	static void StaticRegisterNativesAWhootGameMode(); \
	friend WHOOT_API class UClass* Z_Construct_UClass_AWhootGameMode(); \
	public: \
	DECLARE_CLASS(AWhootGameMode, AGameModeBase, COMPILED_IN_FLAGS(0 | CLASS_Transient), 0, TEXT("/Script/Whoot"), WHOOT_API) \
	DECLARE_SERIALIZER(AWhootGameMode) \
	/** Indicates whether the class is compiled into the engine */ \
	enum {IsIntrinsic=COMPILED_IN_INTRINSIC};


#define Whoot_Source_Whoot_WhootGameMode_h_9_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	WHOOT_API AWhootGameMode(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(AWhootGameMode) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WHOOT_API, AWhootGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhootGameMode); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WHOOT_API AWhootGameMode(AWhootGameMode&&); \
	WHOOT_API AWhootGameMode(const AWhootGameMode&); \
public:


#define Whoot_Source_Whoot_WhootGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	WHOOT_API AWhootGameMode(AWhootGameMode&&); \
	WHOOT_API AWhootGameMode(const AWhootGameMode&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(WHOOT_API, AWhootGameMode); \
DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(AWhootGameMode); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(AWhootGameMode)


#define Whoot_Source_Whoot_WhootGameMode_h_9_PRIVATE_PROPERTY_OFFSET
#define Whoot_Source_Whoot_WhootGameMode_h_6_PROLOG
#define Whoot_Source_Whoot_WhootGameMode_h_9_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Whoot_Source_Whoot_WhootGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Whoot_Source_Whoot_WhootGameMode_h_9_RPC_WRAPPERS \
	Whoot_Source_Whoot_WhootGameMode_h_9_INCLASS \
	Whoot_Source_Whoot_WhootGameMode_h_9_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Whoot_Source_Whoot_WhootGameMode_h_9_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Whoot_Source_Whoot_WhootGameMode_h_9_PRIVATE_PROPERTY_OFFSET \
	Whoot_Source_Whoot_WhootGameMode_h_9_RPC_WRAPPERS_NO_PURE_DECLS \
	Whoot_Source_Whoot_WhootGameMode_h_9_INCLASS_NO_PURE_DECLS \
	Whoot_Source_Whoot_WhootGameMode_h_9_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Whoot_Source_Whoot_WhootGameMode_h


PRAGMA_ENABLE_DEPRECATION_WARNINGS
