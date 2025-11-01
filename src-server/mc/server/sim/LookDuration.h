#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace sim {

enum class LookDuration : uchar {
    Instant = 0,
    Continuous = 1,
    UntilMove = 2,
};

}
