#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Lockless {

enum class MemoryOrder : int {
    Relaxed = 0,
    Acquire = 1,
    Release = 2,
    AcqRel  = 3,
    SeqCst  = 4,
    Sync    = 4,
};

}
