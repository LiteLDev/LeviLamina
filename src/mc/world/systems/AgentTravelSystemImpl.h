#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/entity/EntityModifierT.h"

namespace AgentTravelSystemImpl {
// NOLINTBEGIN
/**
 * @symbol ?doClientAgentTravel\@AgentTravelSystemImpl\@\@YAXAEAVActorOwnerComponent\@\@AEAUAbilitiesComponent\@\@\@Z
 */
MCAPI void doClientAgentTravel(class ActorOwnerComponent&, struct AbilitiesComponent&);
/**
 * @symbol
 * ?doServerAgentTravel\@AgentTravelSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUAbilitiesComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
 */
MCAPI void
doServerAgentTravel(class StrictEntityContext const&, class ActorOwnerComponent&, struct AbilitiesComponent&, struct StateVectorComponent&, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);
// NOLINTEND

}; // namespace AgentTravelSystemImpl
