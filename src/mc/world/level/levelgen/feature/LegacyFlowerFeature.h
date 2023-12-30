#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyFlowerFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyFlowerFeature& operator=(LegacyFlowerFeature const&);
    LegacyFlowerFeature(LegacyFlowerFeature const&);
    LegacyFlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyFlowerFeature@@UEAA@XZ
    virtual ~LegacyFlowerFeature() = default;

    // vIndex: 3, symbol: ?place@LegacyFlowerFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
