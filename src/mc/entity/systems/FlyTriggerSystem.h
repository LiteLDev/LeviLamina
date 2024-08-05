#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FlyTriggerSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createActionSystem();

MCAPI struct TickingSystemWithInfo createIntentSystem();

MCAPI struct TickingSystemWithInfo createRemovePermissionFlyFlagSystem();
// NOLINTEND

}; // namespace FlyTriggerSystem
