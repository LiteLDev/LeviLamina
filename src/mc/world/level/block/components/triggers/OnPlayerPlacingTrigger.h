#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlayerPlacingTrigger {
public:
    // prevent constructor by default
    OnPlayerPlacingTrigger& operator=(OnPlayerPlacingTrigger const&) = delete;
    OnPlayerPlacingTrigger(OnPlayerPlacingTrigger const&)            = delete;
    OnPlayerPlacingTrigger()                                         = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnPlayerPlacingTrigger@@UEAA@XZ
    MCVAPI ~OnPlayerPlacingTrigger();

    // symbol: ??0OnPlayerPlacingTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnPlayerPlacingTrigger(class OnPlayerPlacingTrigger&&);

    // NOLINTEND
};
