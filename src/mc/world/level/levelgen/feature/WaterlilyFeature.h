#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WaterlilyFeature : public ::Feature {
public:
    // prevent constructor by default
    WaterlilyFeature& operator=(WaterlilyFeature const&);
    WaterlilyFeature(WaterlilyFeature const&);
    WaterlilyFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1WaterlilyFeature@@UEAA@XZ
    virtual ~WaterlilyFeature() = default;

    // vIndex: 3, symbol: ?place@WaterlilyFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
