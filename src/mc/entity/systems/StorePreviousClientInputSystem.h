#pragma once

#include "mc/_HeaderOutputPredefine.h"

class StorePreviousClientInputSystem {
public:
    // prevent constructor by default
    StorePreviousClientInputSystem& operator=(StorePreviousClientInputSystem const&);
    StorePreviousClientInputSystem(StorePreviousClientInputSystem const&);
    StorePreviousClientInputSystem();

public:
    // NOLINTBEGIN
    // symbol: ?createStorePreviousClientInputSystem@StorePreviousClientInputSystem@@SA?AUTickingSystemWithInfo@@XZ
    MCAPI static struct TickingSystemWithInfo createStorePreviousClientInputSystem();

    // NOLINTEND
};
