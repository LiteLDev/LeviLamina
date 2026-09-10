#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/actor/BaseGoalDefinition.h"
#include "mc/deps/shared_types/shared_types/FloatRange.h"

namespace SharedTypes::v1_26_40 {

struct FloatWanderGoalDefinition : public ::SharedTypes::BaseGoalDefinition {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                       mXZDist;
    ::ll::TypedStorage<4, 4, int>                       mYDist;
    ::ll::TypedStorage<4, 4, float>                     mYOffset;
    ::ll::TypedStorage<1, 1, bool>                      mMustReach;
    ::ll::TypedStorage<1, 1, bool>                      mRandomReselect;
    ::ll::TypedStorage<1, 1, bool>                      mUseHomePositionRestriction;
    ::ll::TypedStorage<4, 8, ::SharedTypes::FloatRange> mFloatDuration;
    ::ll::TypedStorage<1, 1, bool>                      mFloatWanderHasMoveControl;
    ::ll::TypedStorage<4, 4, int>                       mSurfaceXZDist;
    ::ll::TypedStorage<4, 4, int>                       mSurfaceYDist;
    ::ll::TypedStorage<1, 1, bool>                      mAdditionalCollisionBuffer;
    ::ll::TypedStorage<1, 1, bool>                      mNavigateAroundSurface;
    ::ll::TypedStorage<1, 1, bool>                      mAllowNavigatingThroughLiquids;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static ::std::string_view const& NAME();
    // NOLINTEND
};

} // namespace SharedTypes::v1_26_40
