#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace gametest {

enum class GameTestErrorType : int {
    Unknown                      = 0,
    Waiting                      = 1,
    ExhaustedAttempts            = 2,
    AssertAtPosition             = 3,
    MethodNotImplemented         = 4,
    ExecutionTimeout             = 5,
    LevelStateModificationFailed = 6,
    FailConditionsMet            = 7,
    Assert                       = 8,
    SimulatedPlayerOutOfBounds   = 9,
};

}
