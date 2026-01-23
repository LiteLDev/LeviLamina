#pragma once

#include "mc/_HeaderOutputPredefine.h"

class MouseAction {
public:
    // MouseAction inner types define
    enum : schar {
        ActionMove         = 0,
        ActionLeft         = 1,
        ActionRight        = 2,
        ActionMiddle       = 3,
        ActionWheel        = 4,
        ActionX1           = 5,
        ActionX2           = 6,
        ActionMoveRelative = 7,
        DataUp             = 0,
        DataDown           = 1,
    };

public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<2, 2, short> x;
    ::ll::TypedStorage<2, 2, short> y;
    ::ll::TypedStorage<2, 2, short> dx;
    ::ll::TypedStorage<2, 2, short> dy;
    ::ll::TypedStorage<1, 1, char>  action;
    ::ll::TypedStorage<1, 1, schar> data;
    ::ll::TypedStorage<4, 4, int>   pointerId;
    ::ll::TypedStorage<1, 1, bool>  forceMotionlessPointer;
    // NOLINTEND
};
