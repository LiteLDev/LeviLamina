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
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isLushGroundReplaceable@AzaleaTreeAndRootsFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isLushGroundReplaceable(class BlockSource&, class BlockPos const&) const;

    // symbol: ?_tryPlaceAzaleaTree@AzaleaTreeAndRootsFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@I@Z
    MCAPI bool _tryPlaceAzaleaTree(class BlockSource&, class BlockPos const&, class Random&, uint) const;

    // NOLINTEND
};
