#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DesertWellFeature : public ::Feature {
public:
    // prevent constructor by default
    DesertWellFeature& operator=(DesertWellFeature const&);
    DesertWellFeature(DesertWellFeature const&);
    DesertWellFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~DesertWellFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
