#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace cohtml {

enum class WorkExecutionMode : int {
    UntilQueueEmpty = 0,
    UntilQuit       = 1,
};

}
