#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/math/Vec2.h"
#include "mc/platform/brstd/bitset.h"

struct MoveInputState {
public:
    // MoveInputState inner types define
    enum class Flag : uint {};

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::brstd::bitset<27, uint>> mFlagValues;
    ::ll::TypedStorage<4, 8, ::Vec2>                    mAnalogMoveVector;
    ::ll::TypedStorage<1, 1, uchar>                     mLookSlightDirField;
    ::ll::TypedStorage<1, 1, uchar>                     mLookNormalDirField;
    ::ll::TypedStorage<1, 1, uchar>                     mLookSmoothDirField;
    // NOLINTEND
};
