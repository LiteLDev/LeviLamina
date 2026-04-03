#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ScrollbarDynamics {
public:
    // ScrollbarDynamics inner types declare
    // clang-format off
    class TargetPosDeltaSim;
    // clang-format on

    // ScrollbarDynamics inner types define
    class TargetPosDeltaSim {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>                                   mCurrentPosition;
    ::ll::TypedStorage<4, 4, float>                                   mLastPosition;
    ::ll::TypedStorage<4, 4, float>                                   mCurrentVelocity;
    ::ll::TypedStorage<4, 4, float>                                   mForces;
    ::ll::TypedStorage<4, 4, float>                                   mMinRange;
    ::ll::TypedStorage<4, 4, float>                                   mMaxRange;
    ::ll::TypedStorage<4, 4, float>                                   mMaxDisplacementPastMinMax;
    ::ll::TypedStorage<4, 4, float>                                   mTargetPosition;
    ::ll::TypedStorage<4, 4, float>                                   mTargetVelocity;
    ::ll::TypedStorage<4, 4, float>                                   mTargetPosDelta;
    ::ll::TypedStorage<1, 1, bool>                                    mTargetPositionActive;
    ::ll::TypedStorage<4, 16, ::ScrollbarDynamics::TargetPosDeltaSim> mPosDeltaSim;
    ::ll::TypedStorage<1, 1, bool>                                    mFinishFlick;
    ::ll::TypedStorage<4, 4, float>                                   mTargetPntMovedDist;
    // NOLINTEND

public:
    // member functions
    // NOLINTBEGIN
    MCAPI void update(float dt);
    // NOLINTEND
};
