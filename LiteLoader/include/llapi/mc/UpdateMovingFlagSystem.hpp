/**
 * @file  UpdateMovingFlagSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class UpdateMovingFlagSystem.
 *
 */
class UpdateMovingFlagSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEMOVINGFLAGSYSTEM
public:
    class UpdateMovingFlagSystem& operator=(class UpdateMovingFlagSystem const &) = delete;
    UpdateMovingFlagSystem(class UpdateMovingFlagSystem const &) = delete;
    UpdateMovingFlagSystem() = delete;
#endif

public:
    /**
     * @symbol ?createUpdateMovingFlagSystem\@UpdateMovingFlagSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createUpdateMovingFlagSystem();
    /**
     * @symbol ?tickUpdateMovingFlagSystem\@UpdateMovingFlagSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@VActorOwnerComponent\@\@\@\@V?$EntityModifierT\@VEntityRegistryBase\@\@VStrictEntityContext\@\@V?$FlagComponent\@UMovingFlag\@\@\@\@\@\@\@Z
     */
    MCAPI static void tickUpdateMovingFlagSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<class FlagComponent<struct ActorMovementTickNeededFlag>>, class ActorOwnerComponent>, class EntityModifierT<class EntityRegistryBase, class StrictEntityContext, class FlagComponent<struct MovingFlag>>);

};
