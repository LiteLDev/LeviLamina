#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class AbilitiesLayer : ushort {
    CustomCache = 0x0,
    Base        = 0x1,
    Spectator   = 0x2,
    Commands    = 0x3,
    Editor      = 0x4,
    Count       = 0x5,
};
