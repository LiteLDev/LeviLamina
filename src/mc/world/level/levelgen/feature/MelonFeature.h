#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MelonFeature : public ::Feature {
public:
    // prevent constructor by default
    MelonFeature& operator=(MelonFeature const&);
    MelonFeature(MelonFeature const&);
    MelonFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MelonFeature@@UEAA@XZ
    virtual ~MelonFeature() = default;

    // vIndex: 3, symbol: ?place@MelonFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
