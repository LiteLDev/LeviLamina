#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementClimbOutOfLiquid {
// NOLINTBEGIN
MCAPI void
climbOutOfLiquid(class StrictEntityContext const&, struct AABBShapeComponent const&, struct MobTravelComponent const&, struct StateVectorComponent&, class IConstBlockSource const&);

MCAPI void forSystem(std::function<void(struct TickingSystemWithInfo&&)> const&);
// NOLINTEND

}; // namespace MobMovementClimbOutOfLiquid
