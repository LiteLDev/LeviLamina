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
    MCAPI bool destroyBlock(class BlockSource&, class BlockPos const&, bool);

    // NOLINTEND
};
