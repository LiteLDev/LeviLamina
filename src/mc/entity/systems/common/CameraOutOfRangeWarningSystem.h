#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace CameraOutOfRangeWarningSystem {
// NOLINTBEGIN
// symbol:
// ?_tick@CameraOutOfRangeWarningSystem@@YAXAEBVStrictEntityContext@@AEBUStateVectorComponent@@AEBUServerActiveCameraComponent@@V?$EntityModifier@UCameraOutOfRangeWarningSentComponent@@@@AEBVIConstBlockSource@@@Z
MCAPI void
_tick(class StrictEntityContext const&, struct StateVectorComponent const&, struct ServerActiveCameraComponent const&, class EntityModifier<struct CameraOutOfRangeWarningSentComponent>, class IConstBlockSource const&);

// symbol: ?create@CameraOutOfRangeWarningSystem@@YA?AUTickingSystemWithInfo@@XZ
MCAPI struct TickingSystemWithInfo create();
// NOLINTEND

}; // namespace CameraOutOfRangeWarningSystem
