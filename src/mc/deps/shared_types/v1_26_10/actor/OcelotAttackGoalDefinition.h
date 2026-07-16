#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

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
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_10
