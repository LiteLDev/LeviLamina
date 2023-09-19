#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelBroadcastEvent {
public:
    // prevent constructor by default
    LevelBroadcastEvent& operator=(LevelBroadcastEvent const&);
    LevelBroadcastEvent(LevelBroadcastEvent const&);
    LevelBroadcastEvent();
};
