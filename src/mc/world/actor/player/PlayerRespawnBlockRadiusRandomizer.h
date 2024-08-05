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
    MCAPI bool getNextPosition(class Vec3& outOffset, bool confineToCircle);

    MCAPI void init(uint spawnRadius, class Random& random);

    // NOLINTEND
};
