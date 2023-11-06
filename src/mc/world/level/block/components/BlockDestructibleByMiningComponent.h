#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockDestructibleByMiningComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockDestructibleByMiningComponent& operator=(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent(BlockDestructibleByMiningComponent const&);
    BlockDestructibleByMiningComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockDestructibleByMiningComponent() = default;

    // symbol: ?usesNewComponentStorage@BlockDestructibleByMiningComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
