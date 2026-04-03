#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ActorResetRule : uchar {
    Default        = 0,
    LoadedFromSave = 1,
    Respawn        = 2,
};
