#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTrackerReport {
public:
    // prevent constructor by default
    PerfContextTrackerReport& operator=(PerfContextTrackerReport const&);
    PerfContextTrackerReport(PerfContextTrackerReport const&);
    PerfContextTrackerReport();

public:
    // NOLINTBEGIN
    MCAPI void reset();

    MCAPI ~PerfContextTrackerReport();

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI void dtor$();

    // NOLINTEND
};
