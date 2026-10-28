#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/BlockDescriptor.h"

namespace SharedTypes::v1_26_60 {

struct BuoyancyComponentDefinition {
public:
    // BuoyancyComponentDefinition inner types define
    enum class MovementType : uint {
        None    = 0,
        Waves   = 1,
        Bobbing = 2,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mBaseBuoyancy;
    ::ll::TypedStorage<4, 4, float> mDragDownOnRemoval;
    ::ll::TypedStorage<4, 4, float> mBigWaveProbability;
    ::ll::TypedStorage<4, 4, float> mBigWaveSpeedMultiplier;
    ::ll::TypedStorage<4, 4, ::SharedTypes::v1_26_60::BuoyancyComponentDefinition::MovementType> mMovementType;
    ::ll::TypedStorage<1, 1, bool>                                                               mApplyGravity;
    ::ll::TypedStorage<1, 1, bool>                                                               mCanAutoStepFromLiquid;
    ::ll::TypedStorage<8, 24, ::std::vector<::SharedTypes::Legacy::BlockDescriptor>>             mLiquidBlocks;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_60
