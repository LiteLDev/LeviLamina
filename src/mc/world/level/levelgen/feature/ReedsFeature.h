#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class ReedsFeature : public ::Feature {
public:
    // prevent constructor by default
    ReedsFeature& operator=(ReedsFeature const&);
    ReedsFeature(ReedsFeature const&);
    ReedsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1ReedsFeature@@UEAA@XZ
    virtual ~ReedsFeature() = default;

    // vIndex: 3, symbol: ?place@ReedsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
