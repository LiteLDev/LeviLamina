#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/world/level/levelgen/feature/Feature.h"

class EndPodiumFeature : public ::Feature {
public:
    // prevent constructor by default
    EndPodiumFeature& operator=(EndPodiumFeature const&);
    EndPodiumFeature(EndPodiumFeature const&);
    EndPodiumFeature();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~EndPodiumFeature();

    // vIndex: 3
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI explicit EndPodiumFeature(bool active);

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void* ctor$(bool active);

    MCAPI void dtor$();

    MCAPI bool place$(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    MCAPI static float const& CORNER_ROUNDING();

    MCAPI static class BlockPos const& END_PODIUM_CHUNK_POSITION();

    MCAPI static class BlockPos const& END_PODIUM_LOCATION();

    MCAPI static int const& PODIUM_PILLAR_HEIGHT();

    MCAPI static int const& PODIUM_RADIUS();

    MCAPI static int const& RIM_RADIUS();

    // NOLINTEND
};
