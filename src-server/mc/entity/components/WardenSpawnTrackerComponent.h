#pragma once

#include "mc/_HeaderOutputPredefine.h"

class WardenSpawnTrackerComponent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mThreatLevel;
    ::ll::TypedStorage<4, 4, int> mThreatLevelIncreaseCooldown;
    ::ll::TypedStorage<4, 4, int> mThreatLevelDecreaseTimer;
    // NOLINTEND

public:
    // static variables
    // NOLINTBEGIN
    MCAPI static int const& MAX_THREAT_LEVEL();
    // NOLINTEND
};
