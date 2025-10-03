#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class QueueRequestResult : uchar {
    Executed = 0,
    Queued   = 1,
};
