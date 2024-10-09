#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace CameraOutOfRangeWarningSystem {
// NOLINTBEGIN
MCAPI void _tick(
    class StrictEntityContext const&                                  entity,
    struct StateVectorComponent const&                                stateVectorComponent,
    struct ServerActiveCameraComponent const&                         serverActiveCameraComponent,
    class EntityModifier<struct CameraOutOfRangeWarningSentComponent> modifier,
    class IConstBlockSource const&                                    region
);

MCAPI struct TickingSystemWithInfo create();
// NOLINTEND

}; // namespace CameraOutOfRangeWarningSystem
