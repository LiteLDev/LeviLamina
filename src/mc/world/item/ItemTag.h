#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ItemTag {
public:
    // prevent constructor by default
    ItemTag& operator=(ItemTag const&);
    ItemTag(ItemTag const&);
    ItemTag();

public:
    // NOLINTBEGIN
    // symbol: ??1ItemTag@@QEAA@XZ
    MCAPI ~ItemTag();

    // NOLINTEND
};
