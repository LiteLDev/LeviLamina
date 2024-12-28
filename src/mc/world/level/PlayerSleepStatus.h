#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct PlayerSleepStatus {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4> mUnkaa81cb;
    ::ll::UntypedStorage<4, 4> mUnk6509ca;
    ::ll::UntypedStorage<1, 1> mUnk4d4e0e;
    // NOLINTEND

public:
    // prevent constructor by default
    PlayerSleepStatus& operator=(PlayerSleepStatus const&);
    PlayerSleepStatus(PlayerSleepStatus const&);
    PlayerSleepStatus();
};
