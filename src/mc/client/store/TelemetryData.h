#pragma once

#include "mc/_HeaderOutputPredefine.h"

namespace storeSearch {

struct TelemetryData {

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STORESEARCH_TELEMETRYDATA
public:
    TelemetryData& operator=(TelemetryData const&) = delete;
    TelemetryData(TelemetryData const&)            = delete;
    TelemetryData()                                = delete;
#endif

public:
};

}; // namespace storeSearch
