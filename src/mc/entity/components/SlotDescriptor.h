#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct SlotDescriptor {
public:
    // NOLINTBEGIN
    // symbol: ??0SlotDescriptor@@QEAA@XZ
    MCAPI SlotDescriptor();

    // symbol: ??0SlotDescriptor@@QEAA@AEBU0@@Z
    MCAPI SlotDescriptor(struct SlotDescriptor const&);

    // symbol: ?addAcceptedItem@SlotDescriptor@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void addAcceptedItem(class ItemDescriptor const& itemDescriptor);

    // symbol: ??4SlotDescriptor@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct SlotDescriptor& operator=(struct SlotDescriptor const&);

    // symbol: ??1SlotDescriptor@@QEAA@XZ
    MCAPI ~SlotDescriptor();

    // NOLINTEND
};
