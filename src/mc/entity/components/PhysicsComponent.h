#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PhysicsComponent {
public:
    // prevent constructor by default
    PhysicsComponent& operator=(PhysicsComponent const&);
    PhysicsComponent(PhysicsComponent const&);
    PhysicsComponent();

public:
    // NOLINTBEGIN
    // symbol: ?isAffectedByGravity@PhysicsComponent@@QEBA_NAEBUActorDataFlagComponent@@@Z
    MCAPI bool isAffectedByGravity(struct ActorDataFlagComponent const&) const;

    // symbol:
    // ?setAffectedByGravity@PhysicsComponent@@QEBAXAEAUActorDataFlagComponent@@AEAUActorDataDirtyFlagsComponent@@_N@Z
    MCAPI void setAffectedByGravity(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, bool) const;

    // symbol: ?setHasCollision@PhysicsComponent@@QEAAXAEAVActor@@_N@Z
    MCAPI void setHasCollision(class Actor& owner, bool hasCollision);

    // NOLINTEND
};
