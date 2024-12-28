#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelBroadcastEvent {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<2, 2>  mUnk736395;
    ::ll::UntypedStorage<4, 12> mUnk532b78;
    ::ll::UntypedStorage<4, 4>  mUnk6b1b48;
    // NOLINTEND

public:
    // prevent constructor by default
    LevelBroadcastEvent& operator=(LevelBroadcastEvent const&);
    LevelBroadcastEvent(LevelBroadcastEvent const&);
    LevelBroadcastEvent();
};
