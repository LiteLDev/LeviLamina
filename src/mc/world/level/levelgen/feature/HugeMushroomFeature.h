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
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@HugeMushroomFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1HugeMushroomFeature@@UEAA@XZ
    MCVAPI ~HugeMushroomFeature();

    // symbol: ??0HugeMushroomFeature@@QEAA@H@Z
    MCAPI explicit HugeMushroomFeature(int);

    // symbol: ??0HugeMushroomFeature@@QEAA@XZ
    MCAPI HugeMushroomFeature();

    // symbol: ?placeFixed@HugeMushroomFeature@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@HH@Z
    MCAPI bool placeFixed(class BlockSource&, class BlockPos const&, int, int) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_canSurvive@HugeMushroomFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _canSurvive(class Block const&) const;

    // NOLINTEND
};
