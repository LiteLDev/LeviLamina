#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltPillarFeature : public ::Feature {
public:
    // prevent constructor by default
    BasaltPillarFeature& operator=(BasaltPillarFeature const&);
    BasaltPillarFeature(BasaltPillarFeature const&);
    BasaltPillarFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BasaltPillarFeature@@UEAA@XZ
    virtual ~BasaltPillarFeature() = default;

    // vIndex: 3, symbol: ?place@BasaltPillarFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_growColumn@BasaltPillarFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@MAEBVBlock@@@Z
    MCAPI bool
    _growColumn(class BlockSource& region, class BlockPos const& pos, class Random& random, float placeChance, class Block const&)
        const;

    // NOLINTEND
};
