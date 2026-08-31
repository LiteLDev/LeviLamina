#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class StrictEntityContext;
struct ActorHeadRotationComponent;
struct ActorRotationComponent;
struct MobBodyRotationComponent;
struct TickingSystemWithInfo;
// clang-format on

namespace MobSetPreviousRotSystem {
// functions
// NOLINTBEGIN
MCAPI void _setPreviousRotation(
    ::StrictEntityContext&,
    ::ActorHeadRotationComponent& actorHeadRotation,
    ::ActorRotationComponent&     actorRotation,
    ::MobBodyRotationComponent&   mobBodyRotation
);

MCAPI ::TickingSystemWithInfo createSystem();
// NOLINTEND

} // namespace MobSetPreviousRotSystem
