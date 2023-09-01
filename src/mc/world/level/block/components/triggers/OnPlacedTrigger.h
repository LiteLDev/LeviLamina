#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlacedTrigger {
public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&) = delete;
    OnPlacedTrigger(OnPlacedTrigger const&)            = delete;
    OnPlacedTrigger()                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnPlacedTrigger@@UEAA@XZ
    MCVAPI ~OnPlacedTrigger();

    // symbol: ??0OnPlacedTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnPlacedTrigger(class OnPlacedTrigger&&);

    // NOLINTEND
};
