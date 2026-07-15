#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace LiquidPhysicsSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createFilterSystem(bool isClientSide);

MCAPI ::TickingSystemWithInfo createLiquidFetchingSystem();
// NOLINTEND

} // namespace LiquidPhysicsSystem
