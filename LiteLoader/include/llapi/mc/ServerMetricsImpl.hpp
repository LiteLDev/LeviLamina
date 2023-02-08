/**
 * @file  ServerMetricsImpl.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class ServerMetricsImpl.
 *
 */
class ServerMetricsImpl {

#define AFTER_EXTRA

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
     * @symbol  __unk_destructor_0
     */
    virtual ~ServerMetricsImpl();
    /**
     * @hash   -712161291
     * @vftbl  1
     * @symbol  ?sendPeriodicMetrics\@ServerMetricsImpl\@\@UEAAXAEAVServerInstance\@\@\@Z
     */
    virtual void sendPeriodicMetrics(class ServerInstance &);
    /**
     * @hash   -784991199
     * @vftbl  2
     * @symbol  ?sendServerTickTime\@ServerMetricsImpl\@\@UEAAXAEBV?$duration\@_JU?$ratio\@$00$0DLJKMKAA\@\@std\@\@\@chrono\@std\@\@\@Z
     */
    virtual void sendServerTickTime(class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> const &);
    /**
     * @hash   720907647
     * @vftbl  3
     * @symbol  ?sendChunkLoadTelemetryData\@ServerMetricsImpl\@\@UEAAXXZ
     */
    virtual void sendChunkLoadTelemetryData();
    /**
     * @vftbl  4
     * @symbol  __unk_vfn_4
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol  __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @vftbl  6
     * @symbol  __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @vftbl  7
     * @symbol  __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @vftbl  8
     * @symbol  ?_Delete_this\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEAAX_N\@Z
     */
    virtual void _Delete_this(bool);
    /**
     * @vftbl  9
     * @symbol  ?_Get\@?$_Func_impl_no_alloc\@V?$_Fake_no_copy_callable_adapter\@P8thread\@std\@\@EAAXXZPEAV12\@\@std\@\@X$$V\@std\@\@EEBAPEBXXZ
     */
    virtual void const * _Get() const;
    /**
     * @hash   791442546
     * @symbol  ??0ServerMetricsImpl\@\@QEAA\@PEAVServerCommunicationInterface\@\@\@Z
     */
    MCAPI ServerMetricsImpl(class ServerCommunicationInterface *);

//private:
    /**
     * @hash   -892091925
     * @symbol  ?sendPeriodicMetricsInternal\@ServerMetricsImpl\@\@AEAAXAEAVServerInstance\@\@\@Z
     */
    MCAPI void sendPeriodicMetricsInternal(class ServerInstance &);

private:

};