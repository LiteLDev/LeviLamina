/**
 * @file  MoveTowardsClosestSpaceSystemFromActorContext.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MoveTowardsClosestSpaceSystemFromActorContext.
 *
 */
class MoveTowardsClosestSpaceSystemFromActorContext {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOVETOWARDSCLOSESTSPACESYSTEMFROMACTORCONTEXT
public:
    class MoveTowardsClosestSpaceSystemFromActorContext& operator=(class MoveTowardsClosestSpaceSystemFromActorContext const &) = delete;
    MoveTowardsClosestSpaceSystemFromActorContext(class MoveTowardsClosestSpaceSystemFromActorContext const &) = delete;
    MoveTowardsClosestSpaceSystemFromActorContext() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@MoveTowardsClosestSpaceSystemFromActorContext\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();

//private:
    /**
     * @symbol ?tickSystem\@MoveTowardsClosestSpaceSystemFromActorContext\@\@CAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@UShouldMoveTowardClosestSpaceFlagComponent\@\@\@\@VActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@UShouldMoveTowardClosestSpaceFlagComponent\@\@\@\@\@Z
     */
    MCAPI static void tickSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>, struct ShouldMoveTowardClosestSpaceFlagComponent>, class ActorOwnerComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, struct ShouldMoveTowardClosestSpaceFlagComponent>);

private:

};
