#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySpringsFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySpringsFeature& operator=(LegacySpringsFeature const&);
    LegacySpringsFeature(LegacySpringsFeature const&);
    LegacySpringsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1LegacySpringsFeature@@UEAA@XZ
    virtual ~LegacySpringsFeature() = default;

    // vIndex: 3, symbol: ?place@LegacySpringsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // symbol: ??0LegacySpringsFeature@@QEAA@AEBVFeatureRegistry@@AEBVBaseGameVersion@@@Z
    MCAPI LegacySpringsFeature(class FeatureRegistry const& registry, class BaseGameVersion const& baseGameVersion);

    // NOLINTEND
};
