#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class AzaleaTreeAndRootsFeature : public ::Feature {
public:
    // prevent constructor by default
    AzaleaTreeAndRootsFeature& operator=(AzaleaTreeAndRootsFeature const&);
    AzaleaTreeAndRootsFeature(AzaleaTreeAndRootsFeature const&);
    AzaleaTreeAndRootsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~AzaleaTreeAndRootsFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isLushGroundReplaceable(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI bool
    _tryPlaceAzaleaTree(class BlockSource& region, class BlockPos const& pos, class Random& random, uint waterDepth)
        const;

    // NOLINTEND
};
