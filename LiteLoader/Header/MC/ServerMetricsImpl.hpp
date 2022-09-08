/**
 * @file  ServerMetricsImpl.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerMetricsImpl.
 *
 */
class ServerMetricsImpl {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SERVERMETRICSIMPL
public:
    class ServerMetricsImpl& operator=(class ServerMetricsImpl const &) = delete;
    ServerMetricsImpl(class ServerMetricsImpl const &) = delete;
    ServerMetricsImpl() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1928027662
     */
    virtual ~ServerMetricsImpl();
    /**
     * @vftbl  1
     * @symbol ?sendPeriodicMetrics@ServerMetricsImpl@@UEAAXAEAVServerInstance@@@Z
     * @hash   -818716971
     */
    virtual void sendPeriodicMetrics(class ServerInstance &);
    /**
     * @vftbl  2
     * @symbol ?sendServerTickTime@ServerMetricsImpl@@UEAAXAEBV?$duration@_JU?$ratio@$00$0DLJKMKAA@@std@@@chrono@std@@@Z
     * @hash   -891516127
     */
    virtual void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &);
    /**
     * @vftbl  3
     * @symbol ?sendChunkLoadTelemetryData@ServerMetricsImpl@@UEAAXXZ
     * @hash   614351967
     */
    virtual void sendChunkLoadTelemetryData();
    /**
     * @symbol ??0ServerMetricsImpl@@QEAA@PEAVServerCommunicationInterface@@@Z
     * @hash   684809986
     */
    MCAPI ServerMetricsImpl(class ServerCommunicationInterface *);

//private:
    /**
     * @symbol ?sendPeriodicMetricsInternal@ServerMetricsImpl@@AEAAXAEAVServerInstance@@@Z
     * @hash   -998647605
     */
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance &);

private:

};