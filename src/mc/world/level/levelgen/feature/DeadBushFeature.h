#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DeadBushFeature : public ::Feature {
public:
    // prevent constructor by default
    DeadBushFeature& operator=(DeadBushFeature const&);
    DeadBushFeature(DeadBushFeature const&);
    DeadBushFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DeadBushFeature@@UEAA@XZ
    virtual ~DeadBushFeature() = default;

    // vIndex: 3, symbol: ?place@DeadBushFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
