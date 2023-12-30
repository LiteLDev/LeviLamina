#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlockingComponent {
public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&);
    FlockingComponent(FlockingComponent const&);

public:
    // NOLINTBEGIN
    // symbol: ??0FlockingComponent@@QEAA@XZ
    MCAPI FlockingComponent();

    // symbol: ??0FlockingComponent@@QEAA@$$QEAV0@@Z
    MCAPI FlockingComponent(class FlockingComponent&&);

    // symbol: ?addFlockMember@FlockingComponent@@QEAAXUActorUniqueID@@@Z
    MCAPI void addFlockMember(struct ActorUniqueID e);

    // symbol: ?breakFlock@FlockingComponent@@QEAAXAEBVActor@@@Z
    MCAPI void breakFlock(class Actor const& owner);

    // symbol: ?calculateFlockVector@FlockingComponent@@QEAAXAEBVActor@@@Z
    MCAPI void calculateFlockVector(class Actor const& owner);

    // symbol: ?calculateGoalHeading@FlockingComponent@@QEAAXAEAVMob@@@Z
    MCAPI void calculateGoalHeading(class Mob& owner);

    // symbol: ?canJoinFlock@FlockingComponent@@QEBA_NAEAVActor@@@Z
    MCAPI bool canJoinFlock(class Actor& owner) const;

    // symbol: ?joinFlock@FlockingComponent@@QEAAXAEAVActor@@@Z
    MCAPI void joinFlock(class Actor& owner);

    // symbol: ?manageNeighborhood@FlockingComponent@@QEAAXAEAVActor@@@Z
    MCAPI void manageNeighborhood(class Actor& owner);

    // symbol: ?mergeNeighborhoods@FlockingComponent@@QEAAXAEAVActor@@@Z
    MCAPI void mergeNeighborhoods(class Actor& owner);

    // symbol: ??4FlockingComponent@@QEAAAEAV0@$$QEAV0@@Z
    MCAPI class FlockingComponent& operator=(class FlockingComponent&&);

    // symbol: ?updateNeighborhoodData@FlockingComponent@@QEAAXAEBVActor@@@Z
    MCAPI void updateNeighborhoodData(class Actor const& owner);

    // symbol: ?validateVariantEntityTypes@FlockingComponent@@QEBA_NAEBVActor@@0@Z
    MCAPI bool validateVariantEntityTypes(class Actor const& e0, class Actor const& e1) const;

    // NOLINTEND
};
