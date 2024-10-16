#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

class CrashTelemetryProcessor {
public:
    // prevent constructor by default
    CrashTelemetryProcessor& operator=(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor(CrashTelemetryProcessor const&);
    CrashTelemetryProcessor();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~CrashTelemetryProcessor() = default;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** vftable();

    // NOLINTEND
};

}; // namespace Bedrock
