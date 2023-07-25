#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PendingRemovePassengersSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PENDINGREMOVEPASSENGERSSYSTEM
public:
    PendingRemovePassengersSystem& operator=(PendingRemovePassengersSystem const&) = delete;
    PendingRemovePassengersSystem(PendingRemovePassengersSystem const&)            = delete;
    PendingRemovePassengersSystem()                                                = delete;
#endif

public:
    /**
     * @symbol ?createPendingRemovePassengersSystem\@PendingRemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createPendingRemovePassengersSystem();
};
