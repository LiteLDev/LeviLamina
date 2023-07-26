#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {

public:
    // prevent constructor by default
    PlayerRespawnTelemetryData& operator=(PlayerRespawnTelemetryData const&) = delete;
    PlayerRespawnTelemetryData(PlayerRespawnTelemetryData const&)            = delete;
    PlayerRespawnTelemetryData()                                             = delete;

public:
    /**
     * @symbol ?WriteEventData\@PlayerRespawnTelemetryData\@\@QEBAXAEAVEvent\@Events\@Social\@\@\@Z
     */
    MCAPI void WriteEventData(class Social::Events::Event&) const; // NOLINT

    // private:

private:
    /**
     * @symbol
     * ?mEventName\@PlayerRespawnTelemetryData\@\@0V?$basic_string\@DU?$char_traits\@D\@std\@\@V?$allocator\@D\@2\@\@std\@\@B
     */
    MCAPI static std::string const mEventName; // NOLINT
};
