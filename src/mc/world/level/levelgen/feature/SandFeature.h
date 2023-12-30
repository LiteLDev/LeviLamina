#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class SandFeature : public ::Feature {
public:
    // prevent constructor by default
    SandFeature& operator=(SandFeature const&);
    SandFeature(SandFeature const&);
    SandFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1SandFeature@@UEAA@XZ
    virtual ~SandFeature() = default;

    // vIndex: 3, symbol: ?place@SandFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
