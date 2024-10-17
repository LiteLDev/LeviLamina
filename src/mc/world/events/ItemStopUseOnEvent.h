#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStopUseOnEvent {
public:
    // prevent constructor by default
    ItemStopUseOnEvent& operator=(ItemStopUseOnEvent const&);
    ItemStopUseOnEvent();

public:
    // NOLINTBEGIN
    MCAPI ItemStopUseOnEvent(struct ItemStopUseOnEvent const&);

    MCAPI ~ItemStopUseOnEvent();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void* ctor$(struct ItemStopUseOnEvent const&);

    MCAPI void dtor$();

    // NOLINTEND
};
