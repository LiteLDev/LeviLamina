#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class FlowerFeature : public ::Feature {
public:
    // prevent constructor by default
    FlowerFeature& operator=(FlowerFeature const&);
    FlowerFeature(FlowerFeature const&);
    FlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~FlowerFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI explicit FlowerFeature(class Block const& block);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _placeMushroom(
        class BlockSource&    region,
        class BlockPos const& origin,
        class Block const&    mushroom,
        class Random&         random
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI void* ctor$(class Block const& block);

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
