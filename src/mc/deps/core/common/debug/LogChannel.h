#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace BedrockLog {

enum class LogChannel {
    Global     = 0x0,
    ClientSide = 0x1,
    ServerSide = 0x2,
    Count      = 0x3,
};
};
