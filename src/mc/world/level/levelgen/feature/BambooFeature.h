#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BambooFeature : public ::Feature {
public:
    // prevent constructor by default
    BambooFeature& operator=(BambooFeature const&);
    BambooFeature(BambooFeature const&);
    BambooFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~BambooFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
