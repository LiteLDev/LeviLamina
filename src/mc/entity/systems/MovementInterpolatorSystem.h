#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct TickingSystemWithInfo;
// clang-format on

namespace MovementInterpolatorSystem {
// functions
// NOLINTBEGIN
MCNAPI ::TickingSystemWithInfo createHandleQueuedMovementInterpolationSystem();

MCNAPI ::TickingSystemWithInfo createTickSystem(bool isClientSide);
// NOLINTEND

} // namespace MovementInterpolatorSystem
