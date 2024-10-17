#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemChargeEvent {
public:
    // prevent constructor by default
    ItemChargeEvent& operator=(ItemChargeEvent const&);
    ItemChargeEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemChargeEvent(struct ItemChargeEvent&&);

    MCAPI ItemChargeEvent(struct ItemChargeEvent const&);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ItemChargeEvent const&);

    MCAPI void* ctor$(struct ItemChargeEvent&&);

    // NOLINTEND
};
