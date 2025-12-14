#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/TouchTurnState.h"

struct TouchTurnControlState {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::TouchTurnState> touchTurnState;
    ::ll::TypedStorage<4, 4, int>              activePointerId;
    ::ll::TypedStorage<8, 8, double>           startTurnTime;
    ::ll::TypedStorage<4, 4, float>            totalMoveDelta;
    ::ll::TypedStorage<1, 1, bool>             holdGesture;
    ::ll::TypedStorage<4, 4, float>            x0;
    ::ll::TypedStorage<4, 4, float>            y0;
    // NOLINTEND
};
