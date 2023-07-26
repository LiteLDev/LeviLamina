#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PassengerTickSystem {

public:
    // prevent constructor by default
    PassengerTickSystem& operator=(PassengerTickSystem const&) = delete;
    PassengerTickSystem(PassengerTickSystem const&)            = delete;
    PassengerTickSystem()                                      = delete;

public:
    /**
     * @symbol ?createMobPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createMobPostPassengerTickSystem(); // NOLINT
    /**
     * @symbol ?createPlayerPostPassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPostPassengerTickSystem(); // NOLINT
    /**
     * @symbol ?createPlayerPrePassengerTickSystem\@PassengerTickSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerPrePassengerTickSystem(); // NOLINT
};
