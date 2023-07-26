#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhysicsComponent {

public:
    // prevent constructor by default
    PhysicsComponent& operator=(PhysicsComponent const&) = delete;
    PhysicsComponent(PhysicsComponent const&)            = delete;
    PhysicsComponent()                                   = delete;

public:
    /**
     * @symbol ?isAffectedByGravity\@PhysicsComponent\@\@QEBA_NAEBUIActorMovementProxy\@\@\@Z
     */
    MCAPI bool isAffectedByGravity(struct IActorMovementProxy const&) const; // NOLINT
    /**
     * @symbol ?setAffectedByGravity\@PhysicsComponent\@\@QEBAXAEAUIActorMovementProxy\@\@_N\@Z
     */
    MCAPI void setAffectedByGravity(struct IActorMovementProxy&, bool) const; // NOLINT
    /**
     * @symbol ?setHasCollision\@PhysicsComponent\@\@QEAAXAEAVActor\@\@_N\@Z
     */
    MCAPI void setHasCollision(class Actor&, bool); // NOLINT
};
