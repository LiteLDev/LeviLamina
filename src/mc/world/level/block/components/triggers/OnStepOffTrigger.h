#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOffTrigger {
public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&) = delete;
    OnStepOffTrigger(OnStepOffTrigger const&)            = delete;
    OnStepOffTrigger()                                   = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnStepOffTrigger@@UEAA@XZ
    MCVAPI ~OnStepOffTrigger();

    // symbol: ??0OnStepOffTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnStepOffTrigger(class OnStepOffTrigger&&);

    // NOLINTEND
};
