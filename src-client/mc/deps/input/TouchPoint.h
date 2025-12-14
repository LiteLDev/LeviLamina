#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchState.h"

struct TouchPoint {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>          id;
    ::ll::TypedStorage<4, 4, ::TouchState> state;
    ::ll::TypedStorage<4, 4, float>        x;
    ::ll::TypedStorage<4, 4, float>        y;
    ::ll::TypedStorage<1, 1, bool>         mCaptured;
    ::ll::TypedStorage<1, 1, bool>         mStartedInactive;
    // NOLINTEND
};
