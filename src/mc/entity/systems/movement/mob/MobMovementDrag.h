#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementDrag {
// functions
// NOLINTBEGIN
MCAPI void forLiquidDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void forNormalDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCAPI void forWingFlapDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);
// NOLINTEND

} // namespace MobMovementDrag
