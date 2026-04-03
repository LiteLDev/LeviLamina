#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CrashDumpLogSectionType : int {
    Global       = 0,
    Event        = 1,
    KeyValue     = 2,
    Frame        = 3,
    GamePlay     = 4,
    Render       = 5,
    Player       = 6,
    FirstAsserts = 7,
    LastAsserts  = 8,
    Count        = 9,
};
