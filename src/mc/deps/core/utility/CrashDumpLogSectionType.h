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
    FileEvent    = 7,
    FirstAsserts = 8,
    LastAsserts  = 9,
    Count        = 10,
};
