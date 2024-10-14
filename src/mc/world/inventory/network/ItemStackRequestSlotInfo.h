#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackRequestSlotInfo {
public:
    // prevent constructor by default
    ItemStackRequestSlotInfo& operator=(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo(ItemStackRequestSlotInfo const&);
    ItemStackRequestSlotInfo();

public:
    // NOLINTBEGIN
    MCAPI ~ItemStackRequestSlotInfo();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
