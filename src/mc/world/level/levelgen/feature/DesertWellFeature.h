#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DesertWellFeature : public ::Feature {
public:
    // prevent constructor by default
    DesertWellFeature& operator=(DesertWellFeature const&);
    DesertWellFeature(DesertWellFeature const&);
    DesertWellFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DesertWellFeature@@UEAA@XZ
    virtual ~DesertWellFeature() = default;

    // vIndex: 3, symbol: ?place@DesertWellFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
