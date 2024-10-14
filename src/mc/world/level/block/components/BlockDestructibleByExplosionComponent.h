#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockDestructibleByExplosionComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockDestructibleByExplosionComponent& operator=(BlockDestructibleByExplosionComponent const&);
    BlockDestructibleByExplosionComponent(BlockDestructibleByExplosionComponent const&);
    BlockDestructibleByExplosionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockDestructibleByExplosionComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    // NOLINTEND
};
