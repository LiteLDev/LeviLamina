#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/JoystickState.h"

struct TouchMoveAndTurnControlState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>            initialized;
    ::ll::TypedStorage<4, 4, ::JoystickState> mTurnState;
    ::ll::TypedStorage<4, 4, ::JoystickState> mMoveState;
    ::ll::TypedStorage<4, 4, int>             mActiveTurnPointerId;
    ::ll::TypedStorage<4, 4, int>             mActiveMovePointerId;
    ::ll::TypedStorage<4, 4, int>             mActiveHoldPointerId;
    ::ll::TypedStorage<4, 4, int>             previousActivePointer;
    ::ll::TypedStorage<8, 8, double>          mStartTurnTime;
    ::ll::TypedStorage<8, 8, double>          mStartMoveTime;
    ::ll::TypedStorage<8, 8, int64>           mStartTimeMovingOutsideMaxZone;
    ::ll::TypedStorage<8, 8, int64>           mStartTimeTurningOutsideMaxZone;
    ::ll::TypedStorage<1, 1, bool>            mHoldGesture;
    ::ll::TypedStorage<1, 1, bool>            rollbackActionPointer;
    ::ll::TypedStorage<4, 4, float>           mMoveTouchX;
    ::ll::TypedStorage<4, 4, float>           mMoveTouchY;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchX;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchY;
    ::ll::TypedStorage<4, 4, float>           mMoveTouchX0;
    ::ll::TypedStorage<4, 4, float>           mMoveTouchY0;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchX0;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchY0;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchPrevX;
    ::ll::TypedStorage<4, 4, float>           mTurnTouchPrevY;
    ::ll::TypedStorage<4, 4, float>           mHoldX0;
    ::ll::TypedStorage<4, 4, float>           mHoldY0;
    // NOLINTEND
};
