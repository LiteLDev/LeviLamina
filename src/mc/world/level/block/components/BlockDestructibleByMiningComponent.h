#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByMiningComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYMININGCOMPONENT
public:
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&) = delete;
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&)            = delete;
    BlockDestructibleByMiningComponent()                                                     = delete;
#endif

public:
};
