/**
 * @file  FlockingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "liteloader/api/Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FlockingComponent.
 *
 */
class FlockingComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLOCKINGCOMPONENT
public:
    class FlockingComponent& operator=(class FlockingComponent const &) = delete;
    FlockingComponent(class FlockingComponent const &) = delete;
#endif

public:
    /**
     * @symbol  ??0FlockingComponent\@\@QEAA\@XZ
     */
    MCAPI FlockingComponent();
    /**
     * @symbol  ??0FlockingComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI FlockingComponent(class FlockingComponent &&);
    /**
     * @symbol  ?addFlockMember\@FlockingComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void addFlockMember(struct ActorUniqueID);
    /**
     * @symbol  ?breakFlock\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void breakFlock(class Actor const &);
    /**
     * @symbol  ?calculateFlockVector\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void calculateFlockVector(class Actor const &);
    /**
     * @symbol  ?calculateGoalHeading\@FlockingComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void calculateGoalHeading(class Mob &);
    /**
     * @symbol  ?canJoinFlock\@FlockingComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool canJoinFlock(class Actor &) const;
    /**
     * @symbol  ?joinFlock\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void joinFlock(class Actor &);
    /**
     * @symbol  ?manageNeighborhood\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void manageNeighborhood(class Actor &);
    /**
     * @symbol  ?mergeNeighborhoods\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void mergeNeighborhoods(class Actor &);
    /**
     * @symbol  ??4FlockingComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FlockingComponent & operator=(class FlockingComponent &&);
    /**
     * @symbol  ?updateNeighborhoodData\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void updateNeighborhoodData(class Actor const &);
    /**
     * @symbol  ?validateVariantEntityTypes\@FlockingComponent\@\@QEBA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool validateVariantEntityTypes(class Actor const &, class Actor const &) const;

};