#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class CommandSelectionOrder : int32_t {
    Sorted        = 0x0,
    InverseSorted = 0x1,
    Random        = 0x2,
};
