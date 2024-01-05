#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DripleafFeature : public ::Feature {
public:
    // prevent constructor by default
    DripleafFeature& operator=(DripleafFeature const&);
    DripleafFeature(DripleafFeature const&);
    DripleafFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1DripleafFeature@@UEAA@XZ
    virtual ~DripleafFeature() = default;

    // vIndex: 3, symbol: ?place@DripleafFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_placeBigDripleaf@DripleafFeature@@CA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    MCAPI static bool _placeBigDripleaf(class BlockSource& region, class BlockPos const& pos, class Random& random);

    // NOLINTEND
};
