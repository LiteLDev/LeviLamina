#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BonusChestFeature : public ::Feature {
public:
    // prevent constructor by default
    BonusChestFeature& operator=(BonusChestFeature const&) = delete;
    BonusChestFeature(BonusChestFeature const&)            = delete;
    BonusChestFeature()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@BonusChestFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1BonusChestFeature@@UEAA@XZ
    MCVAPI ~BonusChestFeature();

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_place@BonusChestFeature@@AEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI bool _place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
