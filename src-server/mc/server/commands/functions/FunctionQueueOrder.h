#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class FunctionQueueOrder : uchar {
    AfterCaller = 0,
    NextToExecute = 1,
};
