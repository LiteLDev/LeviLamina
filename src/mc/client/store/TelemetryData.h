#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace storeSearch {

struct TelemetryData {

public:
    // prevent constructor by default
    TelemetryData& operator=(TelemetryData const&) = delete;
    TelemetryData(TelemetryData const&)            = delete;
    TelemetryData()                                = delete;
};

}; // namespace storeSearch
