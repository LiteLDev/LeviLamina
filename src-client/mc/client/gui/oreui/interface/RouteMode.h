#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace OreUI {

enum class RouteMode : int {
    // bitfield representation
    None                = 0,
    GrabMouse           = 1 << 0,
    Overlay             = 1 << 1,
    PassInputToGameplay = 1 << 2,
    Editor              = 1 << 3,
    NoLeaveDelay        = 1 << 4,
    GameplayGridGamepad = 1 << 5,
};

}
