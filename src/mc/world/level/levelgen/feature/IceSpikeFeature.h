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
    // vIndex: 0, symbol: __gen_??1IceSpikeFeature@@UEAA@XZ
    virtual ~IceSpikeFeature() = default;

    // vIndex: 3, symbol: ?place@IceSpikeFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidPlaceBlock@IceSpikeFeature@@AEBA_NAEBVBlock@@@Z
    MCAPI bool _isValidPlaceBlock(class Block const& block) const;

    // NOLINTEND
};
