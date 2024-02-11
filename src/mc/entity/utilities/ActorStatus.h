#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ActorStatus {
// NOLINTBEGIN
// symbol: ?canDash@ActorStatus@@YA_NAEBVActorStatusProvider@@@Z
MCAPI bool canDash(class ActorStatusProvider const& provider);

// symbol: ?hasDashCooldown@ActorStatus@@YA_NAEBVActorStatusProvider@@@Z
MCAPI bool hasDashCooldown(class ActorStatusProvider const& provider);

// symbol: ?setCanDash@ActorStatus@@YAX_NAEAVActorStatusProvider@@@Z
MCAPI void setCanDash(bool value, class ActorStatusProvider& provider);

// symbol: ?setHasDashCooldown@ActorStatus@@YAX_NAEAVActorStatusProvider@@@Z
MCAPI void setHasDashCooldown(bool value, class ActorStatusProvider& provider);
// NOLINTEND

}; // namespace ActorStatus
