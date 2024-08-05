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
    MCAPI static std::optional<class BlockPos>
    findStandupPosition(class BlockPos const& requestedPosition, class BlockSource const& region);

    MCAPI static bool isStandupPosition(class BlockPos const& position, class BlockSource const& region);

    // NOLINTEND
};
