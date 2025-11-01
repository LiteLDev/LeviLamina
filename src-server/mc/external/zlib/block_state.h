#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class block_state : int {
    NeedMore = 0,
    BlockDone = 1,
    FinishStarted = 2,
    FinishDone = 3,
};
