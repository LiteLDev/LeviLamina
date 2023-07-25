#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace librarySearch {

struct TelemetryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIBRARYSEARCH_TELEMETRYDATA
public:
    TelemetryData& operator=(TelemetryData const&) = delete;
    TelemetryData(TelemetryData const&)            = delete;
    TelemetryData()                                = delete;
#endif

public:
};

}; // namespace librarySearch
