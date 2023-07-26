#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelDayCycleEvent {

public:
    // prevent constructor by default
    LevelDayCycleEvent& operator=(LevelDayCycleEvent const&) = delete;
    LevelDayCycleEvent(LevelDayCycleEvent const&)            = delete;
    LevelDayCycleEvent()                                     = delete;
};
