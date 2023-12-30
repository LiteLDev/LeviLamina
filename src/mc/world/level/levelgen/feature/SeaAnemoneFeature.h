#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SeaAnemoneFeature : public ::Feature {
public:
    // prevent constructor by default
    SeaAnemoneFeature& operator=(SeaAnemoneFeature const&);
    SeaAnemoneFeature(SeaAnemoneFeature const&);
    SeaAnemoneFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SeaAnemoneFeature@@UEAA@XZ
    virtual ~SeaAnemoneFeature() = default;

    // vIndex: 3, symbol: ?place@SeaAnemoneFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
