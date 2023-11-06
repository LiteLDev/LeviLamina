#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class LegacySwampFoliageFeature : public ::Feature {
public:
    // prevent constructor by default
    LegacySwampFoliageFeature& operator=(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature(LegacySwampFoliageFeature const&);
    LegacySwampFoliageFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~LegacySwampFoliageFeature();

    // vIndex: 3, symbol: ?place@LegacySwampFoliageFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??0LegacySwampFoliageFeature@@QEAA@AEAVFeatureRegistry@@@Z
    MCAPI explicit LegacySwampFoliageFeature(class FeatureRegistry&);

    // NOLINTEND
};
