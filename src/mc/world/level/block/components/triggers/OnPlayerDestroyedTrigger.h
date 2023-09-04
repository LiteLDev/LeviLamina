#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerDestroyedTrigger {
public:
    // prevent constructor by default
    OnPlayerDestroyedTrigger& operator=(OnPlayerDestroyedTrigger const&) = delete;
    OnPlayerDestroyedTrigger(OnPlayerDestroyedTrigger const&)            = delete;
    OnPlayerDestroyedTrigger()                                           = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnPlayerDestroyedTrigger@@UEAA@XZ
    MCVAPI ~OnPlayerDestroyedTrigger();

    // symbol: ??0OnPlayerDestroyedTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnPlayerDestroyedTrigger(class OnPlayerDestroyedTrigger&&);

    // NOLINTEND
};
