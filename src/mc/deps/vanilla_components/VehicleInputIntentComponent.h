#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class Vec2;
class Vec3;
struct StrictActorIDEntityContextPair;
// clang-format on

struct VehicleInputIntentComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>                              mWASDControlled;
    ::ll::TypedStorage<1, 1, bool>                              mControlledByPlayer;
    ::ll::TypedStorage<1, 1, bool>                              mIsClientPredicted;
    ::ll::TypedStorage<1, 1, bool>                              mUsePaddleForce;
    ::ll::TypedStorage<4, 4, int>                               mJumpAmount;
    ::ll::TypedStorage<4, 8, ::Vec2>                            mRotation;
    ::ll::TypedStorage<4, 12, ::Vec3>                           mLocalMovementVelocity;
    ::ll::TypedStorage<4, 8, ::std::array<float, 2>>            mPaddleForces;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>>             mIsPaddling;
    ::ll::TypedStorage<1, 1, bool>                              mDoMoveAndRotation;
    ::ll::TypedStorage<8, 16, ::StrictActorIDEntityContextPair> mControllingEntity;
    ::ll::TypedStorage<8, 8, uint64>                            mCurrentTick;
    // NOLINTEND
};
