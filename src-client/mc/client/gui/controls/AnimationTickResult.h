#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AnimationTickResult : int {
    Running           = 0,
    NewAnimationAdded = 1,
    FinishedRunning   = 2,
    FinishedRefresh   = 3,
};
