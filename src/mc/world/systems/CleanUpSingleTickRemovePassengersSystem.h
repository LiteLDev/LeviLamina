#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CleanUpSingleTickRemovePassengersSystem {

public:
    // prevent constructor by default
    CleanUpSingleTickRemovePassengersSystem& operator=(CleanUpSingleTickRemovePassengersSystem const&) = delete;
    CleanUpSingleTickRemovePassengersSystem(CleanUpSingleTickRemovePassengersSystem const&)            = delete;
    CleanUpSingleTickRemovePassengersSystem()                                                          = delete;

public:
    /**
     * @symbol ?createSingleTickSystem\@CleanUpSingleTickRemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSingleTickSystem(); // NOLINT
};
