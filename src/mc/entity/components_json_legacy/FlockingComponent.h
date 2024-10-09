#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlockingComponent {
public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&);
    FlockingComponent(FlockingComponent const&);

public:
    // NOLINTBEGIN
    MCAPI FlockingComponent();

    MCAPI FlockingComponent(class FlockingComponent&&);

    MCAPI void addFlockMember(struct ActorUniqueID e);

    MCAPI void breakFlock(class Actor const& owner);

    MCAPI void calculateFlockVector(class Actor const& owner);

    MCAPI void calculateGoalHeading(class Mob& owner);

    MCAPI bool canJoinFlock(class Actor& owner) const;

    MCAPI void joinFlock(class Actor& owner);

    MCAPI void manageNeighborhood(class Actor& owner);

    MCAPI void mergeNeighborhoods(class Actor& owner);

    MCAPI class FlockingComponent& operator=(class FlockingComponent&&);

    MCAPI void updateNeighborhoodData(class Actor const& owner);

    MCAPI bool validateVariantEntityTypes(class Actor const& e0, class Actor const& e1) const;

    // NOLINTEND
};
