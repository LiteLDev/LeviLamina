#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndIslandFeature : public ::Feature {
public:
    // prevent constructor by default
    EndIslandFeature& operator=(EndIslandFeature const&);
    EndIslandFeature(EndIslandFeature const&);
    EndIslandFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EndIslandFeature@@UEAA@XZ
    virtual ~EndIslandFeature();

    // vIndex: 3, symbol: ?place@EndIslandFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
