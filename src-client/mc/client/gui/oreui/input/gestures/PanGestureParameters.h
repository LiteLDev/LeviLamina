#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct PanGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>  minTouches;
    ::ll::TypedStorage<4, 4, uint>  maxTouches;
    ::ll::TypedStorage<4, 4, float> minDistanceCm;
    // NOLINTEND
};

} // namespace OreUI
