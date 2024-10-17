#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelBlockDestroyer {
public:
    // prevent constructor by default
    LevelBlockDestroyer& operator=(LevelBlockDestroyer const&);
    LevelBlockDestroyer(LevelBlockDestroyer const&);
    LevelBlockDestroyer();

public:
    // NOLINTBEGIN
    MCAPI bool destroyBlock(class BlockSource& region, class BlockPos const& pos, bool dropResources);

    // NOLINTEND
};
