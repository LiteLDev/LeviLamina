#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetricsImpl {
public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&);
    ServerMetricsImpl(ServerMetricsImpl const&);
    ServerMetricsImpl();

public:
    // NOLINTBEGIN
    // vIndex: 0, symbol: ??1@@UEAA@XZ
    virtual ~ServerMetricsImpl() = default;

    // vIndex: 1, symbol: ?sendPeriodicMetrics@ServerMetricsImpl@@UEAAXAEAVServerInstance@@@Z
    virtual void sendPeriodicMetrics(class ServerInstance&);

    // vIndex: 2, symbol:
    // ?sendServerTickTime@ServerMetricsImpl@@UEAAXAEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
    virtual void sendServerTickTime(std::chrono::nanoseconds const&);

    // vIndex: 3, symbol: ?sendChunkLoadTelemetryData@ServerMetricsImpl@@UEAAXXZ
    virtual void sendChunkLoadTelemetryData();

    // symbol: ??0ServerMetricsImpl@@QEAA@PEAVServerCommunicationInterface@@@Z
    MCAPI explicit ServerMetricsImpl(class ServerCommunicationInterface*);

    // NOLINTEND

    // private:
    // NOLINTBEGIN
    // symbol: ?sendPeriodicMetricsInternal@ServerMetricsImpl@@AEAAXAEAVServerInstance@@@Z
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance&);

    // NOLINTEND
};
