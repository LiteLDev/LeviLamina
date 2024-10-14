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
    // vIndex: 0
    virtual ~DefaultMobSpawner() = default;

    // vIndex: 4
    virtual class BlockPos const& getPos();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI class BlockPos const& getPos$();

    // NOLINTEND
};
