#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ClientInteractStopRidingSystem {

public:
    // prevent constructor by default
    ClientInteractStopRidingSystem& operator=(ClientInteractStopRidingSystem const&) = delete;
    ClientInteractStopRidingSystem(ClientInteractStopRidingSystem const&)            = delete;
    ClientInteractStopRidingSystem()                                                 = delete;

public:
    /**
     * @symbol ?createSystem\@ClientInteractStopRidingSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
