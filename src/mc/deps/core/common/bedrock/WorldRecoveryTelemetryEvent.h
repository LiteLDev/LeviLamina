#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Bedrock {

struct WorldRecoveryTelemetryEvent {

public:
    // prevent constructor by default
    WorldRecoveryTelemetryEvent& operator=(WorldRecoveryTelemetryEvent const&) = delete;
    WorldRecoveryTelemetryEvent(WorldRecoveryTelemetryEvent const&)            = delete;
    WorldRecoveryTelemetryEvent()                                              = delete;
};

}; // namespace Bedrock
