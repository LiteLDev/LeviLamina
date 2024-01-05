#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WeepingVinesClusterFeature : public ::Feature {
public:
    // prevent constructor by default
    WeepingVinesClusterFeature& operator=(WeepingVinesClusterFeature const&);
    WeepingVinesClusterFeature(WeepingVinesClusterFeature const&);
    WeepingVinesClusterFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WeepingVinesClusterFeature@@UEAA@XZ
    virtual ~WeepingVinesClusterFeature() = default;

    // vIndex: 3, symbol: ?place@WeepingVinesClusterFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isInvalidPlacementLocation@WeepingVinesClusterFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isInvalidPlacementLocation(class BlockSource& region, class BlockPos const& pos) const;

    // symbol: ?_placeRoofNetherWart@WeepingVinesClusterFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _placeRoofNetherWart(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?_placeRoofWeepingVines@WeepingVinesClusterFeature@@AEBAXAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI void _placeRoofWeepingVines(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
