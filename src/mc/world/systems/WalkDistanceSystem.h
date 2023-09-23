#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace WalkDistanceSystem {
// NOLINTBEGIN
// symbol: ?createSystem@WalkDistanceSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();

// symbol:
// ?updateWalkDistance@WalkDistanceSystem@@YAXAEBUMoveRequestComponent@@AEBUStateVectorComponent@@AEAUWalkDistComponent@@@Z
MCAPI void
updateWalkDistance(struct MoveRequestComponent const&, struct StateVectorComponent const&, struct WalkDistComponent&);
// NOLINTEND

}; // namespace WalkDistanceSystem
