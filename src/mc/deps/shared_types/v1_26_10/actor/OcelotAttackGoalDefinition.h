#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

// auto generated forward declare list
// clang-format off
namespace cereal { struct ReflectionCtx; }
// clang-format on

namespace SharedTypes::v1_26_10 {

struct OcelotAttackGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float> mCooldownTime;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationX;
    ::ll::TypedStorage<4, 4, float> mMaxHeadRotationY;
    ::ll::TypedStorage<4, 4, float> mMaxDistance;
    ::ll::TypedStorage<4, 4, float> mMaxSneakRange;
    ::ll::TypedStorage<4, 4, float> mMaxSprintRange;
    ::ll::TypedStorage<4, 4, float> mReachMultiplier;
    ::ll::TypedStorage<4, 4, float> mSneakSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mSprintSpeedModifier;
    ::ll::TypedStorage<4, 4, float> mWalkSpeedModifier;
    // NOLINTEND

public:
    // static functions
    // NOLINTBEGIN
    MCAPI static void bindType(::cereal::ReflectionCtx& ctx);
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& COOLDOWN_TIME_PROP_NAME();

    MCAPI static ::std::string_view const& MAX_DISTANCE_PROP_NAME();

    MCAPI static ::std::string_view const& MAX_HEAD_ROTATION_X_PROP_NAME();

    MCAPI static ::std::string_view const& MAX_HEAD_ROTATION_Y_PROP_NAME();

    MCAPI static ::std::string_view const& MAX_SNEAK_RANGE_PROP_NAME();

    MCAPI static ::std::string_view const& MAX_SPRINT_RANGE_PROP_NAME();

    MCAPI static ::std::string_view const& NAME();

    MCAPI static ::std::string_view const& REACH_MULTIPLIER_PROP_NAME();

    MCAPI static ::std::string_view const& SNEAK_SPEED_MULTIPLIER_PROP_NAME();

    MCAPI static ::std::string_view const& SPRINT_SPEED_MULTIPLIER_PROP_NAME();

    MCAPI static ::std::string_view const& WALK_SPEED_MULTIPLIER_PROP_NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
