#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndGatewayFeature : public ::Feature {
public:
    // prevent constructor by default
    EndGatewayFeature& operator=(EndGatewayFeature const&);
    EndGatewayFeature(EndGatewayFeature const&);
    EndGatewayFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1EndGatewayFeature@@UEAA@XZ
    virtual ~EndGatewayFeature();

    // vIndex: 3, symbol: ?place@EndGatewayFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // NOLINTEND
};
