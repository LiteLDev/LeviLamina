#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementDirectionalFilter {
public:
    // prevent constructor by default
    BlockPlacementDirectionalFilter& operator=(BlockPlacementDirectionalFilter const&);
    BlockPlacementDirectionalFilter(BlockPlacementDirectionalFilter const&);
    BlockPlacementDirectionalFilter();

public:
    // NOLINTBEGIN
    MCAPI static void
    fromStringVector(struct BlockPlacementDirectionalFilter& instance, std::vector<std::string> faces);

    // NOLINTEND
};
