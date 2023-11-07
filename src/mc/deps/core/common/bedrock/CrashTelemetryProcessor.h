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
    // vIndex: 0, symbol: __gen_??1CrashTelemetryProcessor@Bedrock@@UEAA@XZ
    virtual ~CrashTelemetryProcessor() = default;

    // NOLINTEND
};

}; // namespace Bedrock
