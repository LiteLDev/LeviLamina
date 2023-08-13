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
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?sendPeriodicMetrics\@ServerMetricsImpl\@\@UEAAXAEAVServerInstance\@\@\@Z
     */
    virtual void sendPeriodicMetrics(class ServerInstance&) = 0;
    /**
     * @vftbl 2
     * @symbol
     * ?sendServerTickTime\@ServerMetricsImpl\@\@UEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void sendServerTickTime(std::chrono::nanoseconds const&) = 0;
    /**
     * @vftbl 3
     * @symbol ?sendChunkLoadTelemetryData\@ServerMetricsImpl\@\@UEAAXXZ
     */
    virtual void sendChunkLoadTelemetryData() = 0;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SERVERMETRICS
    /**
     * @symbol __unk_destructor_-1
     */
    MCVAPI ~ServerMetrics();
#endif
    // NOLINTEND
};
