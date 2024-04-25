#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class MeadowFlowerFeature : public ::Feature {
public:
    // prevent constructor by default
    MeadowFlowerFeature& operator=(MeadowFlowerFeature const&);
    MeadowFlowerFeature(MeadowFlowerFeature const&);
    MeadowFlowerFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1MeadowFlowerFeature@@UEAA@XZ
    virtual ~MeadowFlowerFeature() = default;

    // vIndex: 3, symbol: ?place@MeadowFlowerFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?getRandomArrayIndex@MeadowFlowerFeature@@AEBAHAEBVBlockPos@@_KM@Z
    MCAPI int getRandomArrayIndex(class BlockPos const& pos, uint64 length, float scale) const;

    // NOLINTEND
};
