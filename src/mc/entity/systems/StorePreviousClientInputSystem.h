#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StorePreviousClientInputSystem {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STOREPREVIOUSCLIENTINPUTSYSTEM
public:
    StorePreviousClientInputSystem& operator=(StorePreviousClientInputSystem const&) = delete;
    StorePreviousClientInputSystem(StorePreviousClientInputSystem const&)            = delete;
    StorePreviousClientInputSystem()                                                 = delete;
#endif

public:
    /**
     * @symbol ?createStorePreviousClientInputSystem\@StorePreviousClientInputSystem\@\@SA?AUTickingSystemWithInfo\@\@XZ
     */
    MCAPI static struct TickingSystemWithInfo createStorePreviousClientInputSystem();
};
