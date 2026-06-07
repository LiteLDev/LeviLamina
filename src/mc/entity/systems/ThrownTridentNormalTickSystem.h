#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/ViewT.h"
#include "mc/deps/ecs/strict/Include.h"

// auto generated forward declare list
// clang-format off
class ActorOwnerComponent;
class StrictEntityContext;
struct InterpolateMovementNeededComponent;
struct ThrownTridentFlagComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace ThrownTridentNormalTickSystem {
// functions
// NOLINTBEGIN
MCAPI void _tridentNormalTick(
    ::ViewT<
        ::StrictEntityContext,
        ::Include<::InterpolateMovementNeededComponent, ::ThrownTridentFlagComponent>,
        ::ActorOwnerComponent> view
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace ThrownTridentNormalTickSystem
