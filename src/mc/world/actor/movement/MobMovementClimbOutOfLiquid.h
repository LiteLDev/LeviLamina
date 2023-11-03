#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementClimbOutOfLiquid {
// NOLINTBEGIN
// symbol:
// ?climbOutOfLiquid@MobMovementClimbOutOfLiquid@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMobTravelComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
climbOutOfLiquid(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MobTravelComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol: ?createSystem@MobMovementClimbOutOfLiquid@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace MobMovementClimbOutOfLiquid
