#pragma once

#include "mc/_HeaderOutputPredefine.h"

class ServerMetricsImpl {

public:
    // prevent constructor by default
    ServerMetricsImpl& operator=(ServerMetricsImpl const&) = delete;
    ServerMetricsImpl(ServerMetricsImpl const&)            = delete;
    ServerMetricsImpl()                                    = delete;

public:
    // NOLINTBEGIN
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?sendPeriodicMetrics\@ServerMetricsImpl\@\@UEAAXAEAVServerInstance\@\@\@Z
     */
    virtual void sendPeriodicMetrics(class ServerInstance&);
    /**
     * @vftbl 2
     * @symbol
     * ?sendServerTickTime\@ServerMetricsImpl\@\@UEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void sendServerTickTime(std::chrono::nanoseconds const&);
    /**
     * @vftbl 3
     * @symbol ?sendChunkLoadTelemetryData\@ServerMetricsImpl\@\@UEAAXXZ
     */
    virtual void sendChunkLoadTelemetryData();
    /**
     * @symbol ??0ServerMetricsImpl\@\@QEAA\@PEAVServerCommunicationInterface\@\@\@Z
     */
    MCAPI ServerMetricsImpl(class ServerCommunicationInterface*);
    // NOLINTEND

    // private:
    // NOLINTBEGIN
    /**
     * @symbol ?sendPeriodicMetricsInternal\@ServerMetricsImpl\@\@AEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance&);
    // NOLINTEND
};
