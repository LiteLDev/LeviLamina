#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct MovementInterpolatorComponent;
struct QueuedMovementInterpolationComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MovementInterpolatorSystem {
// functions
// NOLINTBEGIN
MCAPI ::TickingSystemWithInfo createCopyInterpolatorComponentSystem();

MCAPI ::TickingSystemWithInfo createHandleQueuedMovementInterpolationSystem();

MCAPI ::TickingSystemWithInfo createOnGroundPostTickSystem();

MCAPI ::TickingSystemWithInfo createTickSystem(bool isClientSide);

MCAPI void handleQueuedMovementInterpolation(
    ::StrictEntityContext const&                             entity,
    ::QueuedMovementInterpolationComponent&                  queuedMovementInterpolation,
    ::MovementInterpolatorComponent&                         movementInterpolator,
    ::EntityModifier<::QueuedMovementInterpolationComponent> modifier
);
// NOLINTEND

} // namespace MovementInterpolatorSystem
