#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GameControllerTriggerEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int>   id;
    ::ll::TypedStorage<4, 4, float> magnitude;
    // NOLINTEND
};
