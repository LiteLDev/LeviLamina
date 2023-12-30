#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerRespawnBlockRadiusRandomizer {
public:
    // prevent constructor by default
    PlayerRespawnBlockRadiusRandomizer& operator=(PlayerRespawnBlockRadiusRandomizer const&);
    PlayerRespawnBlockRadiusRandomizer(PlayerRespawnBlockRadiusRandomizer const&);
    PlayerRespawnBlockRadiusRandomizer();

public:
    // NOLINTBEGIN
    // symbol: ?getNextPosition@PlayerRespawnBlockRadiusRandomizer@@QEAA_NAEAVVec3@@_N@Z
    MCAPI bool getNextPosition(class Vec3& outOffset, bool confineToCircle);

    // symbol: ?init@PlayerRespawnBlockRadiusRandomizer@@QEAAXIAEAVRandom@@@Z
    MCAPI void init(uint spawnRadius, class Random& random);

    // NOLINTEND
};
