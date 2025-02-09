#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/input/enums/DirectionId.h"

struct ControllerDirectionEventData {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<1, 4, ::DirectionId> directionId;
    ::ll::TypedStorage<4, 8, float[2]>      deltaPosition;
    // NOLINTEND
};
