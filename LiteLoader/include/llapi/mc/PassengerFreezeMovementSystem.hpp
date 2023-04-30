/**
 * @file  PassengerFreezeMovementSystem.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class PassengerFreezeMovementSystem.
 *
 */
class PassengerFreezeMovementSystem {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERFREEZEMOVEMENTSYSTEM
public:
    class PassengerFreezeMovementSystem& operator=(class PassengerFreezeMovementSystem const &) = delete;
    PassengerFreezeMovementSystem(class PassengerFreezeMovementSystem const &) = delete;
    PassengerFreezeMovementSystem() = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PassengerFreezeMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol ?freezeMovement\@PassengerFreezeMovementSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void freezeMovement(class StrictEntityContext &, struct StateVectorComponent &);
    /**
     * @symbol ?tickPassengerFreezeMovementSystem\@PassengerFreezeMovementSystem\@\@SAXV?$ViewT\@VStrictEntityContext\@\@VEntityRegistryBase\@\@U?$Include\@UPassengerComponent\@\@V?$FlagComponent\@UActorMovementTickNeededFlag\@\@\@\@\@\@UStateVectorComponent\@\@\@\@\@Z
     */
    MCAPI static void tickPassengerFreezeMovementSystem(class ViewT<class StrictEntityContext, class EntityRegistryBase, struct Include<struct PassengerComponent, class FlagComponent<struct ActorMovementTickNeededFlag>>, struct StateVectorComponent>);

};
