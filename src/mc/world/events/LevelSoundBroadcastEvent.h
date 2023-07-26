#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelSoundBroadcastEvent {

public:
    // prevent constructor by default
    LevelSoundBroadcastEvent& operator=(LevelSoundBroadcastEvent const&) = delete;
    LevelSoundBroadcastEvent(LevelSoundBroadcastEvent const&)            = delete;
    LevelSoundBroadcastEvent()                                           = delete;
};
