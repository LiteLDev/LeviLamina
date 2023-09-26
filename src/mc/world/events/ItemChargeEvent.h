#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {
public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);
    ItemChargeEvent();

public:
    // NOLINTBEGIN
    // symbol: ??0ItemChargeEvent@@QEAA@$$QEAU0@@Z
    MCAPI ItemChargeEvent(struct ItemChargeEvent&&);

    // symbol: ??0ItemChargeEvent@@QEAA@AEBU0@@Z
    MCAPI ItemChargeEvent(struct ItemChargeEvent const&);

    // NOLINTEND
};
