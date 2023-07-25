#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashTelemetryProcessor {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEDROCK_CRASHTELEMETRYPROCESSOR
public:
    CrashTelemetryProcessor& operator=(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&)            = delete;
    CrashTelemetryProcessor()                                          = delete;
#endif

public:
};

}; // namespace Bedrock
