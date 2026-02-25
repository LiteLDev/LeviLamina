#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

struct FlingGestureParameters {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, uint>                        minTouches;
    ::ll::TypedStorage<4, 4, uint>                        maxTouches;
    ::ll::TypedStorage<8, 8, ::std::chrono::milliseconds> maxIntervalBetweenMoves;
    ::ll::TypedStorage<4, 4, float>                       minDistanceCm;
    // NOLINTEND
};

} // namespace OreUI
