#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeagrassFeature : public ::Feature {
public:
    // prevent constructor by default
    SeagrassFeature& operator=(SeagrassFeature const&);
    SeagrassFeature(SeagrassFeature const&);
    SeagrassFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SeagrassFeature@@UEAA@XZ
    virtual ~SeagrassFeature() = default;

    // vIndex: 3, symbol: ?place@SeagrassFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isNotIce@SeagrassFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@@Z
    MCAPI bool _isNotIce(class BlockSource& region, class BlockPos const& pos) const;

    // NOLINTEND
};
