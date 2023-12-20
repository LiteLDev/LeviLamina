#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockPlacementCondition {
public:
    // prevent constructor by default
    BlockPlacementCondition(BlockPlacementCondition const&);
    BlockPlacementCondition();

public:
    // NOLINTBEGIN
    // symbol: ??4BlockPlacementCondition@@QEAAAEAU0@$$QEAU0@@Z
    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition&&);

    // symbol: ??4BlockPlacementCondition@@QEAAAEAU0@AEBU0@@Z
    MCAPI struct BlockPlacementCondition& operator=(struct BlockPlacementCondition const&);

    // symbol: ??1BlockPlacementCondition@@QEAA@XZ
    MCAPI ~BlockPlacementCondition();

    // NOLINTEND
};
