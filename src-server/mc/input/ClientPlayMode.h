#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ClientPlayMode : uint {
    Normal = 0,
    Teaser = 1,
    Screen = 2,
    ViewerDeprecated = 3,
    RealityDeprecated = 4,
    PlacementDeprecated = 5,
    LivingRoomDeprecated = 6,
    ExitLevel = 7,
    ExitLevelLivingRoomDeprecated = 8,
    NumModes = 9,
};
