#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LoopLifecycle : int {
    New = 0,
    Loading = 1,
    FadingIn = 2,
    Playing = 3,
    Terminate = 4,
    FadingOut = 5,
    Unregister = 6,
};
