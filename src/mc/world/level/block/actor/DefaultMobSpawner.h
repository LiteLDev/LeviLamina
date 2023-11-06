#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/BaseMobSpawner.h"

class DefaultMobSpawner : public ::BaseMobSpawner {
public:
    // prevent constructor by default
    DefaultMobSpawner& operator=(DefaultMobSpawner const&);
    DefaultMobSpawner(DefaultMobSpawner const&);
    DefaultMobSpawner();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DefaultMobSpawner();

    // vIndex: 4, symbol: ?getPos@DefaultMobSpawner@@UEAAAEBVBlockPos@@XZ
    virtual class BlockPos const& getPos();

    // NOLINTEND
};
