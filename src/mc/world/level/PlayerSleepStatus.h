#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSleepStatus {
public:
    // prevent constructor by default
    PlayerSleepStatus& operator=(PlayerSleepStatus const&);
    PlayerSleepStatus(PlayerSleepStatus const&);
    PlayerSleepStatus();
};
