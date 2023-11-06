#pragma once

#include "mc/_HeaderOutputPredefine.h"

class OnPlacedTrigger {
public:
    // prevent constructor by default
    OnPlacedTrigger& operator=(OnPlacedTrigger const&);
    OnPlacedTrigger(OnPlacedTrigger const&);
    OnPlacedTrigger();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1OnPlacedTrigger@@UEAA@XZ
    virtual ~OnPlacedTrigger();

    // symbol: ??0OnPlacedTrigger@@QEAA@$$QEAV0@@Z
    MCAPI OnPlacedTrigger(class OnPlacedTrigger&&);

    // NOLINTEND
};
