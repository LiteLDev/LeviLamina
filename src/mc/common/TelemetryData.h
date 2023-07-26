#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace librarySearch {

struct TelemetryData {

public:
    // prevent constructor by default
    TelemetryData& operator=(TelemetryData const&) = delete;
    TelemetryData(TelemetryData const&)            = delete;
    TelemetryData()                                = delete;
};

}; // namespace librarySearch
