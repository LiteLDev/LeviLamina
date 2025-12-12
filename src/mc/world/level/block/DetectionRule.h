#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/world/level/block/BlockedDirections.h"
#include "mc/world/level/block/LiquidReaction.h"
#include "mc/world/level/block/LiquidType.h"

struct DetectionRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                mCanContainLiquid;
    ::ll::TypedStorage<1, 1, ::BlockedDirections> mStopsFlowDirections;
    ::ll::TypedStorage<1, 1, ::LiquidReaction>    mOnLiquidTouches;
    ::ll::TypedStorage<1, 1, ::LiquidType>        mLiquidType;
    // NOLINTEND

public:
    // prevent constructor by default
    DetectionRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DetectionRule(
        ::LiquidType                                liquidType,
        bool                                        canContainLiquid,
        ::LiquidReaction                            onLiquidTouches,
        ::std::vector<::SharedTypes::Facing> const& stopsWaterFlowingOutFromDirections
    );
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::LiquidType                                liquidType,
        bool                                        canContainLiquid,
        ::LiquidReaction                            onLiquidTouches,
        ::std::vector<::SharedTypes::Facing> const& stopsWaterFlowingOutFromDirections
    );
    // NOLINTEND
};
