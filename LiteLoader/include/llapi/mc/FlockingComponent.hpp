/**
 * @file  FlockingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

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
     * @hash   -1742339752
     * @symbol ??0FlockingComponent@@QEAA@XZ
     */
    MCAPI FlockingComponent();
    /**
     * @hash   -1393832559
     * @symbol ??0FlockingComponent@@QEAA@$$QEAV0@@Z
     */
    MCAPI FlockingComponent(class FlockingComponent &&);
    /**
     * @hash   -1735701720
     * @symbol ?addFlockMember@FlockingComponent@@QEAAXUActorUniqueID@@@Z
     */
    MCAPI void addFlockMember(struct ActorUniqueID);
    /**
     * @hash   -1606985692
     * @symbol ?breakFlock@FlockingComponent@@QEAAXAEBVActor@@@Z
     */
    MCAPI void breakFlock(class Actor const &);
    /**
     * @hash   1131513756
     * @symbol ?calculateFlockVector@FlockingComponent@@QEAAXAEBVActor@@@Z
     */
    MCAPI void calculateFlockVector(class Actor const &);
    /**
     * @hash   634884532
     * @symbol ?calculateGoalHeading@FlockingComponent@@QEAAXAEAVMob@@@Z
     */
    MCAPI void calculateGoalHeading(class Mob &);
    /**
     * @hash   -988241355
     * @symbol ?canJoinFlock@FlockingComponent@@QEBA_NAEAVActor@@@Z
     */
    MCAPI bool canJoinFlock(class Actor &) const;
    /**
     * @hash   1548186668
     * @symbol ?joinFlock@FlockingComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void joinFlock(class Actor &);
    /**
     * @hash   1968910646
     * @symbol ?manageNeighborhood@FlockingComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void manageNeighborhood(class Actor &);
    /**
     * @hash   328130290
     * @symbol ?mergeNeighborhoods@FlockingComponent@@QEAAXAEAVActor@@@Z
     */
    MCAPI void mergeNeighborhoods(class Actor &);
    /**
     * @hash   -672813812
     * @symbol ??4FlockingComponent@@QEAAAEAV0@$$QEAV0@@Z
     */
    MCAPI class FlockingComponent & operator=(class FlockingComponent &&);
    /**
     * @hash   -1984227146
     * @symbol ?updateNeighborhoodData@FlockingComponent@@QEAAXAEBVActor@@@Z
     */
    MCAPI void updateNeighborhoodData(class Actor const &);
    /**
     * @hash   -672247971
     * @symbol ?validateVariantEntityTypes@FlockingComponent@@QEBA_NAEBVActor@@0@Z
     */
    MCAPI bool validateVariantEntityTypes(class Actor const &, class Actor const &) const;

};