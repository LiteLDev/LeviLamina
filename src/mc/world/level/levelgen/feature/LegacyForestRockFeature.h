#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyForestRockFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyForestRockFeature& operator=(LegacyForestRockFeature const&);
    LegacyForestRockFeature(LegacyForestRockFeature const&);
    LegacyForestRockFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacyForestRockFeature@@UEAA@XZ
    virtual ~LegacyForestRockFeature() = default;

    // vIndex: 3, symbol: ?place@LegacyForestRockFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
