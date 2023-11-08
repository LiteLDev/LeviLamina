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
    // vIndex: 0, symbol: __gen_??1DefaultMobSpawner@@UEAA@XZ
    virtual ~DefaultMobSpawner() = default;

    // vIndex: 4, symbol: ?getPos@DefaultMobSpawner@@UEAAAEBVBlockPos@@XZ
    virtual class BlockPos const& getPos();

    // NOLINTEND
};
