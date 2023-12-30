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
    // vIndex: 0, symbol: __gen_??1LegacySmallMushroomsFeature@@UEAA@XZ
    virtual ~LegacySmallMushroomsFeature() = default;

    // vIndex: 3, symbol: ?place@LegacySmallMushroomsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // symbol: ??0LegacySmallMushroomsFeature@@QEAA@AEBVFeatureRegistry@@@Z
    MCAPI explicit LegacySmallMushroomsFeature(class FeatureRegistry const& registry);

    // NOLINTEND
};
