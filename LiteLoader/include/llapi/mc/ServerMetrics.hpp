/**
 * @file  ServerMetrics.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerMetrics.
 *
 */
class ServerMetrics {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMETRICS
public:
    class ServerMetrics& operator=(class ServerMetrics const &) = delete;
    ServerMetrics(class ServerMetrics const &) = delete;
    ServerMetrics() = delete;
#endif

public:
    /**
     * @vftbl 0
     * @symbol __unk_vfn_0
     */
    virtual void __unk_vfn_0();
    /**
     * @vftbl 1
     * @symbol ?sendPeriodicMetrics\@ServerMetricsImpl\@\@UEAAXAEAVServerInstance\@\@\@Z
     */
    virtual void sendPeriodicMetrics(class ServerInstance &) = 0;
    /**
     * @vftbl 2
     * @symbol ?sendServerTickTime\@ServerMetricsImpl\@\@UEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &) = 0;
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

};
