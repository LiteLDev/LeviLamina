#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class JSGCPhaseEnum : int {
    None = 0,
    Decref = 1,
    RemoveCycles = 2,
};
