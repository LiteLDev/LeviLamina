#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class IConstBlockSource;
class StrictEntityContext;
class Vec3;
struct AABBShapeComponent;
struct MobTravelComponent;
struct StateVectorComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementClimbOutOfLiquid {
// functions
// NOLINTBEGIN
MCAPI void climbOutOfLiquid(
    ::StrictEntityContext const& aabbShape,
    ::AABBShapeComponent const&  mobTravel,
    ::MobTravelComponent const&  stateVector,
    ::StateVectorComponent&      region,
    ::IConstBlockSource const&
);

MCAPI void forSystem(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI bool isBoxAtOffsetInBlocksOrLiquid(
    ::AABBShapeComponent const& aabbShape,
    ::Vec3 const&               offset,
    ::IConstBlockSource const&  region
);
// NOLINTEND

} // namespace MobMovementClimbOutOfLiquid
