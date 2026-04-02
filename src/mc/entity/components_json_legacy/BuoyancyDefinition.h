#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/json/Value.h"
#include "mc/util/json_util/JsonSchemaObjectNode.h"

// auto generated forward declare list
// clang-format off
class BlockDescriptor;
class BuoyancyComponent;
class EntityContext;
namespace JsonUtil { class EmptyClass; }
// clang-format on

class BuoyancyDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                             mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float>                             mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float>                             mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<1, 1, bool>                              mSimulateWaves;
    ::ll::TypedStorage<1, 1, bool>                              mApplyGravity;
    ::ll::TypedStorage<8, 24, ::std::vector<::BlockDescriptor>> mLiquidBlocks;
    ::ll::TypedStorage<8, 16, ::Json::Value>                    mFloatData;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void _addLiquidBlockDescriptor(::BlockDescriptor const& liquidBlockDescriptor);

    MCAPI ::Json::Value _serialize() const;

    MCAPI void initialize(::EntityContext& entity, ::BuoyancyComponent& component) const;

    MCAPI void uninitialize(::EntityContext& entity, ::BuoyancyComponent&) const;

    MCAPI ~BuoyancyDefinition();
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void buildSchema(
        ::std::shared_ptr<::JsonUtil::JsonSchemaObjectNode<::JsonUtil::EmptyClass, ::BuoyancyDefinition>>& root
    );
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCAPI void $dtor();
    // NOLINTEND
};
