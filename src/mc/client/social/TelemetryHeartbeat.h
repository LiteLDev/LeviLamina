#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {

public:
    // prevent constructor by default
    TelemetryHeartbeat& operator=(TelemetryHeartbeat const&) = delete;
    TelemetryHeartbeat(TelemetryHeartbeat const&)            = delete;
    TelemetryHeartbeat()                                     = delete;

public:
    /**
     * @symbol ?antiIdleAction\@TelemetryHeartbeat\@Events\@Social\@\@QEAAXXZ
     */
    MCAPI void antiIdleAction(); // NOLINT
    /**
     * @symbol ?beat\@TelemetryHeartbeat\@Events\@Social\@\@QEAAXXZ
     */
    MCAPI void beat(); // NOLINT
    /**
     * @symbol ?isPlayerIdle\@TelemetryHeartbeat\@Events\@Social\@\@QEAA_NXZ
     */
    MCAPI bool isPlayerIdle(); // NOLINT
};

}; // namespace Social::Events
