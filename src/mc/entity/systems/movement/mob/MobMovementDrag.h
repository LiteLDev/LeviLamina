#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MobMovementDrag {
// functions
// NOLINTBEGIN
MCNAPI void forLiquidDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void forNormalDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);

MCNAPI void forWingFlapDragSystems(::std::function<void(::TickingSystemWithInfo&&)> const& func);
// NOLINTEND

} // namespace MobMovementDrag
