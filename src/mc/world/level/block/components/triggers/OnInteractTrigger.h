#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnInteractTrigger {
public:
    // prevent constructor by default
    OnInteractTrigger& operator=(OnInteractTrigger const&);
    OnInteractTrigger(OnInteractTrigger const&);
    OnInteractTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnInteractTrigger@@UEAA@XZ
    virtual ~OnInteractTrigger();

    // symbol: ??0OnInteractTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnInteractTrigger(class OnInteractTrigger&&);

    // NOLINTEND
};
