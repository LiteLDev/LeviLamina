#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnStepOffTrigger {
public:
    // prevent constructor by default
    OnStepOffTrigger& operator=(OnStepOffTrigger const&);
    OnStepOffTrigger(OnStepOffTrigger const&);
    OnStepOffTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnStepOffTrigger@@UEAA@XZ
    virtual ~OnStepOffTrigger();

    // symbol: ??0OnStepOffTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnStepOffTrigger(class OnStepOffTrigger&&);

    // NOLINTEND
};
