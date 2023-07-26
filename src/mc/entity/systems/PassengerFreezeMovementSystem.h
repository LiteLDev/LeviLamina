#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PassengerFreezeMovementSystem {

public:
    // prevent constructor by default
    PassengerFreezeMovementSystem& operator=(PassengerFreezeMovementSystem const&) = delete;
    PassengerFreezeMovementSystem(PassengerFreezeMovementSystem const&)            = delete;
    PassengerFreezeMovementSystem()                                                = delete;

public:
    /**
     * @symbol ?createSystem\@PassengerFreezeMovementSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
    /**
     * @symbol
     * ?freezeMovement\@PassengerFreezeMovementSystem\@\@SAXAEAVStrictEntityContext\@\@AEAUStateVectorComponent\@\@\@Z
     */
    MCAPI static void freezeMovement(class StrictEntityContext&, struct StateVectorComponent&); // NOLINT
};
