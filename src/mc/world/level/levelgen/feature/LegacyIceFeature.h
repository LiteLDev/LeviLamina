#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacyIceFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacyIceFeature& operator=(LegacyIceFeature const&);
    LegacyIceFeature(LegacyIceFeature const&);
    LegacyIceFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacyIceFeature() = default;

    // vIndex: 3, symbol: ?place@LegacyIceFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0LegacyIceFeature@@QEAA@AEBVFeatureRegistry@@@Z
    MCAPI explicit LegacyIceFeature(class FeatureRegistry const&);

    // NOLINTEND
};
