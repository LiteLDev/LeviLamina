#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BlueIceFeature : public ::Feature {
public:
    // prevent constructor by default
    BlueIceFeature& operator=(BlueIceFeature const&);
    BlueIceFeature(BlueIceFeature const&);
    BlueIceFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BlueIceFeature@@UEAA@XZ
    virtual ~BlueIceFeature() = default;

    // vIndex: 3, symbol: ?place@BlueIceFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
