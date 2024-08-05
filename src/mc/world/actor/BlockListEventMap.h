#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockListEventMap {
public:
    // prevent constructor by default
    BlockListEventMap();

public:
    // NOLINTBEGIN
    MCAPI BlockListEventMap(class BlockListEventMap const&);

    MCAPI class BlockListEventMap& operator=(class BlockListEventMap const&);

    MCAPI ~BlockListEventMap();

    // NOLINTEND
};
