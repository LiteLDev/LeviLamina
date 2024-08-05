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

public:
    // NOLINTBEGIN
    MCAPI PlayerRespawnTelemetryData();

    MCAPI void WriteEventData(class Social::Events::Event& event) const;

    MCAPI void setChangedDimension(bool changed);

    MCAPI void setJumpDistance(double blockDistance);

    MCAPI void setLongJumpCount(uint jumps);

    MCAPI void setPositionSourceType(uint spawnPositionSource);

    MCAPI void setSearchTime(double seconds);

    MCAPI void setShortJumpCount(uint jumps);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    MCAPI static std::string const mEventName;

    // NOLINTEND
};
