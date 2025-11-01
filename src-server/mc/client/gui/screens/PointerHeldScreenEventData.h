#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PointerHeldScreenEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> position;
    ::ll::TypedStorage<4, 8, float[2]> relativePosition;
    ::ll::TypedStorage<1, 1, bool> moved;
    // NOLINTEND

};
