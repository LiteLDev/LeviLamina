#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BuildPlatform : int {
    Google = 1,
    IOS = 2,
    Osx = 3,
    Amazon = 4,
    GearVRDeprecated = 5,
    Uwp = 7,
    Win32 = 8,
    Dedicated = 9,
    TvOSDeprecated = 10,
    Sony = 11,
    Nx = 12,
    Xbox = 13,
    WindowsPhoneDeprecated = 14,
    Linux = 15,
    Unknown = -1,
};
