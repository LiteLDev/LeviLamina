#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RenderParam : int {
    Unknown          = -1,
    FrameAlpha       = 0,
    Bob              = 1,
    ModelScale       = 2,
    AnimTime         = 3,
    DeltaTime        = 4,
    KeyFrameLerpTime = 5,
    LifeTime         = 6,
    IsFirstPerson    = 7,
    NumRenderParams  = 8,
};
