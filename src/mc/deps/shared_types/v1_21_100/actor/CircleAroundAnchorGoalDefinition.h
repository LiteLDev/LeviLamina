#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_100 {

struct CircleAroundAnchorGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                     mRadiusModifier;
    ::ll::TypedStorage<4, 4, float>                     mRadiusAdjustmentChance;
    ::ll::TypedStorage<4, 4, float>                     mHeightAdjustmentChance;
    ::ll::TypedStorage<4, 4, float>                     mGoalRadius;
    ::ll::TypedStorage<4, 4, float>                     mSpeedModifier;
    ::ll::TypedStorage<4, 4, float>                     mAngleModifier;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mRadiusBounds;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mHeightOffsetBounds;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mAboveTargetBounds;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_RADIUS_CHANGE();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
