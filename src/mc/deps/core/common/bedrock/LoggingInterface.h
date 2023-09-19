#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LoggingInterface {
public:
    // prevent constructor by default
    LoggingInterface& operator=(LoggingInterface const&);
    LoggingInterface(LoggingInterface const&);
    LoggingInterface();
};

}; // namespace Bedrock::Http
