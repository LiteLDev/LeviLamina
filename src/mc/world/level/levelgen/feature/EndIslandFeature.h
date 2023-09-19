#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndIslandFeature : public ::Feature {
public:
    // prevent constructor by default
    EndIslandFeature& operator=(EndIslandFeature const&);
    EndIslandFeature(EndIslandFeature const&);
    EndIslandFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@EndIslandFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1EndIslandFeature@@UEAA@XZ
    MCVAPI ~EndIslandFeature();

    // NOLINTEND
};
