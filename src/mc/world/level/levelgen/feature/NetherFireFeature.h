#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherFireFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherFireFeature& operator=(NetherFireFeature const&) = delete;
    NetherFireFeature(NetherFireFeature const&)            = delete;
    NetherFireFeature()                                    = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@NetherFireFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // symbol: ??1NetherFireFeature@@UEAA@XZ
    MCVAPI ~NetherFireFeature();

    // NOLINTEND
};
