#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct LevelBroadcastEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELBROADCASTEVENT
public:
    LevelBroadcastEvent& operator=(LevelBroadcastEvent const&) = delete;
    LevelBroadcastEvent(LevelBroadcastEvent const&)            = delete;
    LevelBroadcastEvent()                                      = delete;
#endif

public:
};
