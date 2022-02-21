// Copyright Epic Games, Inc. All Rights Reserved.
/*===========================================================================
	Generated code exported from UnrealHeaderTool.
	DO NOT modify this manually! Edit the corresponding .h files instead!
===========================================================================*/

#include "UObject/ObjectMacros.h"
#include "UObject/ScriptMacros.h"

PRAGMA_DISABLE_DEPRECATION_WARNINGS
#ifdef SNAKE_GAME_SnakeActor_generated_h
#error "SnakeActor.generated.h already included, missing '#pragma once' in SnakeActor.h"
#endif
#define SNAKE_GAME_SnakeActor_generated_h

#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_SPARSE_DATA
#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_RPC_WRAPPERS
#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS
#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_INCLASS_NO_PURE_DECLS \
private: \
	static void StaticRegisterNativesASnakeActor(); \
	friend struct Z_Construct_UClass_ASnakeActor_Statics; \
public: \
	DECLARE_CLASS(ASnakeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake_Game"), NO_API) \
	DECLARE_SERIALIZER(ASnakeActor)


#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_INCLASS \
private: \
	static void StaticRegisterNativesASnakeActor(); \
	friend struct Z_Construct_UClass_ASnakeActor_Statics; \
public: \
	DECLARE_CLASS(ASnakeActor, AActor, COMPILED_IN_FLAGS(0 | CLASS_Config), CASTCLASS_None, TEXT("/Script/Snake_Game"), NO_API) \
	DECLARE_SERIALIZER(ASnakeActor)


#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_STANDARD_CONSTRUCTORS \
	/** Standard constructor, called after all reflected properties have been initialized */ \
	NO_API ASnakeActor(const FObjectInitializer& ObjectInitializer); \
	DEFINE_DEFAULT_OBJECT_INITIALIZER_CONSTRUCTOR_CALL(ASnakeActor) \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeActor); \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeActor(ASnakeActor&&); \
	NO_API ASnakeActor(const ASnakeActor&); \
public:


#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
	/** Private move- and copy-constructors, should never be used */ \
	NO_API ASnakeActor(ASnakeActor&&); \
	NO_API ASnakeActor(const ASnakeActor&); \
public: \
	DECLARE_VTABLE_PTR_HELPER_CTOR(NO_API, ASnakeActor); \
	DEFINE_VTABLE_PTR_HELPER_CTOR_CALLER(ASnakeActor); \
	DEFINE_DEFAULT_CONSTRUCTOR_CALL(ASnakeActor)


#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_PRIVATE_PROPERTY_OFFSET
#define Snake_Game_Source_Snake_Game_SnakeActor_h_20_PROLOG
#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_GENERATED_BODY_LEGACY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_PRIVATE_PROPERTY_OFFSET \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_SPARSE_DATA \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_RPC_WRAPPERS \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_INCLASS \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_STANDARD_CONSTRUCTORS \
public: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


#define Snake_Game_Source_Snake_Game_SnakeActor_h_23_GENERATED_BODY \
PRAGMA_DISABLE_DEPRECATION_WARNINGS \
public: \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_PRIVATE_PROPERTY_OFFSET \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_SPARSE_DATA \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_RPC_WRAPPERS_NO_PURE_DECLS \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_INCLASS_NO_PURE_DECLS \
	Snake_Game_Source_Snake_Game_SnakeActor_h_23_ENHANCED_CONSTRUCTORS \
private: \
PRAGMA_ENABLE_DEPRECATION_WARNINGS


template<> SNAKE_GAME_API UClass* StaticClass<class ASnakeActor>();

#undef CURRENT_FILE_ID
#define CURRENT_FILE_ID Snake_Game_Source_Snake_Game_SnakeActor_h


#define FOREACH_ENUM_EMOVEMENTDIRECTION(op) \
	op(EMovementDirection::UP) \
	op(EMovementDirection::DOWN) \
	op(EMovementDirection::LEFT) \
	op(EMovementDirection::RIGHT) 

enum class EMovementDirection;
template<> SNAKE_GAME_API UEnum* StaticEnum<EMovementDirection>();

PRAGMA_ENABLE_DEPRECATION_WARNINGS
