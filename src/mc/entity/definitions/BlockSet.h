#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockSet {
public:
    // prevent constructor by default
    BlockSet& operator=(BlockSet const&);
    BlockSet(BlockSet const&);
    BlockSet();

public:
    // NOLINTBEGIN
    MCAPI ~BlockSet();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
