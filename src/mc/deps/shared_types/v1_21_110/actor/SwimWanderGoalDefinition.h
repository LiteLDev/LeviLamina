#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_21_110 {

struct SwimWanderGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mInterval;
    ::ll::TypedStorage<4, 4, float> mLookAheadDistance;
    ::ll::TypedStorage<4, 4, float> mSpeedMultiplier;
    ::ll::TypedStorage<4, 4, float> mWanderTime;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static float const& DEFAULT_INTERVAL();

    MCAPI static float const& DEFAULT_LOOK_AHEAD();

    MCAPI static float const& DEFAULT_SPEED_MULTIPLIER();

    MCAPI static float const& DEFAULT_WANDER_TIME();

    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_110
