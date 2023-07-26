#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSleepStatus {

public:
    // prevent constructor by default
    PlayerSleepStatus& operator=(PlayerSleepStatus const&) = delete;
    PlayerSleepStatus(PlayerSleepStatus const&)            = delete;
    PlayerSleepStatus()                                    = delete;
};
