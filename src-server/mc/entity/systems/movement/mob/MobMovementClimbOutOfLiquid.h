#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
struct AABBShapeComponent;
struct MobTravelComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementClimbOutOfLiquid {
// functions
// NOLINTBEGIN
MCNAPI void climbOutOfLiquid(
    ::StrictEntityContext const&,
    ::AABBShapeComponent const& aabbShape,
    ::MobTravelComponent const& mobTravel,
    ::StateVectorComponent&     stateVector,
    ::IConstBlockSource const&  region
);

MCNAPI void forSystem(::std::function<void(::TickingSystemWithInfo&&)> const& func);
// NOLINTEND

} // namespace MobMovementClimbOutOfLiquid
