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
    // symbol: ?destroyBlock@LevelBlockDestroyer@@QEAA_NAEAVBlockSource@@AEBVBlockPos@@_N@Z
    MCAPI bool destroyBlock(class BlockSource&, class BlockPos const&, bool);

    // NOLINTEND
};
