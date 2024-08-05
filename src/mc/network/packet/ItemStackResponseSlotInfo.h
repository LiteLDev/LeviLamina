#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemStackResponseSlotInfo {
public:
    // prevent constructor by default
    ItemStackResponseSlotInfo& operator=(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo(ItemStackResponseSlotInfo const&);
    ItemStackResponseSlotInfo();

public:
    // NOLINTBEGIN
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);

    MCAPI ~ItemStackResponseSlotInfo();

    // NOLINTEND
};
