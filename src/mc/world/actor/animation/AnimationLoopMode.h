#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AnimationLoopMode : int {
    StopApplyingAnimationWhenFinished = 0,
    Loop                              = 1,
    HoldOnLastFrame                   = 2,
};
