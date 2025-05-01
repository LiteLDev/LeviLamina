#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"

struct MoveInputState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 1, bool>   mSneakDown;
    ::ll::TypedStorage<1, 1, bool>   mSneakToggleDown;
    ::ll::TypedStorage<1, 1, bool>   mWantDownSlow;
    ::ll::TypedStorage<1, 1, bool>   mWantUpSlow;
    ::ll::TypedStorage<1, 1, bool>   mBlockSelectDown;
    ::ll::TypedStorage<1, 1, bool>   mAscendBlock;
    ::ll::TypedStorage<1, 1, bool>   mDescendBlock;
    ::ll::TypedStorage<1, 1, bool>   mJumpDown;
    ::ll::TypedStorage<1, 1, bool>   mSprintDown;
    ::ll::TypedStorage<1, 1, bool>   mUpLeft;
    ::ll::TypedStorage<1, 1, bool>   mUpRight;
    ::ll::TypedStorage<1, 1, bool>   mDownLeft;
    ::ll::TypedStorage<1, 1, bool>   mDownRight;
    ::ll::TypedStorage<1, 1, bool>   mUp;
    ::ll::TypedStorage<1, 1, bool>   mDown;
    ::ll::TypedStorage<1, 1, bool>   mLeft;
    ::ll::TypedStorage<1, 1, bool>   mRight;
    ::ll::TypedStorage<1, 1, bool>   mAscend;
    ::ll::TypedStorage<1, 1, bool>   mDescend;
    ::ll::TypedStorage<1, 1, bool>   mChangeHeight;
    ::ll::TypedStorage<4, 8, ::Vec2> mAnalogMoveVector;
    ::ll::TypedStorage<1, 1, bool>   mLookCenter;
    ::ll::TypedStorage<1, 1, uchar>  mLookSlightDirField;
    ::ll::TypedStorage<1, 1, uchar>  mLookNormalDirField;
    ::ll::TypedStorage<1, 1, uchar>  mLookSmoothDirField;
    ::ll::TypedStorage<1, 1, bool>   mSneakInputCurrentlyDown;
    ::ll::TypedStorage<1, 1, bool>   mSneakInputWasReleased;
    ::ll::TypedStorage<1, 1, bool>   mSneakInputWasPressed;
    ::ll::TypedStorage<1, 1, bool>   mJumpInputWasReleased;
    ::ll::TypedStorage<1, 1, bool>   mJumpInputWasPressed;
    ::ll::TypedStorage<1, 1, bool>   mJumpInputCurrentlyDown;
    // NOLINTEND
};
