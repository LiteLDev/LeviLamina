#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class NetherFireFeature : public ::Feature {
public:
    // prevent constructor by default
    NetherFireFeature& operator=(NetherFireFeature const&);
    NetherFireFeature(NetherFireFeature const&);
    NetherFireFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1NetherFireFeature@@UEAA@XZ
    virtual ~NetherFireFeature();

    // vIndex: 3, symbol: ?place@NetherFireFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
