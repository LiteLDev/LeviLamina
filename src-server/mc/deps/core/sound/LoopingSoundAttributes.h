#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/sound/LoopLifecycle.h"

struct LoopingSoundAttributes {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::TypedStorage<4, 4, float>           fadeInDuration;
    ::ll::TypedStorage<4, 4, float>           fadeOutDuration;
    ::ll::TypedStorage<1, 1, bool>            paused;
    ::ll::TypedStorage<4, 4, ::LoopLifecycle> stage;
    // NOLINTEND
};
