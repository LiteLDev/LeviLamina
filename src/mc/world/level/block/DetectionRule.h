#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/world/level/block/LiquidReaction.h"
#include "mc/world/level/block/LiquidType.h"

struct DetectionRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<1, 1> mUnkd9aa3a;
    ::ll::UntypedStorage<1, 1> mUnk119cc3;
    ::ll::UntypedStorage<1, 1> mUnk21e36d;
    ::ll::UntypedStorage<1, 1> mUnk14e35f;
    // NOLINTEND

public:
    // prevent constructor by default
    DetectionRule& operator=(DetectionRule const&);
    DetectionRule(DetectionRule const&);
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
