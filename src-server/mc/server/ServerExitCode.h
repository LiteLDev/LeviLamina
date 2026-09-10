#pragma once

#include "mc/_HeaderOutputPredefine.h"

enum class ServerExitCode : int {
    Success                      = 0,
    PortOccupied                 = 1,
    InvalidSettings              = 2,
    MissingDependency            = 3,
    RuntimeError                 = 4,
    DocumentationGenerationError = 5,
    ScriptWatchdogTermination    = 6,
    ResourceProcessingError      = 7,
};
