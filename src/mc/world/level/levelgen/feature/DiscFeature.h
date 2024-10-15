#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DiscFeature : public ::Feature {
public:
    // prevent constructor by default
    DiscFeature& operator=(DiscFeature const&);
    DiscFeature(DiscFeature const&);
    DiscFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DiscFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI DiscFeature(class Block const& block, int radius);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(class Block const& block, int radius);

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
