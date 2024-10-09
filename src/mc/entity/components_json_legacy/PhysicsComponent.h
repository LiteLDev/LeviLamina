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
    MCAPI bool isAffectedByGravity(struct ActorDataFlagComponent const& actorData) const;

    MCAPI void setAffectedByGravity(
        struct ActorDataFlagComponent&       actorData,
        struct ActorDataDirtyFlagsComponent& dirtyFlags,
        bool                                 affectedByGravity
    ) const;

    MCAPI void setHasCollision(class Actor& owner, bool hasCollision);

    // NOLINTEND
};
