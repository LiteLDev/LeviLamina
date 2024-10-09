#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerIsSleepingFlag {
public:
    // prevent constructor by default
    PlayerIsSleepingFlag& operator=(PlayerIsSleepingFlag const&);
    PlayerIsSleepingFlag(PlayerIsSleepingFlag const&);
    PlayerIsSleepingFlag();
};
