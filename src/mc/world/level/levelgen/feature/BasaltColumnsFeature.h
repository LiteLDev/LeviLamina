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
    // vIndex: 0
    virtual ~BasaltColumnsFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI std::optional<class BlockPos>
          _findSurface(class BlockSource& region, class BlockPos cursor, int limit, int yDirection) const;

    MCAPI void _placeColumnCluster(class BlockSource& region, class BlockPos origin, int columnHeight, int reach) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
