#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/platform/brstd/bitset.h"

struct MoveInputState {
public:
    // MoveInputState inner types define
    enum class Flag : int {
        SneakDown = 0,
        SneakToggleDown = 1,
        WantDownSlow = 2,
        WantUpSlow = 3,
        BlockSelectDown = 4,
        AscendBlock = 5,
        DescendBlock = 6,
        JumpDown = 7,
        SprintDown = 8,
        UpLeft = 9,
        UpRight = 10,
        DownLeft = 11,
        DownRight = 12,
        Up = 13,
        Down = 14,
        Left = 15,
        Right = 16,
        Ascend = 17,
        Descend = 18,
        ChangeHeight = 19,
        LookCenter = 20,
        SneakInputCurrentlyDown = 21,
        SneakInputWasReleased = 22,
        SneakInputWasPressed = 23,
        JumpInputWasReleased = 24,
        JumpInputWasPressed = 25,
        JumpInputCurrentlyDown = 26,
        Count = 27,
    };
    
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::brstd::bitset<27, uint>> mFlagValues;
    ::ll::TypedStorage<4, 8, ::Vec2> mAnalogMoveVector;
    ::ll::TypedStorage<1, 1, uchar> mLookSlightDirField;
    ::ll::TypedStorage<1, 1, uchar> mLookNormalDirField;
    ::ll::TypedStorage<1, 1, uchar> mLookSmoothDirField;
    // NOLINTEND

};
