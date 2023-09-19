#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashTelemetryProcessor {
public:
    // prevent constructor by default
    CrashTelemetryProcessor& operator=(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor();
};

}; // namespace Bedrock
