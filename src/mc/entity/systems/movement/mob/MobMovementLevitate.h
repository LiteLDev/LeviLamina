#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace MobMovementLevitate {
// NOLINTBEGIN
MCAPI void forSystem(std::function<void(struct TickingSystemWithInfo&&)> const& func);
// NOLINTEND

}; // namespace MobMovementLevitate
