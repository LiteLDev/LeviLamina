#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {
public:
    // prevent constructor by default
    TelemetryHeartbeat& operator=(TelemetryHeartbeat const&);
    TelemetryHeartbeat(TelemetryHeartbeat const&);
    TelemetryHeartbeat();

public:
    // NOLINTBEGIN
    MCAPI void antiIdleAction();

    MCAPI void beat();

    MCAPI bool isPlayerIdle();

    // NOLINTEND
};

}; // namespace Social::Events
