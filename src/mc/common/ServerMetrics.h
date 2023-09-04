#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetrics {
public:
    // prevent constructor by default
    ServerMetrics& operator=(ServerMetrics const&) = delete;
    ServerMetrics(ServerMetrics const&)            = delete;
    ServerMetrics()                                = delete;

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: __unk_vfn_0
    virtual void __unk_vfn_0();

    // vIndex: 1, symbol: ?sendPeriodicMetrics@ServerMetricsImpl@@UEAAXAEAVServerInstance@@@Z
    virtual void sendPeriodicMetrics(class ServerInstance&) = 0;

    // vIndex: 2, symbol:
    // ?sendServerTickTime@ServerMetricsImpl@@UEAAXAEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    virtual void sendServerTickTime(std::chrono::nanoseconds const&) = 0;

    // vIndex: 3, symbol: ?sendChunkLoadTelemetryData@ServerMetricsImpl@@UEAAXXZ
    virtual void sendChunkLoadTelemetryData() = 0;

    // symbol: ??1ServerMetrics@@UEAA@XZ
    MCVAPI ~ServerMetrics();

    // NOLINTEND
};
