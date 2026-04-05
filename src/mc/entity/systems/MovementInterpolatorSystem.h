#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MovementInterpolatorSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCopyInterpolatorComponentSystem();

MCAPI ::TickingSystemWithInfo createOnGroundPostTickSystem();

MCAPI ::TickingSystemWithInfo createTickSystem(bool isClientSide);
// NOLINTEND

} // namespace MovementInterpolatorSystem
