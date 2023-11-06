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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ReedsFeature();

    // vIndex: 3, symbol: ?place@ReedsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
