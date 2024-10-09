#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace FreezingSystemInternal {
// NOLINTBEGIN
MCAPI void processFreezeEffect(class Actor& actor, class FreezingComponent const& freezeComp);

MCAPI void tickFreezeComponent(
    class EntityContext&       entity,
    class ActorOwnerComponent& actorOwnerComponent,
    class FreezingComponent&   freezingComponent
);
// NOLINTEND

}; // namespace FreezingSystemInternal
