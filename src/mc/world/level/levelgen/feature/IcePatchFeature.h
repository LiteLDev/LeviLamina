#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class IcePatchFeature : public ::Feature {
public:
    // prevent constructor by default
    IcePatchFeature& operator=(IcePatchFeature const&);
    IcePatchFeature(IcePatchFeature const&);
    IcePatchFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~IcePatchFeature();

    // vIndex: 3, symbol: ?place@IcePatchFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
