#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeagrassFeature : public ::Feature {
public:
    // prevent constructor by default
    SeagrassFeature& operator=(SeagrassFeature const&);
    SeagrassFeature(SeagrassFeature const&);
    SeagrassFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~SeagrassFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isNotIce(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
