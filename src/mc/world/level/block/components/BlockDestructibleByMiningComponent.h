#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/components/BlockComponentBase.h"

struct BlockDestructibleByMiningComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockDestructibleByMiningComponent() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};
