#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class DeltaFeature : public ::Feature {
public:
    // prevent constructor by default
    DeltaFeature& operator=(DeltaFeature const&);
    DeltaFeature(DeltaFeature const&);
    DeltaFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~DeltaFeature() = default;

    // vIndex: 3, symbol: ?place@DeltaFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource&, class BlockPos const&, class Random&) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_isValidPlacement@DeltaFeature@@AEBA_NAEAVBlockSource@@VBlockPos@@@Z
    MCAPI bool _isValidPlacement(class BlockSource&, class BlockPos) const;

    // NOLINTEND
};
