/**
 * @file  AgentInteractSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace AgentInteractSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?initialize\@AgentInteractSystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVInteract\@6\@\@Z
     */
    MCAPI void initialize(class EntityContext &, struct StateVectorComponent const &, struct MobBodyRotationComponent const &, struct AgentComponents::ActionDetails const &, class AgentComponents::Interact const &);
    /**
     * @symbol ?tick\@AgentInteractSystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVInteract\@6\@\@Z
     */
    MCAPI void tick(class EntityContext &, struct StateVectorComponent const &, struct MobBodyRotationComponent const &, struct AgentComponents::ActionDetails const &, class AgentComponents::Interact const &);

};