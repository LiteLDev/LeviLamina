#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class TwistingVinesClusterFeature : public ::Feature {
public:
    // prevent constructor by default
    TwistingVinesClusterFeature& operator=(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1TwistingVinesClusterFeature@@UEAA@XZ
    virtual ~TwistingVinesClusterFeature() = default;

    // vIndex: 3, symbol: ?place@TwistingVinesClusterFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeVineString@TwistingVinesClusterFeature@@AEBAXAEAVBlockSource@@AEAVRandom@@AEBVBlockPos@@HHH@Z
    MCAPI void _placeVineString(class BlockSource&, class Random&, class BlockPos const&, int, int, int) const;

    // NOLINTEND
};
