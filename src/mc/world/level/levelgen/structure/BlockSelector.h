#pragma once

#include "mc/_HeaderOutputPredefine.h"

class BlockSelector {
public:
    // prevent constructor by default
    BlockSelector& operator=(BlockSelector const&);
    BlockSelector(BlockSelector const&);
    BlockSelector();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockSelector();

    // vIndex: 1
    virtual class Block const& next(class Random& random, int, int, int, bool) const = 0;

    // NOLINTEND
};
