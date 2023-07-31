#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitTrackingInfo {

public:
    // prevent constructor by default
    CircuitTrackingInfo& operator=(CircuitTrackingInfo const&) = delete;
    CircuitTrackingInfo(CircuitTrackingInfo const&)            = delete;
    CircuitTrackingInfo()                                      = delete;

public:
    // NOLINTBEGIN
    /**
     * @symbol ??0CircuitTrackingInfo\@\@QEAA\@V?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI CircuitTrackingInfo(class gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);
    // NOLINTEND
};
