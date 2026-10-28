#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class SystemPerfHintType : uchar {
    None                = 0,
    SkipIfEmpty         = 1,
    SkipIfEmptyAndClear = 2,
};
