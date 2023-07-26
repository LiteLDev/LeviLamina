#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SetPreviousWalkDistSystem {

public:
    // prevent constructor by default
    SetPreviousWalkDistSystem& operator=(SetPreviousWalkDistSystem const&) = delete;
    SetPreviousWalkDistSystem(SetPreviousWalkDistSystem const&)            = delete;
    SetPreviousWalkDistSystem()                                            = delete;

public:
    /**
     * @symbol ?createSystem\@SetPreviousWalkDistSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createSystem(); // NOLINT
};
