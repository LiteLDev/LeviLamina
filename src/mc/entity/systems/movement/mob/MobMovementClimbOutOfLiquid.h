#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementClimbOutOfLiquid {
// NOLINTBEGIN
MCAPI void climbOutOfLiquid(
    class StrictEntityContext const&,
    struct AABBShapeComponent const& aabbShape,
    struct MobTravelComponent const& mobTravel,
    struct StateVectorComponent&     stateVector,
    class IConstBlockSource const&   region
);

MCAPI void forSystem(std::function<void(struct TickingSystemWithInfo&&)> const& func);
// NOLINTEND

}; // namespace MobMovementClimbOutOfLiquid
