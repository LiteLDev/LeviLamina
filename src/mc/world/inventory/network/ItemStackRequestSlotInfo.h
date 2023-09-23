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
    // symbol: ?matchesContainerAndSlot@ItemStackRequestSlotInfo@@QEBA_NAEBU1@@Z
    MCAPI bool matchesContainerAndSlot(struct ItemStackRequestSlotInfo const&) const;

    // symbol: ??1ItemStackRequestSlotInfo@@QEAA@XZ
    MCAPI ~ItemStackRequestSlotInfo();

    // NOLINTEND
};
