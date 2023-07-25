#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetPreviousWalkDistSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETPREVIOUSWALKDISTSYSTEM
public:
    SetPreviousWalkDistSystem& operator=(SetPreviousWalkDistSystem const&) = delete;
    SetPreviousWalkDistSystem(SetPreviousWalkDistSystem const&)            = delete;
    SetPreviousWalkDistSystem()                                            = delete;
#endif

public:
    /**
     * @symbol ?createSystem\@SetPreviousWalkDistSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem();
};
