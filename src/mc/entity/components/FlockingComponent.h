#pragma once

#include "mc/_HeaderOutputPredefine.h"

class FlockingComponent {

public:
    // prevent constructor by default
    FlockingComponent& operator=(FlockingComponent const&) = delete;
    FlockingComponent(FlockingComponent const&)            = delete;

public:
    /**
     * @symbol ??0FlockingComponent\@\@QEAA\@XZ
     */
    MCAPI FlockingComponent(); // NOLINT
    /**
     * @symbol ??0FlockingComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI FlockingComponent(class FlockingComponent&&); // NOLINT
    /**
     * @symbol ?addFlockMember\@FlockingComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void addFlockMember(struct ActorUniqueID); // NOLINT
    /**
     * @symbol ?breakFlock\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void breakFlock(class Actor const&); // NOLINT
    /**
     * @symbol ?calculateFlockVector\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void calculateFlockVector(class Actor const&); // NOLINT
    /**
     * @symbol ?calculateGoalHeading\@FlockingComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void calculateGoalHeading(class Mob&); // NOLINT
    /**
     * @symbol ?canJoinFlock\@FlockingComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool canJoinFlock(class Actor&) const; // NOLINT
    /**
     * @symbol ?joinFlock\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void joinFlock(class Actor&); // NOLINT
    /**
     * @symbol ?manageNeighborhood\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void manageNeighborhood(class Actor&); // NOLINT
    /**
     * @symbol ?mergeNeighborhoods\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void mergeNeighborhoods(class Actor&); // NOLINT
    /**
     * @symbol ??4FlockingComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FlockingComponent& operator=(class FlockingComponent&&); // NOLINT
    /**
     * @symbol ?updateNeighborhoodData\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void updateNeighborhoodData(class Actor const&); // NOLINT
    /**
     * @symbol ?validateVariantEntityTypes\@FlockingComponent\@\@QEBA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool validateVariantEntityTypes(class Actor const&, class Actor const&) const; // NOLINT
};
