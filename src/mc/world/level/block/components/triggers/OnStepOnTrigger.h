#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOnTrigger {
public:
    // prevent constructor by default
    OnStepOnTrigger& operator=(OnStepOnTrigger const&) = delete;
    OnStepOnTrigger(OnStepOnTrigger const&)            = delete;
    OnStepOnTrigger()                                  = delete;

public:
    // NOLINTBEGIN
    // symbol: ??1OnStepOnTrigger@@UEAA@XZ
    MCVAPI ~OnStepOnTrigger();

    // symbol: ??0OnStepOnTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnStepOnTrigger(class OnStepOnTrigger&&);

    // NOLINTEND
};
