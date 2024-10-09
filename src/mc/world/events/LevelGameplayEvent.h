#pragma once

#include "mc/_HeaderOutputPredefine.h"

template <typename T0>
struct LevelGameplayEvent {
public:
    // prevent constructor by default
    LevelGameplayEvent& operator=(LevelGameplayEvent const&);
    LevelGameplayEvent(LevelGameplayEvent const&);
    LevelGameplayEvent();
};
