#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSleepStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, int> mSleepingPlayerCount;
    ::ll::TypedStorage<4, 4, int> mRequiredSleepingPlayerCount;
    ::ll::TypedStorage<1, 1, bool> mAbleToSleep;
    // NOLINTEND

};
