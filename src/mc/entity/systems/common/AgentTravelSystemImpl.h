#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifier.h"

namespace AgentTravelSystemImpl {
// NOLINTBEGIN
// symbol: ?doClientAgentTravel@AgentTravelSystemImpl@@YAXAEAVActorOwnerComponent@@AEAUAbilitiesComponent@@@Z
MCAPI void doClientAgentTravel(class ActorOwnerComponent&, struct AbilitiesComponent&);

// symbol:
// ?doServerAgentTravel@AgentTravelSystemImpl@@YAXAEBVStrictEntityContext@@AEAVActorOwnerComponent@@AEAUAbilitiesComponent@@AEAUStateVectorComponent@@V?$EntityModifier@UMoveRequestComponent@@@@@Z
MCAPI void
doServerAgentTravel(class StrictEntityContext const&, class ActorOwnerComponent&, struct AbilitiesComponent&, struct StateVectorComponent&, class EntityModifier<struct MoveRequestComponent>);
// NOLINTEND

}; // namespace AgentTravelSystemImpl
