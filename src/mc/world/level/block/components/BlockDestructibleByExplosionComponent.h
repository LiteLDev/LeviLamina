#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct BlockDestructibleByExplosionComponent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BLOCKDESTRUCTIBLEBYEXPLOSIONCOMPONENT
public:
    BlockDestructibleByExplosionComponent& operator=(BlockDestructibleByExplosionComponent const&) = delete;
    BlockDestructibleByExplosionComponent(BlockDestructibleByExplosionComponent const&)            = delete;
    BlockDestructibleByExplosionComponent()                                                        = delete;
#endif

public:
};
