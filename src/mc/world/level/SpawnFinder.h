#pragma once

#include "mc/_HeaderOutputPredefine.h"

class SpawnFinder {
public:
    // prevent constructor by default
    SpawnFinder& operator=(SpawnFinder const&);
    SpawnFinder(SpawnFinder const&);
    SpawnFinder();

public:
    // NOLINTBEGIN
    // symbol: ?findStandupPosition@SpawnFinder@@SA?AV?$optional@VBlockPos@@@std@@AEBVBlockPos@@AEBVBlockSource@@@Z
    MCAPI static std::optional<class BlockPos>
    findStandupPosition(class BlockPos const& requestedPosition, class BlockSource const& region);

    // symbol: ?isStandupPosition@SpawnFinder@@SA_NAEBVBlockPos@@AEBVBlockSource@@@Z
    MCAPI static bool isStandupPosition(class BlockPos const& position, class BlockSource const& region);

    // NOLINTEND
};
