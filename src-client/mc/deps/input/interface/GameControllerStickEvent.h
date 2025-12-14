#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/interface/GameControllerStickState.h"

struct GameControllerStickEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                        id;
    ::ll::TypedStorage<4, 4, ::GameControllerStickState> state;
    ::ll::TypedStorage<4, 4, float>                      x;
    ::ll::TypedStorage<4, 4, float>                      y;
    // NOLINTEND
};
