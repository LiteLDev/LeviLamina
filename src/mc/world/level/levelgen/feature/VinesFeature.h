#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class VinesFeature : public ::Feature {
public:
    // prevent constructor by default
    VinesFeature& operator=(VinesFeature const&);
    VinesFeature(VinesFeature const&);
    VinesFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1VinesFeature@@UEAA@XZ
    virtual ~VinesFeature() = default;

    // vIndex: 3, symbol: ?place@VinesFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
