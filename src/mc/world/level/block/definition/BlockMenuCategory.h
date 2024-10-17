#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockMenuCategory {
public:
    // prevent constructor by default
    BlockMenuCategory& operator=(BlockMenuCategory const&);
    BlockMenuCategory(BlockMenuCategory const&);
    BlockMenuCategory();

public:
    // NOLINTBEGIN
    MCAPI ~BlockMenuCategory();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
