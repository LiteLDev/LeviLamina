#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaPickleFeature : public ::Feature {
public:
    // prevent constructor by default
    SeaPickleFeature& operator=(SeaPickleFeature const&);
    SeaPickleFeature(SeaPickleFeature const&);
    SeaPickleFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SeaPickleFeature@@UEAA@XZ
    virtual ~SeaPickleFeature() = default;

    // vIndex: 3, symbol: ?place@SeaPickleFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
