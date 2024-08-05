#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FreezingSystemInternal {
// NOLINTBEGIN
MCAPI void processFreezeEffect(class Actor& actor, class FreezingComponent const&);

MCAPI void tickFreezeComponent(class EntityContext& entity, class ActorOwnerComponent&, class FreezingComponent&);
// NOLINTEND

}; // namespace FreezingSystemInternal
