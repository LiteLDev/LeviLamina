#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class TwistingVinesClusterFeature : public ::Feature {
public:
    // prevent constructor by default
    TwistingVinesClusterFeature& operator=(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature(TwistingVinesClusterFeature const&);
    TwistingVinesClusterFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~TwistingVinesClusterFeature() = default;

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI void _placeVineString(
        class BlockSource&    region,
        class Random&         random,
        class BlockPos const& vinePos,
        int                   vineHeight,
        int                   minAge,
        int                   maxAge
    ) const;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& pos, class Random& random) const;

    // NOLINTEND
};
