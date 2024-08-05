#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace CameraOutOfRangeWarningSystem {
// NOLINTBEGIN
MCAPI void
_tick(class StrictEntityContext const&, struct StateVectorComponent const&, struct ServerActiveCameraComponent const&, class EntityModifier<struct CameraOutOfRangeWarningSentComponent>, class IConstBlockSource const&);

MCAPI struct TickingSystemWithInfo create();
// NOLINTEND

}; // namespace CameraOutOfRangeWarningSystem
