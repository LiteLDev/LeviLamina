#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class HoloUIToPoseSource : int {
    NonVR         = 0,
    MainMenu      = 1,
    LivingRoom    = 2,
    VRTransition  = 3,
    VRHeadlocked  = 4,
    VRFloatingHUD = 5,
    VRHandheldHUD = 6,
};
