#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SelectWorldResult : int {
    NewWorldCreated = 0,
    WorldSelected   = 1,
    RealmSelected   = 2,
    ScreenClosed    = 3,
    Error           = 4,
};
