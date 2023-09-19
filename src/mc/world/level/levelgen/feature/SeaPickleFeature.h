#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaPickleFeature : public ::Feature {
public:
    // prevent constructor by default
    SeaPickleFeature& operator=(SeaPickleFeature const&);
    SeaPickleFeature(SeaPickleFeature const&);
    SeaPickleFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@SeaPickleFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
