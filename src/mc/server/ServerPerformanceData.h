#pragma once

#include "mc/_HeaderOutputPredefine.h"

struct ServerPerformanceData {
public:
    // prevent constructor by default
    ServerPerformanceData& operator=(ServerPerformanceData const&);
    ServerPerformanceData(ServerPerformanceData const&);
    ServerPerformanceData();
};
