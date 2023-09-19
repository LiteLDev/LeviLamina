#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemData {
public:
    // prevent constructor by default
    ItemData& operator=(ItemData const&);
    ItemData(ItemData const&);
    ItemData();

public:
    // NOLINTBEGIN
    // symbol: ??1ItemData@@QEAA@XZ
    MCAPI ~ItemData();

    // NOLINTEND
};
