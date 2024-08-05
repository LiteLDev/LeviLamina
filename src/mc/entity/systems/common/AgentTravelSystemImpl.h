#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace AgentTravelSystemImpl {
// NOLINTBEGIN
MCAPI void doClientAgentTravel(class ActorOwnerComponent&, struct AbilitiesComponent&);

MCAPI void
doServerAgentTravel(class StrictEntityContext const&, class ActorOwnerComponent&, struct AbilitiesComponent&, struct StateVectorComponent&, class EntityModifier<struct MoveRequestComponent>);
// NOLINTEND

}; // namespace AgentTravelSystemImpl
