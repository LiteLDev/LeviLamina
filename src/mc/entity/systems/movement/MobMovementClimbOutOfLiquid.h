#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementClimbOutOfLiquid {
// NOLINTBEGIN
// symbol:
// ?climbOutOfLiquid@MobMovementClimbOutOfLiquid@@YAXAEBVStrictEntityContext@@AEBUAABBShapeComponent@@AEBUMobTravelComponent@@AEAUStateVectorComponent@@AEBVIConstBlockSource@@@Z
MCAPI void
climbOutOfLiquid(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MobTravelComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);

// symbol: ?forSystem@MobMovementClimbOutOfLiquid@@YAXAEBV?$function@$$A6AX$$QEAUTickingSystemWithInfo@@@Z@std@@@Z
MCAPI void forSystem(std::function<void(struct TickingSystemWithInfo&&)> const&);
// NOLINTEND

}; // namespace MobMovementClimbOutOfLiquid
