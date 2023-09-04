#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class BuildPlatform : int {
    Unknown      = -1,
    Android      = 0x1,
    iOS          = 0x2,
    OSX          = 0x3,
    Amazon       = 0x4,
    GearVR       = 0x5,
    UWP          = 0x7,
    Win32        = 0x8,
    Dedicated    = 0x9,
    PS4          = 0xB,
    Nx           = 0xC,
    Xbox         = 0xD,
    WindowsPhone = 0xE,
    Linux        = 0xF,
};
