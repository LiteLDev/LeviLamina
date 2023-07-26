#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelBroadcastEvent {

public:
    // prevent constructor by default
    LevelBroadcastEvent& operator=(LevelBroadcastEvent const&) = delete;
    LevelBroadcastEvent(LevelBroadcastEvent const&)            = delete;
    LevelBroadcastEvent()                                      = delete;
};
