#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

enum class GameTestErrorType : int {
    Unknown                      = 0x0,
    Waiting                      = 0x1,
    ExhaustedAttempts            = 0x2,
    AssertAtPosition             = 0x3,
    MethodNotImplemented         = 0x4,
    ExecutionTimeout             = 0x5,
    LevelStateModificationFailed = 0x6,
    FailConditionsMet            = 0x7,
    Assert                       = 0x8,
    SimulatedPlayerOutOfBounds   = 0x9,
};
};
