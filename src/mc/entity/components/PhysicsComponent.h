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
    MCAPI bool isAffectedByGravity(struct ActorDataFlagComponent const&) const;

    MCAPI void setAffectedByGravity(struct ActorDataFlagComponent&, struct ActorDataDirtyFlagsComponent&, bool) const;

    MCAPI void setHasCollision(class Actor& owner, bool hasCollision);

    // NOLINTEND
};
