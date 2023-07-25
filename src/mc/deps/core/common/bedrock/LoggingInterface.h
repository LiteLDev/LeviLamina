#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock::Http {

class LoggingInterface {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_HTTP_LOGGINGINTERFACE
public:
    LoggingInterface& operator=(LoggingInterface const&) = delete;
    LoggingInterface(LoggingInterface const&)            = delete;
    LoggingInterface()                                   = delete;
#endif

public:
};

}; // namespace Bedrock::Http
