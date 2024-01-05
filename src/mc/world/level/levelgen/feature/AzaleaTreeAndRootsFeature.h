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
    // vIndex: 0, symbol: __gen_??1AzaleaTreeAndRootsFeature@@UEAA@XZ
    virtual ~AzaleaTreeAndRootsFeature() = default;

    // vIndex: 3, symbol: ?place@AzaleaTreeAndRootsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isLushGroundReplaceable@AzaleaTreeAndRootsFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isLushGroundReplaceable(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_tryPlaceAzaleaTree@AzaleaTreeAndRootsFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@I@Z
    MCAPI bool
    _tryPlaceAzaleaTree(class BlockSource& region, class BlockPos const& pos, class Random& random, uint) const;

    // NOLINTEND
};
