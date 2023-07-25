#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERRESPAWNTELEMETRYDATA
public:
    PlayerRespawnTelemetryData& operator=(PlayerRespawnTelemetryData const&) = delete;
    PlayerRespawnTelemetryData(PlayerRespawnTelemetryData const&)            = delete;
    PlayerRespawnTelemetryData()                                             = delete;
#endif

public:
    /**
     * @symbol ?WriteEventData\@PlayerRespawnTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event&) const;

    // private:

private:
    /**
     * @symbol
     * ?mEventName\@PlayerRespawnTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName;
};
