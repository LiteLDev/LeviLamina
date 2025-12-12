#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketViolationResponse : int {
    None                = 0,
    Warning             = 1,
    FinalWarning        = 2,
    TerminateConnection = 3,
};
