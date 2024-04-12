#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeFungusFeature : public ::Feature {
public:
    // prevent constructor by default
    HugeFungusFeature& operator=(HugeFungusFeature const&);
    HugeFungusFeature(HugeFungusFeature const&);
    HugeFungusFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HugeFungusFeature@@UEAA@XZ
    virtual ~HugeFungusFeature();

    // vIndex: 3, symbol: ?place@HugeFungusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // symbol: ??0HugeFungusFeature@@QEAA@_N@Z
    MCAPI explicit HugeFungusFeature(bool isBlue);

    // NOLINTEND
};
