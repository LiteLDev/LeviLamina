#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace Social::Events {

class TelemetryHeartbeat {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SOCIAL_EVENTS_TELEMETRYHEARTBEAT
public:
    TelemetryHeartbeat& operator=(TelemetryHeartbeat const&) = delete;
    TelemetryHeartbeat(TelemetryHeartbeat const&)            = delete;
    TelemetryHeartbeat()                                     = delete;
#endif

public:
    /**
     * @symbol ?antiIdleAction\@TelemetryHeartbeat\@Events\@Social\@\@QEAAXXZ
     */
    MCAPI void antiIdleAction();
    /**
     * @symbol ?beat\@TelemetryHeartbeat\@Events\@Social\@\@QEAAXXZ
     */
    MCAPI void beat();
    /**
     * @symbol ?isPlayerIdle\@TelemetryHeartbeat\@Events\@Social\@\@QEAA_NXZ
     */
    MCAPI bool isPlayerIdle();
};

}; // namespace Social::Events
