#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeMushroomFeature : public ::Feature {
public:
    // prevent constructor by default
    HugeMushroomFeature& operator=(HugeMushroomFeature const&);
    HugeMushroomFeature(HugeMushroomFeature const&);

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1HugeMushroomFeature@@UEAA@XZ
    virtual ~HugeMushroomFeature();

    // vIndex: 3, symbol: ?place@HugeMushroomFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ??0HugeMushroomFeature@@QEAA@XZ
    MCAPI HugeMushroomFeature();

    // symbol: ??0HugeMushroomFeature@@QEAA@H@Z
    MCAPI explicit HugeMushroomFeature(int forcedType);

    // symbol: ?placeFixed@HugeMushroomFeature@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI bool placeFixed(class BlockSource& region, class BlockPos const& pos, int mushroomType, int height) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSurvive@HugeMushroomFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _canSurvive(class Block const& belowBlock) const;

    // NOLINTEND
};
