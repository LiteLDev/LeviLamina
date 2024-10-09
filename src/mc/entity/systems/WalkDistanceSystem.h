#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WalkDistanceSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void updateWalkDistance(
    struct MoveRequestComponent const& moveRequest,
    struct StateVectorComponent const& state,
    struct WalkDistComponent&          walkDistance
);
// NOLINTEND

}; // namespace WalkDistanceSystem
