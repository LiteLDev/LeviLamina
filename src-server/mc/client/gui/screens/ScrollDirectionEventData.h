#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ScrollDirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 8, float[2]> cursorPosition;
    ::ll::TypedStorage<4, 8, float[2]> deltaPosition;
    // NOLINTEND

};
