#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerIsSleepingFlag {

public:
    // prevent constructor by default
    PlayerIsSleepingFlag& operator=(PlayerIsSleepingFlag const&) = delete;
    PlayerIsSleepingFlag(PlayerIsSleepingFlag const&)            = delete;
    PlayerIsSleepingFlag()                                       = delete;
};
