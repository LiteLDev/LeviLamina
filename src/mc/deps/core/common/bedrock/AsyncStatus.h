#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Threading {

enum class AsyncStatus {
    Started   = 0,
    Completed = 1,
    Canceled  = 2,
    Error     = 3,
};
};
