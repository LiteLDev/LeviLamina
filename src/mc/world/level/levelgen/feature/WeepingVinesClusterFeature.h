#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class WeepingVinesClusterFeature : public ::Feature {
public:
    // prevent constructor by default
    WeepingVinesClusterFeature& operator=(WeepingVinesClusterFeature const&);
    WeepingVinesClusterFeature(WeepingVinesClusterFeature const&);
    WeepingVinesClusterFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~WeepingVinesClusterFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI bool _isInvalidPlacementLocation(class BlockSource& region, class BlockPos const& pos) const;

    MCAPI void _placeRoofNetherWart(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    MCAPI void _placeRoofWeepingVines(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
