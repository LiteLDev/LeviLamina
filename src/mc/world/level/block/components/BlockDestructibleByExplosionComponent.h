#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByExplosionComponent {

public:
    // prevent constructor by default
    BlockDestructibleByExplosionComponent& operator=(BlockDestructibleByExplosionComponent const&) = delete;
    BlockDestructibleByExplosionComponent(BlockDestructibleByExplosionComponent const&)            = delete;
    BlockDestructibleByExplosionComponent()                                                        = delete;
};
