#pragma once

#include "mc/_HeaderOutputPredefine.h"

class TravelMoveRequestSystem {

public:
    // prevent constructor by default
    TravelMoveRequestSystem& operator=(TravelMoveRequestSystem const&) = delete;
    TravelMoveRequestSystem(TravelMoveRequestSystem const&)            = delete;
    TravelMoveRequestSystem()                                          = delete;

public:
    /**
     * @symbol ?createSystem\@TravelMoveRequestSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
