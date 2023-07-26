#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStartLeaveGameEvent {

public:
    // prevent constructor by default
    LevelStartLeaveGameEvent& operator=(LevelStartLeaveGameEvent const&) = delete;
    LevelStartLeaveGameEvent(LevelStartLeaveGameEvent const&)            = delete;
    LevelStartLeaveGameEvent()                                           = delete;
};
