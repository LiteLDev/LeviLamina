#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherSpringFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherSpringFeature& operator=(NetherSpringFeature const&);
    NetherSpringFeature(NetherSpringFeature const&);
    NetherSpringFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~NetherSpringFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI NetherSpringFeature(class Block const& block, bool insideRock);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Block const& block, bool insideRock);

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
