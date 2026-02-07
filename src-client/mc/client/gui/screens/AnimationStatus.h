#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace ui {

enum class AnimationStatus : ushort {
    Running         = 0,
    Finished        = 1,
    FinishedRefresh = 2,
    Unknown         = 3,
};

}
