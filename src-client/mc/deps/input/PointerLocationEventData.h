#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/InputMode.h"

struct PointerLocationEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, ::InputMode> inputMode;
    ::ll::TypedStorage<2, 2, short>       x;
    ::ll::TypedStorage<2, 2, short>       y;
    ::ll::TypedStorage<1, 1, bool>        forceMotionlessPointer;
    // NOLINTEND
};
