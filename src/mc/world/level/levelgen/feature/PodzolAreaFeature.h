#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class PodzolAreaFeature : public ::Feature {
public:
    // prevent constructor by default
    PodzolAreaFeature& operator=(PodzolAreaFeature const&);
    PodzolAreaFeature(PodzolAreaFeature const&);
    PodzolAreaFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~PodzolAreaFeature();

    // vIndex: 3, symbol: ?place@PodzolAreaFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
