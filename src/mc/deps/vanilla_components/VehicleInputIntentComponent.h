#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/deps/vanilla_components/StrictActorIDEntityContextPair.h"

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
    ::ll::TypedStorage<1, 1, bool>                              mDoMoveAndRotationAirControlled;
    ::ll::TypedStorage<8, 16, ::StrictActorIDEntityContextPair> mControllingEntity;
    ::ll::TypedStorage<8, 8, uint64>                            mCurrentTick;
    // NOLINTEND
};
