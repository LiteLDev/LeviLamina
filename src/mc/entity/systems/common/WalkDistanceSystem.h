#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WalkDistanceSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createSystem();

MCAPI void
updateWalkDistance(struct MoveRequestComponent const&, struct StateVectorComponent const&, struct WalkDistComponent&);
// NOLINTEND

}; // namespace WalkDistanceSystem
