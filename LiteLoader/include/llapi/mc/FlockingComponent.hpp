/**
 * @file  FlockingComponent.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

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
     * @hash   1708054616
     * @symbol  ??0FlockingComponent\@\@QEAA\@XZ
     */
    MCAPI FlockingComponent();
    /**
     * @hash   -1158041599
     * @symbol  ??0FlockingComponent\@\@QEAA\@$$QEAV0\@\@Z
     */
    MCAPI FlockingComponent(class FlockingComponent &&);
    /**
     * @hash   1714692648
     * @symbol  ?addFlockMember\@FlockingComponent\@\@QEAAXUActorUniqueID\@\@\@Z
     */
    MCAPI void addFlockMember(struct ActorUniqueID);
    /**
     * @hash   1843408676
     * @symbol  ?breakFlock\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void breakFlock(class Actor const &);
    /**
     * @hash   286940828
     * @symbol  ?calculateFlockVector\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void calculateFlockVector(class Actor const &);
    /**
     * @hash   -209811404
     * @symbol  ?calculateGoalHeading\@FlockingComponent\@\@QEAAXAEAVMob\@\@\@Z
     */
    MCAPI void calculateGoalHeading(class Mob &);
    /**
     * @hash   -1832937291
     * @symbol  ?canJoinFlock\@FlockingComponent\@\@QEBA_NAEAVActor\@\@\@Z
     */
    MCAPI bool canJoinFlock(class Actor &) const;
    /**
     * @hash   703536860
     * @symbol  ?joinFlock\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void joinFlock(class Actor &);
    /**
     * @hash   1124291590
     * @symbol  ?manageNeighborhood\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void manageNeighborhood(class Actor &);
    /**
     * @hash   -516411886
     * @symbol  ?mergeNeighborhoods\@FlockingComponent\@\@QEAAXAEAVActor\@\@\@Z
     */
    MCAPI void mergeNeighborhoods(class Actor &);
    /**
     * @hash   -437022852
     * @symbol  ??4FlockingComponent\@\@QEAAAEAV0\@$$QEAV0\@\@Z
     */
    MCAPI class FlockingComponent & operator=(class FlockingComponent &&);
    /**
     * @hash   1466244102
     * @symbol  ?updateNeighborhoodData\@FlockingComponent\@\@QEAAXAEBVActor\@\@\@Z
     */
    MCAPI void updateNeighborhoodData(class Actor const &);
    /**
     * @hash   -1516713267
     * @symbol  ?validateVariantEntityTypes\@FlockingComponent\@\@QEBA_NAEBVActor\@\@0\@Z
     */
    MCAPI bool validateVariantEntityTypes(class Actor const &, class Actor const &) const;

};