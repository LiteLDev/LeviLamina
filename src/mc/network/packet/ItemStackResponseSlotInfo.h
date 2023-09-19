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
    // symbol: ??0ItemStackResponseSlotInfo@@QEAA@$$QEAU0@@Z
    MCAPI ItemStackResponseSlotInfo(struct ItemStackResponseSlotInfo&&);

    // symbol: ??1ItemStackResponseSlotInfo@@QEAA@XZ
    MCAPI ~ItemStackResponseSlotInfo();

    // NOLINTEND
};
