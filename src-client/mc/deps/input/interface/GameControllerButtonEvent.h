#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerButtonState.h"

struct GameControllerButtonEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                         id;
    ::ll::TypedStorage<4, 4, ::GameControllerButtonState> state;
    ::ll::TypedStorage<1, 1, bool>                        allowRemapping;
    // NOLINTEND
};
