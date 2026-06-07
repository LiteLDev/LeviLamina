#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
struct ServerPlayerMovementComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace PlayerMovementRateSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createSystem();

MCAPI void tickEntity(::ServerPlayerMovementComponent& serverPlayerMovement, uint64 numberOfTick);
// NOLINTEND

} // namespace PlayerMovementRateSystem
