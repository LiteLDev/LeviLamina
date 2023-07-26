#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemovePassengersSystem {

public:
    // prevent constructor by default
    RemovePassengersSystem& operator=(RemovePassengersSystem const&) = delete;
    RemovePassengersSystem(RemovePassengersSystem const&)            = delete;
    RemovePassengersSystem()                                         = delete;

public:
    /**
     * @symbol ?createRemovePassengersSystem\@RemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemovePassengersSystem(); // NOLINT
};
