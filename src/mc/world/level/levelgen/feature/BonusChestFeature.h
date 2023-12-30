#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BonusChestFeature : public ::Feature {
public:
    // prevent constructor by default
    BonusChestFeature& operator=(BonusChestFeature const&);
    BonusChestFeature(BonusChestFeature const&);
    BonusChestFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1BonusChestFeature@@UEAA@XZ
    virtual ~BonusChestFeature();

    // vIndex: 3, symbol: ?place@BonusChestFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_place@BonusChestFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI bool _place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
