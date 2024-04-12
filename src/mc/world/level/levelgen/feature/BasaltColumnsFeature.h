#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class BasaltColumnsFeature : public ::Feature {
public:
    // prevent constructor by default
    BasaltColumnsFeature& operator=(BasaltColumnsFeature const&);
    BasaltColumnsFeature(BasaltColumnsFeature const&);
    BasaltColumnsFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __gen_??1BasaltColumnsFeature@@UEAA@XZ
    virtual ~BasaltColumnsFeature() = default;

    // vIndex: 3, symbol: ?place@BasaltColumnsFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?_findSurface@BasaltColumnsFeature@@AEBA?AV?$optional@VBlockPos@@@std@@AEAVBlockSource@@VBlockPos@@HH@Z
    MCAPI std::optional<class BlockPos>
          _findSurface(class BlockSource& region, class BlockPos cursor, int limit, int yDirection) const;

    // symbol: ?_placeColumnCluster@BasaltColumnsFeature@@AEBAXAEAVBlockSource@@VBlockPos@@HH@Z
    MCAPI void _placeColumnCluster(class BlockSource& region, class BlockPos origin, int columnHeight, int reach) const;

    // NOLINTEND
};
