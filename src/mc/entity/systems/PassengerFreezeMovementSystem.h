#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PassengerFreezeMovementSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PASSENGERFREEZEMOVEMENTSYSTEM
public:
    PassengerFreezeMovementSystem& operator=(PassengerFreezeMovementSystem const&) = delete;
    PassengerFreezeMovementSystem(PassengerFreezeMovementSystem const&)            = delete;
    PassengerFreezeMovementSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@PassengerFreezeMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
    /**
     * @symbol
     * ?freezeMovement\@PassengerFreezeMovementSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void freezeMovement(class StrictEntityContext&, struct StateVectorComponent&);
};
