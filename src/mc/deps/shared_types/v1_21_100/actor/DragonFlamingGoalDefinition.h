#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"

namespace SharedTypes::v1_21_100 {

struct DragonFlamingGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>            mGroundFlameAttackCount;
    ::ll::TypedStorage<4, 4, float>          mCooldownTime;
    ::ll::TypedStorage<4, 4, float>          mFlameTime;
    ::ll::TypedStorage<4, 4, float>          mRoarTime;
    ::ll::TypedStorage<4, 4, float>          mSmokeRadius;
    ::ll::TypedStorage<4, 4, float>          mSmokeTime;
    ::ll::TypedStorage<8, 32, ::std::string> mSmokeColor;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_21_100
