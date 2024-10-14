#pragma once

#include "mc/_HeaderOutputPredefine.h"

class LevelBlockDestroyerProxy {
public:
    // prevent constructor by default
    LevelBlockDestroyerProxy& operator=(LevelBlockDestroyerProxy const&);
    LevelBlockDestroyerProxy(LevelBlockDestroyerProxy const&);
    LevelBlockDestroyerProxy();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~LevelBlockDestroyerProxy() = default;

    // vIndex: 1
    virtual void sendEvents(
        class LevelEventManager& levelEventManager,
        class BlockSource&       region,
        class BlockPos const&    pos,
        class Block const&       block
    );

    // vIndex: 2
    virtual void dropResources(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dropResources$(class BlockSource& region, class BlockPos const& pos, class Block const& block);

    MCAPI void sendEvents$(
        class LevelEventManager& levelEventManager,
        class BlockSource&       region,
        class BlockPos const&    pos,
        class Block const&       block
    );

    // NOLINTEND
};
