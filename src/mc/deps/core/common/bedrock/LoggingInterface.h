#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LoggingInterface {

public:
    // prevent constructor by default
    LoggingInterface& operator=(LoggingInterface const&) = delete;
    LoggingInterface(LoggingInterface const&)            = delete;
    LoggingInterface()                                   = delete;
};

}; // namespace Bedrock::Http
