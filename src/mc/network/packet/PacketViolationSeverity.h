#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class PacketViolationSeverity : int {
    Unknown               = 4294967295,
    Warning               = 0,
    FinalWarning          = 1,
    TerminatingConnection = 2,
};
