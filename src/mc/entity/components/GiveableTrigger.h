#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct GiveableTrigger {
public:
    // prevent constructor by default
    GiveableTrigger& operator=(GiveableTrigger const&);
    GiveableTrigger();

public:
    // NOLINTBEGIN
    // symbol: ??0GiveableTrigger@@QEAA@AEBU0@@Z
    MCAPI GiveableTrigger(struct GiveableTrigger const&);

    // symbol: ?addItem@GiveableTrigger@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void addItem(class ItemDescriptor const& itemDescriptor);

    // symbol: ??1GiveableTrigger@@QEAA@XZ
    MCAPI ~GiveableTrigger();

    // NOLINTEND
};
