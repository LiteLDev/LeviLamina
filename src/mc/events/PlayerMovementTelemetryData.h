#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementTelemetryData {

public:
    // prevent constructor by default
    PlayerMovementTelemetryData& operator=(PlayerMovementTelemetryData const&) = delete;
    PlayerMovementTelemetryData(PlayerMovementTelemetryData const&)            = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0PlayerMovementTelemetryData\@\@QEAA\@XZ
     */
    MCAPI PlayerMovementTelemetryData();
    /**
     * @symbol ?getAverage\@PlayerMovementTelemetryData\@\@QEBAMXZ
     */
    MCAPI float getAverage() const;
    /**
     * @symbol ?reset\@PlayerMovementTelemetryData\@\@QEAAXXZ
     */
    MCAPI void reset();
    // NOLINTEND
};
