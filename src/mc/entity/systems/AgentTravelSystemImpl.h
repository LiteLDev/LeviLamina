#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/ecs/strict/EntityModifier.h"

namespace AgentTravelSystemImpl {
// NOLINTBEGIN
MCAPI void
doClientAgentTravel(class ActorOwnerComponent& actorOwnerComponent, struct AbilitiesComponent& abilitiesComponent);

MCAPI void doServerAgentTravel(
    class StrictEntityContext const&                  entity,
    class ActorOwnerComponent&                        actorOwnerComponent,
    struct AbilitiesComponent&                        abilitiesComponent,
    struct StateVectorComponent&                      stateVectorComponent,
    class EntityModifier<struct MoveRequestComponent> mod
);
// NOLINTEND

}; // namespace AgentTravelSystemImpl
