#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/OptionalGlobal.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct OverflowTickComponent;
struct ServerPlayerMovementComponent;
// clang-format on

namespace PlayerMovementRateSystem {
// functions
// NOLINTBEGIN
MCAPI void tickEntity(::ServerPlayerMovementComponent& serverPlayerMovement, uint64 numberOfTick);

MCAPI void tickSystem(
    ::ViewT<::StrictEntityContext, ::ServerPlayerMovementComponent> view,
    ::OptionalGlobal<::OverflowTickComponent>                       overflowTick
);
// NOLINTEND

} // namespace PlayerMovementRateSystem
