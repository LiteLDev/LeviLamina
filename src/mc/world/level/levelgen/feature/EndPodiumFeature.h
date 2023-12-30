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
    // vIndex: 0, symbol: ??1EndPodiumFeature@@UEAA@XZ
    virtual ~EndPodiumFeature();

    // vIndex: 3, symbol: ?place@EndPodiumFeature@@UEBA_NAEAVBlockSource@@AEBVBlockPos@@AEAVRandom@@@Z
    virtual bool place(class BlockSource& region, class BlockPos const& origin, class Random& random) const;

    // symbol: ??0EndPodiumFeature@@QEAA@_N@Z
    MCAPI explicit EndPodiumFeature(bool active);

    // symbol: ?CORNER_ROUNDING@EndPodiumFeature@@2MB
    MCAPI static float const CORNER_ROUNDING;

    // symbol: ?END_PODIUM_CHUNK_POSITION@EndPodiumFeature@@2VBlockPos@@B
    MCAPI static class BlockPos const END_PODIUM_CHUNK_POSITION;

    // symbol: ?END_PODIUM_LOCATION@EndPodiumFeature@@2VBlockPos@@B
    MCAPI static class BlockPos const END_PODIUM_LOCATION;

    // symbol: ?PODIUM_PILLAR_HEIGHT@EndPodiumFeature@@2HB
    MCAPI static int const PODIUM_PILLAR_HEIGHT;

    // symbol: ?PODIUM_RADIUS@EndPodiumFeature@@2HB
    MCAPI static int const PODIUM_RADIUS;

    // symbol: ?RIM_RADIUS@EndPodiumFeature@@2HB
    MCAPI static int const RIM_RADIUS;

    // NOLINTEND
};
