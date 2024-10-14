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
    MCAPI ~ItemTag();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
