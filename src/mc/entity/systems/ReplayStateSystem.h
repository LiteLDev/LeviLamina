#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ReplayStateSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_REPLAYSTATESYSTEM
public:
    ReplayStateSystem& operator=(ReplayStateSystem const&) = delete;
    ReplayStateSystem(ReplayStateSystem const&)            = delete;
    ReplayStateSystem()                                    = delete;
#endif

public:
    /**
     * @symbol ?createAddReplayStateComponentSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createAddReplayStateComponentSystem();
    /**
     * @symbol ?createReplayStateSystem\@ReplayStateSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createReplayStateSystem();
};
