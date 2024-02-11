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
    // vIndex: 0, symbol: ??1ServerMetrics@@UEAA@XZ
    virtual ~ServerMetrics();

    // vIndex: 1, symbol: ?sendPeriodicMetrics@ServerMetricsImpl@@UEAAXAEAVServerInstance@@@Z
    virtual void sendPeriodicMetrics(class ServerInstance& serverInstance) = 0;

    // vIndex: 2, symbol:
    // ?sendServerTickTime@ServerMetricsImpl@@UEAAXAEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    virtual void sendServerTickTime(std::chrono::nanoseconds const& timepoint) = 0;

    // vIndex: 3, symbol: ?sendChunkLoadTelemetryData@ServerMetricsImpl@@UEAAXXZ
    virtual void sendChunkLoadTelemetryData() = 0;

    // NOLINTEND
};
