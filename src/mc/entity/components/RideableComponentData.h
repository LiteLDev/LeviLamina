#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RideableComponentData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RIDEABLECOMPONENTDATA
public:
    RideableComponentData& operator=(RideableComponentData const&) = delete;
    RideableComponentData(RideableComponentData const&)            = delete;
    RideableComponentData()                                        = delete;
#endif

public:
    /**
     * @symbol ??1RideableComponentData\@\@QEAA\@XZ
     */
    MCAPI ~RideableComponentData();
};
