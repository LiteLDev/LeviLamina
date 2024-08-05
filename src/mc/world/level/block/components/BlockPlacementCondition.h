#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementCondition {
public:
    // prevent constructor by default
    BlockPlacementCondition(BlockPlacementCondition const&);
    BlockPlacementCondition();

public:
    // NOLINTBEGIN
    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition&&);

    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition const&);

    MCAPI ~BlockPlacementCondition();

    // NOLINTEND
};
