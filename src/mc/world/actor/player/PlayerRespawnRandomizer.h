#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerRespawnRandomizer {
public:
    // prevent constructor by default
    PlayerRespawnRandomizer& operator=(PlayerRespawnRandomizer const&);
    PlayerRespawnRandomizer(PlayerRespawnRandomizer const&);
    PlayerRespawnRandomizer();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerRespawnRandomizer();

    // NOLINTEND
};
