#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/legacy/Facing.h"
#include "mc/deps/shared_types/v1_26_0/block/BlockedDirections.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidReaction.h"
#include "mc/deps/shared_types/v1_26_0/block/LiquidType.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_0 {

struct DetectionRule {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                                      mCanContainLiquid;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::BlockedDirections> mStopsFlowDirections;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::LiquidReaction>    mOnLiquidTouches;
    ::ll::TypedStorage<1, 1, ::SharedTypes::v1_26_0::LiquidType>        mLiquidType;
    ::ll::TypedStorage<1, 1, bool>                                      mClipAgainstCollider;
    // NOLINTEND

public:
    // prevent constructor by default
    DetectionRule();

public:
    // member functions
    // NOLINTBEGIN
    MCAPI DetectionRule(
        ::SharedTypes::v1_26_0::LiquidType          liquidType,
        bool                                        canContainLiquid,
        ::SharedTypes::v1_26_0::LiquidReaction      onLiquidTouches,
        ::std::vector<::SharedTypes::Facing> const& stopsWaterFlowingOutFromDirections,
        bool                                        clipAgainstCollider
    );
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // constructor thunks
    // NOLINTBEGIN
    MCAPI void* $ctor(
        ::SharedTypes::v1_26_0::LiquidType          liquidType,
        bool                                        canContainLiquid,
        ::SharedTypes::v1_26_0::LiquidReaction      onLiquidTouches,
        ::std::vector<::SharedTypes::Facing> const& stopsWaterFlowingOutFromDirections,
        bool                                        clipAgainstCollider
    );
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_0
