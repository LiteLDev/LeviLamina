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
    virtual void sendEvents(class LevelEventManager&, class BlockSource&, class BlockPos const&, class Block const&);

    // vIndex: 2
    virtual void dropResources(class BlockSource&, class BlockPos const&, class Block const&);

    // NOLINTEND
};
