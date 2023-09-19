#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelStartLeaveGameEvent {
public:
    // prevent constructor by default
    LevelStartLeaveGameEvent& operator=(LevelStartLeaveGameEvent const&);
    LevelStartLeaveGameEvent(LevelStartLeaveGameEvent const&);
    LevelStartLeaveGameEvent();
};
