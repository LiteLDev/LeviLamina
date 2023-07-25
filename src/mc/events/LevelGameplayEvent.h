#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct LevelGameplayEvent {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LEVELGAMEPLAYEVENT
public:
    LevelGameplayEvent& operator=(LevelGameplayEvent const&) = delete;
    LevelGameplayEvent(LevelGameplayEvent const&)            = delete;
    LevelGameplayEvent()                                     = delete;
#endif

public:
};
