#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorStatus {
// NOLINTBEGIN
MCAPI bool canDash(class ActorStatusProvider const& provider);

MCAPI bool hasDashCooldown(class ActorStatusProvider const& provider);

MCAPI void setCanDash(bool value, class ActorStatusProvider& provider);

MCAPI void setHasDashCooldown(bool value, class ActorStatusProvider& provider);
// NOLINTEND

}; // namespace ActorStatus
