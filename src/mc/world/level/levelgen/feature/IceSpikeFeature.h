#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IceSpikeFeature : public ::Feature {
public:
    // prevent constructor by default
    IceSpikeFeature& operator=(IceSpikeFeature const&);
    IceSpikeFeature(IceSpikeFeature const&);
    IceSpikeFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 3, symbol: ?place@IceSpikeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidPlaceBlock@IceSpikeFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isValidPlaceBlock(class Block const&) const;

    // NOLINTEND
};
