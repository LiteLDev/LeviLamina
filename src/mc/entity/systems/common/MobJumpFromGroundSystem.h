#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobJumpFromGroundSystem {
// NOLINTBEGIN
MCAPI struct TickingSystemWithInfo createCleanupFilterJumpRequestSystem();

MCAPI struct TickingSystemWithInfo createCleanupTriggerJumpRequestSystem();

MCAPI struct TickingSystemWithInfo createFilterSystem();

MCAPI struct TickingSystemWithInfo createSystem();
// NOLINTEND

}; // namespace MobJumpFromGroundSystem
