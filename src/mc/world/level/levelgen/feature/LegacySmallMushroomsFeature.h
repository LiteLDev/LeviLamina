#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySmallMushroomsFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySmallMushroomsFeature& operator=(LegacySmallMushroomsFeature const&);
    LegacySmallMushroomsFeature(LegacySmallMushroomsFeature const&);
    LegacySmallMushroomsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacySmallMushroomsFeature() = default;

    // vIndex: 3, symbol: ?place@LegacySmallMushroomsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0LegacySmallMushroomsFeature@@QEAA@AEBVFeatureRegistry@@@Z
    MCAPI explicit LegacySmallMushroomsFeature(class FeatureRegistry const&);

    // NOLINTEND
};
