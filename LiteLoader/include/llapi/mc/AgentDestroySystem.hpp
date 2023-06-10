/**
 * @file  AgentDestroySystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA


namespace AgentDestroySystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
    /**
     * @symbol ?initialize\@AgentDestroySystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVDestroy\@6\@\@Z
     */
    MCAPI void initialize(class EntityContext &, struct StateVectorComponent const &, struct MobBodyRotationComponent const &, struct AgentComponents::ActionDetails const &, class AgentComponents::Destroy const &);
    /**
     * @symbol ?tick\@AgentDestroySystem\@\@YAXAEAVEntityContext\@\@AEBUStateVectorComponent\@\@AEBUMobBodyRotationComponent\@\@AEBUActionDetails\@AgentComponents\@\@AEBVDestroy\@6\@\@Z
     */
    MCAPI void tick(class EntityContext &, struct StateVectorComponent const &, struct MobBodyRotationComponent const &, struct AgentComponents::ActionDetails const &, class AgentComponents::Destroy const &);

};