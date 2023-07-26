#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct RideableComponentData {

public:
    // prevent constructor by default
    RideableComponentData& operator=(RideableComponentData const&) = delete;
    RideableComponentData(RideableComponentData const&)            = delete;
    RideableComponentData()                                        = delete;

public:
    /**
     * @symbol ??1RideableComponentData\@\@QEAA\@XZ
     */
    MCAPI ~RideableComponentData(); // NOLINT
};
