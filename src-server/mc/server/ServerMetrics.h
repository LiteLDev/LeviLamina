#pragma once

#include "mc/_HeaderOutputPredefine.h"

// auto generated forward declare list
// clang-format off
class ServerInstance;
// clang-format on

class ServerMetrics {
public:
    // virtual functions
    // NOLINTBEGIN
    virtual ~ServerMetrics();

    virtual void sendPeriodicMetrics(::ServerInstance& serverInstance) = 0;

    virtual void sendServerTickTime(::std::chrono::nanoseconds const& timepoint) = 0;

    virtual void sendChunkLoadTelemetryData() = 0;
    // NOLINTEND
};
