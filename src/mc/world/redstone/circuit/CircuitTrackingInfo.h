#pragma once

#include "mc/_HeaderOutputPredefine.h"

class CircuitTrackingInfo {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CIRCUITTRACKINGINFO
public:
    CircuitTrackingInfo& operator=(CircuitTrackingInfo const&) = delete;
    CircuitTrackingInfo(CircuitTrackingInfo const&)            = delete;
    CircuitTrackingInfo()                                      = delete;
#endif

public:
    /**
     * @symbol ??0CircuitTrackingInfo\@\@QEAA\@V?$not_null\@PEAVBaseCircuitComponent\@\@\@gsl\@\@AEBVBlockPos\@\@H\@Z
     */
    MCAPI CircuitTrackingInfo(class gsl::not_null<class BaseCircuitComponent*>, class BlockPos const&, int);
};
