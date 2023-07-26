#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StorePreviousClientInputSystem {

public:
    // prevent constructor by default
    StorePreviousClientInputSystem& operator=(StorePreviousClientInputSystem const&) = delete;
    StorePreviousClientInputSystem(StorePreviousClientInputSystem const&)            = delete;
    StorePreviousClientInputSystem()                                                 = delete;

public:
    /**
     * @symbol ?createStorePreviousClientInputSystem\@StorePreviousClientInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStorePreviousClientInputSystem(); // NOLINT
};
