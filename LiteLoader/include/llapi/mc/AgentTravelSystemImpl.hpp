/**
 * @file  AgentTravelSystemImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace AgentTravelSystemImpl {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?doClientAgentTravel\@AgentTravelSystemImpl\@\@YAXAEAVActorOwnerComponent\@\@AEAUAbilitiesComponent\@\@\@Z
     */
    MCAPI void doClientAgentTravel(class ActorOwnerComponent &, struct AbilitiesComponent &);
    /**
     * @symbol ?doServerAgentTravel\@AgentTravelSystemImpl\@\@YAXAEBVStrictEntityContext\@\@AEAVActorOwnerComponent\@\@AEAUAbilitiesComponent\@\@AEAUStateVectorComponent\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UMoveRequestComponent\@\@\@\@\@Z
     */
    MCAPI void doServerAgentTravel(class StrictEntityContext const &, class ActorOwnerComponent &, struct AbilitiesComponent &, struct StateVectorComponent &, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct MoveRequestComponent>);

};