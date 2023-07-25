#pragma once

#include "mc/_HeaderOutputPredefine.h"

class RemovePassengersSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REMOVEPASSENGERSSYSTEM
public:
    RemovePassengersSystem& operator=(RemovePassengersSystem const&) = delete;
    RemovePassengersSystem(RemovePassengersSystem const&)            = delete;
    RemovePassengersSystem()                                         = delete;
#endif

public:
    /**
     * @symbol ?createRemovePassengersSystem\@RemovePassengersSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createRemovePassengersSystem();
};
