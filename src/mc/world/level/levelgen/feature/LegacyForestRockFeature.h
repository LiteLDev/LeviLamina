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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacyForestRockFeature();

    // vIndex: 3, symbol: ?place@LegacyForestRockFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
