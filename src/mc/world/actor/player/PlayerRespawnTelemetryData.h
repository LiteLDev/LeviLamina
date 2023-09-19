#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
namespace Social::Events { class Event; }
// clang-format on

class PlayerRespawnTelemetryData {
public:
    // prevent constructor by default
    PlayerRespawnTelemetryData& operator=(PlayerRespawnTelemetryData const&);
    PlayerRespawnTelemetryData(PlayerRespawnTelemetryData const&);
    PlayerRespawnTelemetryData();

public:
    // NOLINTBEGIN
    // symbol: ?WriteEventData@PlayerRespawnTelemetryData@@QEBAXAEAVEvent@Events@Social@@@Z
    MCAPI void WriteEventData(class Social::Events::Event&) const;

    // NOLINTEND

private:
    // NOLINTBEGIN
    // symbol: ?mEventName@PlayerRespawnTelemetryData@@0V?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@B
    MCAPI static std::string const mEventName;

    // NOLINTEND

    // member accessor
public:
    // NOLINTBEGIN
    auto& $mEventName() { return mEventName; }

    // NOLINTEND
};
