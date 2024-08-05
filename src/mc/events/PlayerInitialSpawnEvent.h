#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerInitialSpawnEvent {
public:
    // prevent constructor by default
    PlayerInitialSpawnEvent& operator=(PlayerInitialSpawnEvent const&);
    PlayerInitialSpawnEvent(PlayerInitialSpawnEvent const&);
    PlayerInitialSpawnEvent();

public:
    // NOLINTBEGIN
    MCAPI ~PlayerInitialSpawnEvent();

    // NOLINTEND
};
