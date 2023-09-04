#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class HugeFungusFeature : public ::Feature {
public:
    // prevent constructor by default
    HugeFungusFeature& operator=(HugeFungusFeature const&) = delete;
    HugeFungusFeature(HugeFungusFeature const&)            = delete;
    HugeFungusFeature()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@HugeFungusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1HugeFungusFeature@@UEAA@XZ
    MCVAPI ~HugeFungusFeature();

    // symbol: ??0HugeFungusFeature@@QEAA@_N@Z
    MCAPI HugeFungusFeature(bool);

    // NOLINTEND
};
