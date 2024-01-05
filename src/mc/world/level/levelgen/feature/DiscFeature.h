#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DiscFeature : public ::Feature {
public:
    // prevent constructor by default
    DiscFeature& operator=(DiscFeature const&);
    DiscFeature(DiscFeature const&);
    DiscFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DiscFeature@@UEAA@XZ
    virtual ~DiscFeature() = default;

    // vIndex: 3, symbol: ?place@DiscFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
