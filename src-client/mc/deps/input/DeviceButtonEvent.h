#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DeviceButtonState.h"

struct DeviceButtonEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>                 id;
    ::ll::TypedStorage<4, 4, ::DeviceButtonState> state;
    // NOLINTEND
};
