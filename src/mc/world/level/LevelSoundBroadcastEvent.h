#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelSoundBroadcastEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<4, 4>  mUnk79bcb1;
    ::ll::UntypedStorage<4, 12> mUnk60632c;
    ::ll::UntypedStorage<4, 4>  mUnk4f63c8;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelSoundBroadcastEvent& operator=(LevelSoundBroadcastEvent const&);
    LevelSoundBroadcastEvent(LevelSoundBroadcastEvent const&);
    LevelSoundBroadcastEvent();
};
