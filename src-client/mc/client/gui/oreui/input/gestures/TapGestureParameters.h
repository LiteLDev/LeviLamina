#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct TapGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        maxTouches;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> timeTolerance;
    ::ll::TypedStorage<4, 4, float>                       distanceToleranceCm;
    // NOLINTEND
};

} // namespace OreUI
