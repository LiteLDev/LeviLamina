#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BoostItem {
public:
    // prevent constructor by default
    BoostItem& operator=(BoostItem const&);
    BoostItem(BoostItem const&);
    BoostItem();

public:
    // NOLINTBEGIN
    // symbol: ?setReplacementItemDescriptor@BoostItem@@QEAAXAEBVItemDescriptor@@@Z
    MCAPI void setReplacementItemDescriptor(class ItemDescriptor const& replacementItemDescriptor);

    // symbol: ??1BoostItem@@QEAA@XZ
    MCAPI ~BoostItem();

    // NOLINTEND
};
