#pragma once

#include "mc/_HeaderOutputPredefine.h"

class UpdateAISystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEAISYSTEM
public:
    UpdateAISystem& operator=(UpdateAISystem const&) = delete;
    UpdateAISystem(UpdateAISystem const&)            = delete;
    UpdateAISystem()                                 = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@UpdateAISystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
