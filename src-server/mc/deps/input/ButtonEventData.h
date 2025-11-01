#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/ButtonState.h"

struct ButtonEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>          id;
    ::ll::TypedStorage<1, 1, ::ButtonState> state;
    ::ll::TypedStorage<1, 1, bool>          exclusive;
    ::ll::TypedStorage<4, 4, float>         repeatInterval;
    ::ll::TypedStorage<4, 4, int>           source;
    // NOLINTEND
};
