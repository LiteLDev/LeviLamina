#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated inclusion list
#include "mc/deps/core/profiler/perf_metrics/Counter.h"

namespace PerfMetrics {

class Gauge : public ::PerfMetrics::Counter {
public:
    // prevent constructor by default
    Gauge& operator=(Gauge const&);
    Gauge(Gauge const&);
    Gauge();
};

} // namespace PerfMetrics
