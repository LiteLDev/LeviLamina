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
    // symbol: ?reset@PerfContextTrackerReport@@QEAAXXZ
    MCAPI void reset();

    // symbol: ??1PerfContextTrackerReport@@QEAA@XZ
    MCAPI ~PerfContextTrackerReport();

    // NOLINTEND
};
