#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CleanUpSingleTickRemovePassengersSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CLEANUPSINGLETICKREMOVEPASSENGERSSYSTEM
public:
    CleanUpSingleTickRemovePassengersSystem& operator=(CleanUpSingleTickRemovePassengersSystem const&) = delete;
    CleanUpSingleTickRemovePassengersSystem(CleanUpSingleTickRemovePassengersSystem const&)            = delete;
    CleanUpSingleTickRemovePassengersSystem()                                                          = delete;
#endif

public:
    /**
     * @symbol ?createSingleTickSystem\@CleanUpSingleTickRemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSingleTickSystem();
};
