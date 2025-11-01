#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/deps/core/math/Vec3.h"
#include "mc/input/MoveInputState.h"
#include "mc/platform/brstd/bitset.h"

struct MoveInputComponent {
public:
    // MoveInputComponent inner types define
    enum class Flag : int {
        Sneaking = 0,
        Sprinting = 1,
        WantUp = 2,
        WantDown = 3,
        Jumping = 4,
        AutoJumpingInWater = 5,
        MoveInputStateLocked = 6,
        PersistSneak = 7,
        AutoJumpEnabled = 8,
        IsCameraRelativeMovementEnabled = 9,
        IsRotControlledByMoveDirection = 10,
        Count = 11,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 16, ::MoveInputState> mInputState;
    ::ll::TypedStorage<4, 16, ::MoveInputState> mRawInputState;
    ::ll::TypedStorage<1, 1, uchar> mHoldAutoJumpInWaterTicks;
    ::ll::TypedStorage<4, 8, ::Vec2> mMove;
    ::ll::TypedStorage<4, 8, ::Vec2> mLookDelta;
    ::ll::TypedStorage<4, 8, ::Vec2> mInteractDir;
    ::ll::TypedStorage<4, 12, ::Vec3> mDisplacement;
    ::ll::TypedStorage<4, 12, ::Vec3> mDisplacementDelta;
    ::ll::TypedStorage<4, 12, ::Vec3> mCameraOrientation;
    ::ll::TypedStorage<2, 2, ::brstd::bitset<11, ushort>> mFlagValues;
    ::ll::TypedStorage<1, 2, ::std::array<bool, 2>> mIsPaddling;
    // NOLINTEND

};
