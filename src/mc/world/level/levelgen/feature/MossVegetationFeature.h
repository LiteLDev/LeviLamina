#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MossVegetationFeature : public ::Feature {
public:
    // prevent constructor by default
    MossVegetationFeature& operator=(MossVegetationFeature const&);
    MossVegetationFeature(MossVegetationFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MossVegetationFeature@@UEAA@XZ
    virtual ~MossVegetationFeature() = default;

    // vIndex: 3, symbol: ?place@MossVegetationFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0MossVegetationFeature@@QEAA@XZ
    MCAPI MossVegetationFeature();

    // NOLINTEND
};
