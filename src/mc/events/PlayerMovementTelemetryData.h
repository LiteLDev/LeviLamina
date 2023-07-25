#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PlayerMovementTelemetryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYERMOVEMENTTELEMETRYDATA
public:
    PlayerMovementTelemetryData& operator=(PlayerMovementTelemetryData const&) = delete;
    PlayerMovementTelemetryData(PlayerMovementTelemetryData const&)            = delete;
#endif

public:
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
};
