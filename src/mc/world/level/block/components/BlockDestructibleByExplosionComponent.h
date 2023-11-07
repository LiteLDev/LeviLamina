#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/block/utils/BlockComponentBase.h"

struct BlockDestructibleByExplosionComponent : public ::BlockComponentBase {
public:
    // prevent constructor by default
    BlockDestructibleByExplosionComponent& operator=(BlockDestructibleByExplosionComponent const&);
    BlockDestructibleByExplosionComponent(BlockDestructibleByExplosionComponent const&);
    BlockDestructibleByExplosionComponent();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~BlockDestructibleByExplosionComponent() = default;

    // symbol: ?usesNewComponentStorage@BlockDestructibleByExplosionComponent@@SA_NXZ
    MCAPI static bool usesNewComponentStorage();

    // NOLINTEND
};
