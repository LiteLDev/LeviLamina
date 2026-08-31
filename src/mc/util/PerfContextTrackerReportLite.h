#pragma once

#include "mc/_HeaderOutputPredefine.h"

class PerfContextTrackerReportLite {
public:
    // member variables
    // NOLINTBEGIN
    ::ll::UntypedStorage<8, 32> mUnk2c11f8;
    ::ll::UntypedStorage<4, 4>  mUnk5d4aad;
    // NOLINTEND

public:
    // prevent constructor by default
    PerfContextTrackerReportLite& operator=(PerfContextTrackerReportLite const&);
    PerfContextTrackerReportLite(PerfContextTrackerReportLite const&);
    PerfContextTrackerReportLite();

public:
    // member functions
    // NOLINTBEGIN
    MCNAPI ~PerfContextTrackerReportLite();
    // NOLINTEND

public:
    // destructor thunk
    // NOLINTBEGIN
    MCNAPI void $dtor();
    // NOLINTEND
};
