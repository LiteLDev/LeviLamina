#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetrics {
public:
    // prevent constructor by default
    ServerMetrics& operator=(ServerMetrics const&);
    ServerMetrics(ServerMetrics const&);
    ServerMetrics();

public:
    // NOLINTBEGIN
    // vIndex: 0
    virtual ~ServerMetrics();

    // vIndex: 1
    virtual void sendPeriodicMetrics(class ServerInstance& serverInstance) = 0;

    // vIndex: 2
    virtual void sendServerTickTime(std::chrono::nanoseconds const& timepoint) = 0;

    // vIndex: 3
    virtual void sendChunkLoadTelemetryData() = 0;

    // NOLINTEND

    // thunks
public:
    // NOLINTBEGIN
    MCAPI static void** $vftable();

    MCAPI void dtor$();

    // NOLINTEND
};
