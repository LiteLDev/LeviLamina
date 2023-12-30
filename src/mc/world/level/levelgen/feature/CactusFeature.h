#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class CactusFeature : public ::Feature {
public:
    // prevent constructor by default
    CactusFeature& operator=(CactusFeature const&);
    CactusFeature(CactusFeature const&);
    CactusFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1CactusFeature@@UEAA@XZ
    virtual ~CactusFeature() = default;

    // vIndex: 3, symbol: ?place@CactusFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
