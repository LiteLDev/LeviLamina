#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateServerPlayerInputSystem {

public:
    // prevent constructor by default
    UpdateServerPlayerInputSystem& operator=(UpdateServerPlayerInputSystem const&) = delete;
    UpdateServerPlayerInputSystem(UpdateServerPlayerInputSystem const&)            = delete;
    UpdateServerPlayerInputSystem()                                                = delete;

public:
    /**
     * @symbol ?createPlayerInputUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPlayerInputUpdateSystem(); // NOLINT
    /**
     * @symbol ?createSneakUpdateSystem\@UpdateServerPlayerInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSneakUpdateSystem(); // NOLINT
};
