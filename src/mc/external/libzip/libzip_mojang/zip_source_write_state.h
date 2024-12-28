#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class zip_source_write_state : int {
    Closed  = 0,
    Open    = 1,
    Failed  = 2,
    Removed = 3,
};
