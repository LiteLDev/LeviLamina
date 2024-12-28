#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/shared_types/Side.h"

// auto generated forward declare list
// clang-format off
class Vec3;
struct BoatMovementComponent;
struct Paddle;
struct TickingSystemWithInfo;
// clang-format on

namespace BoatMoveControlSystem {
// functions
// NOLINTBEGIN
MCAPI void _paddleControl(
    ::BoatMovementComponent const& boatMovementComponent,
    ::Paddle&                      paddle,
    ::SharedTypes::Side            side,
    ::Vec3&                        force,
    ::Vec3&                        torque
);

MCAPI ::TickingSystemWithInfo createSystem(bool isClientSide);
// NOLINTEND

} // namespace BoatMoveControlSystem
