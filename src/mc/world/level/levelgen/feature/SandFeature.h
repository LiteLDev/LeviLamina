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
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~SandFeature() = default;

    // vIndex: 3, symbol: ?place@SandFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
