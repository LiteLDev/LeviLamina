#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementSpeed {
// NOLINTBEGIN
MCAPI void forSystems(std::function<void(struct TickingSystemWithInfo&&)> const& func);
// NOLINTEND

}; // namespace MobMovementSpeed
