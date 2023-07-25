#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhysicsComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PHYSICSCOMPONENT
public:
    PhysicsComponent& operator=(PhysicsComponent const&) = delete;
    PhysicsComponent(PhysicsComponent const&)            = delete;
    PhysicsComponent()                                   = delete;
#endif

public:
    /**
     * @symbol ?isAffectedByGravity\@PhysicsComponent\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isAffectedByGravity(struct IActorMovementProxy const&) const;
    /**
     * @symbol ?setAffectedByGravity\@PhysicsComponent\@\@QEBAXAEAUIActorMovementProxy\@\@_N\@Z
     */
    MCAPI void setAffectedByGravity(struct IActorMovementProxy&, bool) const;
    /**
     * @symbol ?setHasCollision\@PhysicsComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHasCollision(class Actor&, bool);
};
