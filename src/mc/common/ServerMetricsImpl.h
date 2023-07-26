#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetricsImpl {

public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&) = delete;
    ServerMetricsImpl(ServerMetricsImpl const&)            = delete;
    ServerMetricsImpl()                                    = delete;

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0(); // NOLINT
    /**
     * @vftbl 1
     * @symbol ?sendPeriodicMetrics\@ServerMetricsImpl\@\@UEAAXAEAVServerInstance\@\@\@Z
     */
    virtual void sendPeriodicMetrics(class ServerInstance&); // NOLINT
    /**
     * @vftbl 2
     * @symbol
     * ?sendServerTickTime\@ServerMetricsImpl\@\@UEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void
    sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const&); // NOLINT
    /**
     * @vftbl 3
     * @symbol ?sendChunkLoadTelemetryData\@ServerMetricsImpl\@\@UEAAXXZ
     */
    virtual void sendChunkLoadTelemetryData(); // NOLINT
    /**
     * @symbol ??0ServerMetricsImpl\@\@QEAA\@PEAVServerCommunicationInterface\@\@\@Z
     */
    MCAPI ServerMetricsImpl(class ServerCommunicationInterface*); // NOLINT

    // private:
    /**
     * @symbol ?sendPeriodicMetricsInternal\@ServerMetricsImpl\@\@AEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance&); // NOLINT

private:
};
