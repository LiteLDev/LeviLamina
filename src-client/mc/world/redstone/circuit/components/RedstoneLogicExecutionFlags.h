#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class RedstoneLogicExecutionFlags : uchar {
    // bitfield representation
    None               = 0,
    CacheValues        = 1 << 0,
    CheckLock          = 1 << 1,
    EvaluateAsProducer = 1 << 2,
    EvaluateAsConsumer = 1 << 3,
};
