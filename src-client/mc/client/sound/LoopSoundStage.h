#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class LoopSoundStage : int {
    Stopped    = 0,
    Start      = 1,
    Play       = 2,
    Transition = 3,
    Terminate  = 4,
};
