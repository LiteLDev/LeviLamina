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
    // symbol: ?antiIdleAction@TelemetryHeartbeat@Events@Social@@QEAAXXZ
    MCAPI void antiIdleAction();

    // symbol: ?beat@TelemetryHeartbeat@Events@Social@@QEAAXXZ
    MCAPI void beat();

    // symbol: ?isPlayerIdle@TelemetryHeartbeat@Events@Social@@QEAA_NXZ
    MCAPI bool isPlayerIdle();

    // NOLINTEND
};

}; // namespace Social::Events
