#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class PinkPetalsFeature : public ::Feature {
public:
    // prevent constructor by default
    PinkPetalsFeature& operator=(PinkPetalsFeature const&);
    PinkPetalsFeature(PinkPetalsFeature const&);
    PinkPetalsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1PinkPetalsFeature@@UEAA@XZ
    virtual ~PinkPetalsFeature() = default;

    // vIndex: 3, symbol: ?place@PinkPetalsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND
};
