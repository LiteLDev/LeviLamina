#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByMiningComponent {

public:
    // prevent constructor by default
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&) = delete;
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&)            = delete;
    BlockDestructibleByMiningComponent()                                                     = delete;
};
