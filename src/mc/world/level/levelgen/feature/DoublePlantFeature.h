#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/enums/DoublePlantType.h"
#include "mc/world/level/levelgen/feature/Feature.h"

class DoublePlantFeature : public ::Feature {
public:
    // prevent constructor by default
    DoublePlantFeature& operator=(DoublePlantFeature const&);
    DoublePlantFeature(DoublePlantFeature const&);
    DoublePlantFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DoublePlantFeature@@UEAA@XZ
    virtual ~DoublePlantFeature() = default;

    // vIndex: 3, symbol: ?place@DoublePlantFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // symbol: ?place@DoublePlantFeature@@QEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@W4DoublePlantType@@@Z
    MCAPI bool
    place(class BlockSource& region, class BlockPos const& pos, class Random& random, ::DoublePlantType plantType)
        const;

    // NOLINTEND
};
