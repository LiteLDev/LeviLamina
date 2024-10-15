#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlockPileFeature : public ::Feature {
public:
    // prevent constructor by default
    BlockPileFeature& operator=(BlockPileFeature const&);
    BlockPileFeature(BlockPileFeature const&);
    BlockPileFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BlockPileFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // vIndex: 4
    virtual class Block const& getBlockToPlace(class Random& random) const;

    MCAPI explicit BlockPileFeature(class Block const& block);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Block const& block);

    MCAPI class Block const& getBlockToPlace$(class Random& random) const;

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
