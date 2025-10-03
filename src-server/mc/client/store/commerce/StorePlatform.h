#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class StorePlatform : int {
    Unknown         = 0,
    Windows         = 1,
    XboxOneLegacy   = 2,
    AppleStore      = 3,
    GooglePlay      = 4,
    Amazon          = 5,
    Oculus          = 6,
    OneStore        = 7,
    External        = 8,
    Switch          = 9,
    PlayStation     = 10,
    WindowsOneStore = 11,
    PlatformCount   = 12,
};
