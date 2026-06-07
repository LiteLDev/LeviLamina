#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace PlayerTravelledEvent {

enum class TravelMethod : int {
    Unknown   = 4294967295,
    Walk      = 0,
    SwimWater = 1,
    Fall      = 2,
    Climb     = 3,
    SwimLava  = 4,
    Fly       = 5,
    Riding    = 6,
    Sneak     = 7,
    Sprint    = 8,
    Bounce    = 9,
    FrostWalk = 10,
    Teleport  = 11,
};

}
