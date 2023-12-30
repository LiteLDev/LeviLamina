#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CoralHangFeature : public ::Feature {
public:
    // prevent constructor by default
    CoralHangFeature& operator=(CoralHangFeature const&);
    CoralHangFeature(CoralHangFeature const&);
    CoralHangFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CoralHangFeature@@UEAA@XZ
    virtual ~CoralHangFeature() = default;

    // vIndex: 3, symbol: ?place@CoralHangFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
