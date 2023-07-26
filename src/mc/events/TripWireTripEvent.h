#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct TripWireTripEvent {

public:
    // prevent constructor by default
    TripWireTripEvent& operator=(TripWireTripEvent const&) = delete;
    TripWireTripEvent()                                    = delete;

public:
    /**
     * @symbol ??0TripWireTripEvent\@\@QEAA\@AEBU0\@\@Z
     */
    MCAPI TripWireTripEvent(struct TripWireTripEvent const&); // NOLINT
    /**
     * @symbol ??1TripWireTripEvent\@\@QEAA\@XZ
     */
    MCAPI ~TripWireTripEvent(); // NOLINT
};
