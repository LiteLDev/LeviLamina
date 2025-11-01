#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FilterResult : int {
    ShowPrioritized = 0,
    Show = 1,
    Disable = 2,
    Hide = 3,
};
