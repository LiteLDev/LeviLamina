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
    // symbol:
    // ?fromStringVector@BlockPlacementDirectionalFilter@@SAXAEAU1@V?$vector@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@V?$allocator@V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@2@@std@@@Z
    MCAPI static void
    fromStringVector(struct BlockPlacementDirectionalFilter& instance, std::vector<std::string> faces);

    // NOLINTEND
};
