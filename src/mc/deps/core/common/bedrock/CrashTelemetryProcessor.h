#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashTelemetryProcessor {

public:
    // prevent constructor by default
    CrashTelemetryProcessor& operator=(CrashTelemetryProcessor const&) = delete;
    CrashTelemetryProcessor(CrashTelemetryProcessor const&)            = delete;
    CrashTelemetryProcessor()                                          = delete;
};

}; // namespace Bedrock
